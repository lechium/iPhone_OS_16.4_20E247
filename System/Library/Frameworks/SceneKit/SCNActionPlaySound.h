//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNAction.h"

__attribute__((visibility("hidden")))
@interface SCNActionPlaySound : SCNAction
{
    struct SCNCPlaySound *_mycaction;	// 8 = 0x8
}

+ (id)playAudioSource:(id)arg1 waitForCompletion:(_Bool)arg2;	// IMP=0x00600000000938e8
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000938e0
- (id)parameters;	// IMP=0x00000000000939ee
- (id)reversedAction;	// IMP=0x00000000000939d4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000093952
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000093854
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000093727
- (void)_setupDuration;	// IMP=0x00000000000936db
- (id)init;	// IMP=0x0000000000093626

@end

