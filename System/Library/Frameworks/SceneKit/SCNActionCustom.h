//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNAction.h"

__attribute__((visibility("hidden")))
@interface SCNActionCustom : SCNAction
{
}

+ (id)customActionWithDuration:(double)arg1 actionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00800000002395e9
+ (_Bool)supportsSecureCoding;	// IMP=0x0080000000239597
- (id)reversedAction;	// IMP=0x0000000000239707
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000023968b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002395a7
- (_Bool)isCustom;	// IMP=0x000000000023959f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000239543
- (void)dealloc;	// IMP=0x0000000000239514
- (id)init;	// IMP=0x0000000000239486

@end

