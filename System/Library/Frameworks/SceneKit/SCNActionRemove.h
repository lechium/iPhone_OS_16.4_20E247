//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNAction.h"

__attribute__((visibility("hidden")))
@interface SCNActionRemove : SCNAction
{
    _Bool _hasFired;	// 8 = 0x8
}

+ (id)removeFromParentNode;	// IMP=0x00600000002bc022
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000002bc01a
- (id)reversedAction;	// IMP=0x00000000002bc0ed
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002bc0cb
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;	// IMP=0x00000000002bc077
- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;	// IMP=0x00000000002bc03b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002bbfaa
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002bbf22
- (id)init;	// IMP=0x00000000002bbee3

@end

