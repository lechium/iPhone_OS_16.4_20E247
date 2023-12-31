//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIFocusSystem;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _UIFocusItemFrameReporter : NSObject
{
    NSObject<OS_dispatch_source> *_focusedFrameUpdateTimer;	// 8 = 0x8
    _Bool _hasStagedFocusFrameUpdate;	// 16 = 0x10
    _Bool _enabled;	// 17 = 0x11
    UIFocusSystem *_focusSystem;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000074a059
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak UIFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
- (struct CGRect)_globalFrameForFocusedItemInSystem:(id)arg1;	// IMP=0x0000000000749e22
- (struct CGRect)_clampRect:(struct CGRect)arg1 insideRect:(struct CGRect)arg2;	// IMP=0x0000000000749cee
- (_Bool)_rect:(struct CGRect)arg1 differsFromRect:(struct CGRect)arg2 lowerThreshold:(double)arg3 upperThreshold:(double)arg4;	// IMP=0x0000000000749bb6
- (void)_cancelRepeatingFrameUpdate;	// IMP=0x0000000000749b80
- (void)_scheduleRepeatingFrameUpdate;	// IMP=0x0000000000749a38
- (void)_reportFocusFrameUpdateForGlobalFrame:(struct CGRect)arg1;	// IMP=0x00000000007497a5
- (void)_reportFocusFrameForCurrentlyFocusedItem;	// IMP=0x0000000000749723

@end

