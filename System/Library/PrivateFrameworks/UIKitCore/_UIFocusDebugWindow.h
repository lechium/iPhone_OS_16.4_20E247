//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIWindow.h"

@class NSArray, NSTimer, UIScrollView;

__attribute__((visibility("hidden")))
@interface _UIFocusDebugWindow : UIWindow
{
    NSTimer *_timer;	// 304 = 0x130
    NSArray *_cacheModules;	// 312 = 0x138
    UIScrollView *_scrollView;	// 320 = 0x140
    struct CGPoint _lastDragPoint;	// 328 = 0x148
}

+ (_Bool)_isSystemWindow;	// IMP=0x0060000000e0a3de
+ (_Bool)hasAnyModules;	// IMP=0x0060000000e0a396
+ (id)moduleClasses;	// IMP=0x00600000009e0504
- (void).cxx_destruct;	// IMP=0x0000000000e0b228
- (void)_update:(id)arg1;	// IMP=0x0000000000e0b0c9
- (void)_updateTimer;	// IMP=0x0000000000e0afe6
- (void)_searchForFocusRegionsInContext:(id)arg1;	// IMP=0x0000000000e0afe0
- (_Bool)_isEligibleForFocusOcclusion;	// IMP=0x0000000000e0afd8
- (_Bool)isTransparentFocusItem;	// IMP=0x0000000000e0afd0
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000e0aedd
- (void)setHidden:(_Bool)arg1;	// IMP=0x0000000000e0ae9c
- (void)drag:(id)arg1;	// IMP=0x0000000000e0ad82
- (id)initWithWindowScene:(id)arg1;	// IMP=0x0000000000e0a3ee
- (_Bool)canBecomeKeyWindow;	// IMP=0x0000000000e0a3e6

@end
