/*
 * Copyright (c) 2020 The ZMK Contributors, 2022 MarvFPV
 *
 * SPDX-License-Identifier: MIT
 */

#include <kernel.h>
#include <bluetooth/services/bas.h>

#include <logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include <zmk/display.h>
#include "output_status.h"
#include <zmk/event_manager.h>
#include <zmk/events/usb_conn_state_changed.h>
#include <zmk/events/ble_active_profile_changed.h>
#include <zmk/events/endpoint_selection_changed.h>
#include <zmk/usb.h>
#include <zmk/ble.h>
#include <zmk/endpoints.h>

static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);
static lv_style_t label_style;

LV_IMG_DECLARE(usb_out);
LV_IMG_DECLARE(bt_out_ok);
LV_IMG_DECLARE(bt_out_nc);
LV_IMG_DECLARE(bt_out_search);

/*
LV_IMG_DECLARE(bt_pro_0);
LV_IMG_DECLARE(bt_pro_1);
LV_IMG_DECLARE(bt_pro_2);
LV_IMG_DECLARE(bt_pro_3);
LV_IMG_DECLARE(bt_pro_4);
*/

static bool style_initialized = false;

K_MUTEX_DEFINE(output_status_mutex);

struct output_status_state {
    enum zmk_endpoint selected_endpoint;
    bool active_profile_connected;
    bool active_profile_bonded;
    uint8_t active_profile_index;
};

static struct output_status_state get_state(const zmk_event_t *_eh) {
    return (struct output_status_state){.selected_endpoint = zmk_endpoints_selected(),
                                        .active_profile_connected =
                                            zmk_ble_active_profile_is_connected(),
                                        .active_profile_bonded = !zmk_ble_active_profile_is_open(),
                                        .active_profile_index = zmk_ble_active_profile_index()};
    ;
}

static void set_status_symbol(lv_obj_t *icon, struct output_status_state state) {
    // char text[9] = {};

    k_mutex_lock(&output_status_mutex, K_FOREVER);

    switch (state.selected_endpoint) {
    case ZMK_ENDPOINT_USB:
        lv_img_set_src(icon, &usb_out);
        break;
    case ZMK_ENDPOINT_BLE:
        if (state.active_profile_bonded) {
            if (state.active_profile_connected) {
                lv_img_set_src(icon, &bt_out_ok);
            } else {
                lv_img_set_src(icon, &bt_out_nc);
            }
        } else {
            lv_img_set_src(icon, &bt_out_search);
        }
        break;
    }

   k_mutex_unlock(&output_status_mutex); 
}

static void output_status_update_cb(struct output_status_state state) {
    struct zmk_widget_output_status *widget;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) { set_status_symbol(widget->obj, state); }
}

ZMK_DISPLAY_WIDGET_LISTENER(widget_output_status, struct output_status_state,
                            output_status_update_cb, get_state)
ZMK_SUBSCRIPTION(widget_output_status, zmk_endpoint_selection_changed);

#if defined(CONFIG_USB)
ZMK_SUBSCRIPTION(widget_output_status, zmk_usb_conn_state_changed);
#endif
#if defined(CONFIG_ZMK_BLE)
ZMK_SUBSCRIPTION(widget_output_status, zmk_ble_active_profile_changed);
#endif

int zmk_widget_output_status_init(struct zmk_widget_output_status *widget, lv_obj_t *parent) {
    widget->obj = lv_img_create(parent, NULL);

    lv_obj_add_style(widget->obj, LV_LABEL_PART_MAIN, &label_style);

    //set_status_symbol(widget->obj, output_status_state);

    sys_slist_append(&widgets, &widget->node);

    widget_output_status_init();
    return 0;
}

lv_obj_t *zmk_widget_output_status_obj(struct zmk_widget_output_status *widget) {
    return widget->obj;
}