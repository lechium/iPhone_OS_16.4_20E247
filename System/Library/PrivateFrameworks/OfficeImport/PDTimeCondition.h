//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PDAnimationTarget;

__attribute__((visibility("hidden")))
@interface PDTimeCondition : NSObject
{
    _Bool mHasDelay;	// 8 = 0x8
    int mDelay;	// 12 = 0xc
    _Bool mHasTriggerEvent;	// 16 = 0x10
    int mTriggerEvent;	// 20 = 0x14
    PDAnimationTarget *mTarget;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000043b18e
- (id)description;	// IMP=0x000000000043b150
- (void)setTarget:(id)arg1;	// IMP=0x000000000023da15
- (id)target;	// IMP=0x000000000043b142
- (void)setTriggerEvent:(int)arg1;	// IMP=0x00000000001dcd20
- (int)triggerEvent;	// IMP=0x000000000043b139
- (_Bool)hasTriggerEvent;	// IMP=0x000000000043b130
- (void)setDelay:(int)arg1;	// IMP=0x00000000001d30d9
- (int)delay;	// IMP=0x000000000043b11f
- (_Bool)hasDelay;	// IMP=0x000000000043b116
- (id)init;	// IMP=0x00000000001d2e3c
- (int)writeDelay;	// IMP=0x0000000000444934

@end

