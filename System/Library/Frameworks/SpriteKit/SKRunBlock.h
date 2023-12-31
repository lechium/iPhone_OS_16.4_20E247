//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SKRunBlock : SKAction
{
    CDUnknownBlockType _block;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)runBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;	// IMP=0x0060000000059a04
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000597b6
- (void).cxx_destruct;	// IMP=0x0000000000059b0a
- (id)reversedAction;	// IMP=0x0000000000059af0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000059ab5
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;	// IMP=0x0000000000059946
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005989f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000059830
- (id)init;	// IMP=0x00000000000597be

@end

