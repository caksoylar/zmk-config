/*
 * Copyright (c) 2021 Pete Johanson
 *
 * SPDX-License-Identifier: MIT
 */


#include <lvgl.h>
#include <zephyr/kernel.h>

struct zaphod_bongo_cat_widget {
    sys_snode_t node;
    lv_obj_t *obj;
    lv_anim_t anim;
};

int zaphod_bongo_cat_widget_init(struct zaphod_bongo_cat_widget *widget, lv_obj_t *parent);
lv_obj_t *zaphod_bongo_cat_widget_obj(struct zaphod_bongo_cat_widget *widget);
