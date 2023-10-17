//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MFXPCEndpointService : NSObject
{
    NSDictionary *_endpointInfoByProtocol;	// 8 = 0x8
}

+ (_Bool)handleMessage:(id)arg1 connectionState:(id)arg2 replyObject:(id *)arg3 error:(id *)arg4;	// IMP=0x00200000000cd7bc
+ (id)serviceName;	// IMP=0x00100000000cd7af
+ (id)requiredEntitlement;	// IMP=0x00100000000cd7a7
+ (id)sharedInstance;	// IMP=0x00100000000cd752
- (void).cxx_destruct;	// IMP=0x00200000000ce795
- (id)listenerForProtocolNamed:(id)arg1;	// IMP=0x00100000000ce6f5
- (id)activeListeners;	// IMP=0x00100000000ce65f
- (id)copyDiagnosticInformation;	// IMP=0x00100000000ce1be
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00100000000cdfa9
- (id)init;	// IMP=0x00100000000cd9f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
