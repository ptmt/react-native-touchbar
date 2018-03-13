//
//  RNTouchbar.h
//  RNTouchbar
//
//  Created by Dmitriy Loktev on 10/28/16.
//  Copyright © 2016 React Native Community. All rights reserved.
//
#import <Cocoa/Cocoa.h>
#import "NSView+React.h"
#import "React/RCTEventDispatcher.h"

@interface NSWindow (Touchbar) <NSTouchBarDelegate>
@property (strong, nonatomic) NSCustomTouchBarItem *customViewItem;
@property (strong, nonatomic) NSMutableArray<NSView *> *touchBarItems;
@end

@interface RNTouchbarRootView : NSView 

- (instancetype)initWithEventDispatcher:(RCTEventDispatcher *)eventDispatcher NS_DESIGNATED_INITIALIZER;
@property (strong) NSCustomTouchBarItem *customViewItem;
@end
