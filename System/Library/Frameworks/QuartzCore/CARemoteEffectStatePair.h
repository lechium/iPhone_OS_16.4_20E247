//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CARemoteEffectStatePair : NSObject
{
    NSString *_fromState;	// 8 = 0x8
    NSString *_toState;	// 16 = 0x10
}

+ (id)pairWithFromState:(id)arg1 toState:(id)arg2;	// IMP=0x001000000004032c
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000040324
@property(readonly, nonatomic) NSString *toState; // @synthesize toState=_toState;
@property(readonly, nonatomic) NSString *fromState; // @synthesize fromState=_fromState;
- (struct Object *)CA_copyRenderValue;	// IMP=0x00000000000401d7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000040160
- (unsigned long long)hash;	// IMP=0x00000000000400eb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000040085
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003ffab
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003ff51

@end
