//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIWindow;

__attribute__((visibility("hidden")))
@interface _UIUpdateCycleDebugOverlay : NSObject
{
    UIWindow *_windowWithBorder;	// 8 = 0x8
}

+ (id)instance;	// IMP=0x00100000000e4c9e
- (void).cxx_destruct;	// IMP=0x00000000000e504d
- (void)removeBorderFromWindow:(id)arg1;	// IMP=0x00000000000e4f56
- (void)addBorderToWindow:(id)arg1;	// IMP=0x00000000000e4e49
- (void)_updateCompleted;	// IMP=0x00000000000e4d90

@end
