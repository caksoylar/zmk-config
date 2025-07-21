/*
 * Copyright (c) 2020 The ZMK Contributors, 2022 MarvFPV
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <lvgl.h>
#include <kernel.h>

struct custom_widget_profile_status {
    sys_snode_t node;
    lv_obj_t *obj;
};

int custom_widget_profile_status_init(struct custom_widget_profile_status *widget, lv_obj_t *parent);
lv_obj_t *custom_widget_profile_status_obj(struct custom_widget_profile_status *widget);