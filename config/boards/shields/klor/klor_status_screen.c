/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include "output_status.h"
#include "battery_status.h"
#include "profile_status.h"
#include <zmk/display/widgets/layer_status.h>
#include <zmk/display/widgets/wpm_status.h>
#include <zmk/display/status_screen.h>

#include <logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

LV_IMG_DECLARE(klorlogo);

#if IS_ENABLED(CONFIG_CUSTOM_WIDGET_BATTERY_STATUS)
static struct zmk_widget_battery_status battery_status_widget;
#endif

#if IS_ENABLED(CONFIG_CUSTOM_WIDGET_OUTPUT_STATUS)
static struct zmk_widget_output_status output_status_widget;
#endif

#if IS_ENABLED(CONFIG_CUSTOM_WIDGET_PROFILE_STATUS)
static struct custom_widget_profile_status profile_status_widget;
#endif


/*
#if IS_ENABLED(CONFIG_ZMK_WIDGET_LAYER_STATUS)
static struct zmk_widget_layer_status layer_status_widget;
#endif
*/

/*
#if IS_ENABLED(CONFIG_ZMK_WIDGET_WPM_STATUS)
static struct zmk_widget_wpm_status wpm_status_widget;
#endif
*/

lv_style_t global_style;

lv_obj_t *zmk_display_status_screen() {
    lv_obj_t *screen;
/*
 #if !IS_ENABLED(CONFIG_ZAPHOD_BONGO_CAT)
     lv_obj_t *dont_label;
     lv_obj_t *panic_label;
 #endif 
    lv_obj_t *center_frame;

    lv_style_init(&global_style);
    lv_style_set_text_font(&global_style, LV_STATE_DEFAULT, &lv_font_montserrat_26);
    lv_style_set_text_letter_space(&global_style, LV_STATE_DEFAULT, 1);
    lv_style_set_text_line_space(&global_style, LV_STATE_DEFAULT, 1);
*/


    screen = lv_obj_create(NULL, NULL);

/*
    lv_obj_add_style(screen, LV_LABEL_PART_MAIN, &global_style);
*/

#if IS_ENABLED(CONFIG_CUSTOM_WIDGET_BATTERY_STATUS)
    zmk_widget_battery_status_init(&battery_status_widget, screen);
    lv_obj_align(zmk_widget_battery_status_obj(&battery_status_widget), NULL, LV_ALIGN_IN_TOP_LEFT, 10, 12);
#endif


#if IS_ENABLED(CONFIG_CUSTOM_WIDGET_OUTPUT_STATUS)
    zmk_widget_output_status_init(&output_status_widget, screen);
    lv_obj_align(zmk_widget_output_status_obj(&output_status_widget), NULL, LV_ALIGN_IN_BOTTOM_RIGHT, -8, -6);
#endif

#if IS_ENABLED(CONFIG_CUSTOM_WIDGET_PROFILE_STATUS)
    custom_widget_profile_status_init(&profile_status_widget, screen);
    lv_obj_align(custom_widget_profile_status_obj(&profile_status_widget), NULL, LV_ALIGN_IN_TOP_MID, 0, 0);
#endif

/*
    center_frame = lv_cont_create(screen, NULL);
    lv_obj_set_auto_realign(center_frame, true);
    lv_obj_align(center_frame, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_cont_set_fit(center_frame, LV_FIT_TIGHT);
    lv_cont_set_layout(center_frame, LV_LAYOUT_CENTER);

#if IS_ENABLED(CONFIG_ZAPHOD_BONGO_CAT)
    zaphod_bongo_cat_widget_init(&bongo_widget, center_frame);
#else
    dont_label = lv_label_create(center_frame, NULL);
    lv_label_set_text(dont_label, "Don't");

    panic_label = lv_label_create(center_frame, NULL);
    lv_label_set_text(panic_label, "Panic");
#endif // IS_ENABLED(CONFIG_ZAPHOD_BONGO_CAT)

#if IS_ENABLED(CONFIG_ZMK_WIDGET_LAYER_STATUS)
    zmk_widget_layer_status_init(&layer_status_widget, screen);
    lv_obj_align(zmk_widget_layer_status_obj(&layer_status_widget), NULL, LV_ALIGN_IN_BOTTOM_LEFT,
                 0, 0);
#endif

#if IS_ENABLED(CONFIG_ZMK_WIDGET_WPM_STATUS)
    zmk_widget_wpm_status_init(&wpm_status_widget, screen);
    lv_obj_align(zmk_widget_wpm_status_obj(&wpm_status_widget), NULL, LV_ALIGN_IN_BOTTOM_RIGHT, -12, 0);
#endif
*/
    
    
    lv_obj_t * klorlogo_icon;
    klorlogo_icon = lv_img_create(screen, NULL);
    lv_img_set_src(klorlogo_icon, &klorlogo);
    lv_obj_align(klorlogo_icon, NULL, LV_ALIGN_IN_TOP_MID, 0,0);
    

    return screen;
}
