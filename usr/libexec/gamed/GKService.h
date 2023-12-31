//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKClientProxy, GKDataTransport, GKPlayerCredential, GKPlayerInternal;

@interface GKService : NSObject
{
    GKClientProxy *_clientProxy;	// 8 = 0x8
    GKDataTransport *_transport;	// 16 = 0x10
    GKPlayerInternal *_localPlayer;	// 24 = 0x18
    GKPlayerCredential *_credential;	// 32 = 0x20
}

+ (Class)interfaceClass;	// IMP=0x004000000000363e
+ (unsigned long long)requiredEntitlements;	// IMP=0x0010000000003525
+ (id)serviceForBundleID:(id)arg1 localPlayer:(id)arg2;	// IMP=0x0010000000003491
+ (id)serviceFromService:(id)arg1;	// IMP=0x0010000000003391
+ (id)serviceWithTransport:(id)arg1 forClient:(id)arg2 localPlayer:(id)arg3;	// IMP=0x00100000000032fb
+ (id)serviceWithTransport:(id)arg1 forClient:(id)arg2 credential:(id)arg3;	// IMP=0x0010000000003237
- (void).cxx_destruct;	// IMP=0x0020000000003929
@property(retain) GKPlayerCredential *credential; // @synthesize credential=_credential;
@property(retain) GKPlayerInternal *localPlayer; // @synthesize localPlayer=_localPlayer;
@property(retain) GKDataTransport *transport; // @synthesize transport=_transport;
@property(retain) GKClientProxy *clientProxy; // @synthesize clientProxy=_clientProxy;
- (id)transactionGroupForPlayerInternal:(id)arg1;	// IMP=0x001000000000381a
- (id)transactionGroup;	// IMP=0x001000000000379a
- (id)transportBypassingMultiUser;	// IMP=0x0010000000003783
- (id)transactionGroupBypassingMultiUser;	// IMP=0x0010000000003771
- (_Bool)requiresAuthenticationForSelector:(SEL)arg1;	// IMP=0x001000000000375f
- (_Bool)requiresAuthentication;	// IMP=0x0010000000003757
- (id)initWithTransport:(id)arg1 forClient:(id)arg2 localPlayer:(id)arg3 credential:(id)arg4;	// IMP=0x0010000000002f99
- (id)initWithoutCredentialWithTransport:(id)arg1 forClient:(id)arg2;	// IMP=0x0010000000002f06
- (void)_coreInitWithTransport:(id)arg1 forClient:(id)arg2 localPlayer:(id)arg3 credential:(id)arg4;	// IMP=0x0010000000002d5c

@end

