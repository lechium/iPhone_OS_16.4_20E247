//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

@protocol NSObject;

__attribute__((visibility("hidden")))
@interface SKPerformSelector : SKAction
{
    SEL _selector;	// 8 = 0x8
    id <NSObject> _weakTarget;	// 16 = 0x10
    id <NSObject> _strongTarget;	// 24 = 0x18
}

+ (id)perfromSelector:(SEL)arg1 onTarget:(id)arg2;	// IMP=0x00600000000b0acb
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000b05ee
- (void).cxx_destruct;	// IMP=0x00000000000b0c08
- (id)reversedAction;	// IMP=0x00000000000b0bee
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b0b74
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;	// IMP=0x00000000000b0a2a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b0882
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b06d3
- (void)dealloc;	// IMP=0x00000000000b066a
- (id)init;	// IMP=0x00000000000b05f6

@end
