//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APBackoffTimer, APSigningAuthority;
@protocol OS_dispatch_queue;

@interface APSigningAuthorityProvider : NSObject
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    APSigningAuthority *_signingAuthority;	// 24 = 0x18
    APBackoffTimer *_backoffTimer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000dc7d8
// Error: Property attributes should begin with the type ('T') attribute, property name: backoffTimer
// Property attributes: (null)

@property(retain, nonatomic) APSigningAuthority *signingAuthority; // @synthesize signingAuthority=_signingAuthority;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_validateSigningAuthority:(id)arg1;	// IMP=0x00100000000dc52f
- (void)_signingAuthorityStateChanged:(id)arg1;	// IMP=0x00100000000dc3d5
- (void)_requestNewSigningAuthority;	// IMP=0x00100000000dc26d
- (void)backoffTimerFired;	// IMP=0x00100000000dc25b
- (id)init;	// IMP=0x00100000000dc13d

@end

