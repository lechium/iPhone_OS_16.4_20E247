//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIDynamicAnimator;

__attribute__((visibility("hidden")))
@interface UIDynamicAnimatorTicker : NSObject
{
    UIDynamicAnimator *_animator;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000066d989
@property __weak UIDynamicAnimator *animator; // @synthesize animator=_animator;
- (void)_displayLinkTick:(id)arg1;	// IMP=0x000000000066d8f0

@end

