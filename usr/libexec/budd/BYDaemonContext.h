//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LAContext;
@protocol OS_dispatch_queue;

@interface BYDaemonContext : NSObject
{
    LAContext *_applePayAuthenticationContext;	// 8 = 0x8
    LAContext *_biometricAuthenticationContext;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_contextQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000004fda
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *contextQueue; // @synthesize contextQueue=_contextQueue;
- (void)_destroyContexts;	// IMP=0x0010000000004e8b
- (void)_prepareContextTimeout;	// IMP=0x0010000000004de6
@property(retain, nonatomic) LAContext *biometricAuthenticationContext; // @synthesize biometricAuthenticationContext=_biometricAuthenticationContext;
@property(retain, nonatomic) LAContext *applePayAuthenticationContext; // @synthesize applePayAuthenticationContext=_applePayAuthenticationContext;
- (id)init;	// IMP=0x00100000000047d3

@end
