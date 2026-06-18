/*
 * Copyright (c) 2023-2026, Tim Flynn <trflynn89@waterduck.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <AK/Types.h>

#import <Cocoa/Cocoa.h>
#import <Interface/WaterduckWebViewWindow.h>

@class BookmarksBar;
@class WaterduckWebView;

@interface Tab : WaterduckWebViewWindow

- (instancetype)init;
- (instancetype)initAsChild:(Tab*)parent
                  pageIndex:(u64)page_index;

- (BookmarksBar*)bookmarksBar;

- (void)rebuildBookmarksBar;
- (void)updateBookmarksBarDisplay:(bool)show_bookmarks_bar;

@end
