/*
 * Copyright (c) 2026, Johan Dahlin <jdahlin@gmail.com>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <gtk/gtk.h>

namespace Ladybird {

class WebContentView;

}

struct WaterduckWebView;

GType waterduck_web_view_get_type(void);
WaterduckWebView* waterduck_web_view_new(void);
Ladybird::WebContentView* waterduck_web_view_get_impl(WaterduckWebView* self);
void waterduck_web_view_set_impl(WaterduckWebView* self, Ladybird::WebContentView* impl);
