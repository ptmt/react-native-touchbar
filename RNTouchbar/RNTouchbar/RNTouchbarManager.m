//
//  RNTouchbar.m
//  RNTouchbar
//
//  Created by Dmitriy Loktev on 10/28/16.
//  Copyright © 2016 React Native Community. All rights reserved.
//

#import "RNTouchbarManager.h"
#import "RNTouchbarRootView.h"

@implementation RNTouchbarManager

RCT_EXPORT_MODULE()

- (NSView *)view
{
    NSView *view = [[RNTouchbarRootView alloc] initWithEventDispatcher:self.bridge.eventDispatcher];
    return view;
}

- (RCTShadowView *)shadowView
{
    return nil;
}

@end
