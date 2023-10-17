//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface LAACLBuilderCustomACLParams : NSObject
{
    long long _authType;	// 8 = 0x8
    long long _fallbackAuthType;	// 16 = 0x10
    NSDictionary *_apConstraints;	// 24 = 0x18
    NSDictionary *_credentials;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000eaeb
@property(retain, nonatomic) NSDictionary *credentials; // @synthesize credentials=_credentials;
@property(retain, nonatomic) NSDictionary *apConstraints; // @synthesize apConstraints=_apConstraints;
@property(nonatomic) long long fallbackAuthType; // @synthesize fallbackAuthType=_fallbackAuthType;
@property(nonatomic) long long authType; // @synthesize authType=_authType;
- (id)init;	// IMP=0x000000000000ea1a

@end
