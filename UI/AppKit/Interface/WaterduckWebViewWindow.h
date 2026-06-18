/*
 * Copyright (c) 2024, Tim Flynn <trflynn89@waterduck.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#import <Cocoa/Cocoa.h>

@class WaterduckWebView;

@interface WaterduckWebViewWindow : NSWindow

- (instancetype)initWithWebView:(WaterduckWebView*)web_view
                     windowRect:(NSRect)window_rect;

@property (nonatomic, strong) WaterduckWebView* web_view;
@property (nonatomic, weak) NSResponder* preferred_first_responder;

@end
