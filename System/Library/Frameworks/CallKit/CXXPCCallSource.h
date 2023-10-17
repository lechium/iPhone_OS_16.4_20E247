//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CXCallSource.h"

@class NSSet, NSString, NSURL, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface CXXPCCallSource : CXCallSource
{
    _Bool _hasVoIPBackgroundMode;	// 8 = 0x8
    struct os_unfair_lock_s _accessorLock;	// 12 = 0xc
    NSXPCConnection *_connection;	// 16 = 0x10
    NSString *_bundleIdentifier;	// 24 = 0x18
    NSURL *_bundleURL;	// 32 = 0x20
    NSString *_localizedName;	// 40 = 0x28
    NSSet *_capabilities;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000013c80
@property(readonly, nonatomic) _Bool hasVoIPBackgroundMode; // @synthesize hasVoIPBackgroundMode=_hasVoIPBackgroundMode;
@property(readonly, copy, nonatomic) NSSet *capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) struct os_unfair_lock_s accessorLock; // @synthesize accessorLock=_accessorLock;
- (id)localizedName;	// IMP=0x0000000000013c3e
- (id)bundleURL;	// IMP=0x0000000000013c2d
- (id)bundleIdentifier;	// IMP=0x0000000000013c1c
- (id)vendorProtocolDelegate;	// IMP=0x0000000000013bcc
- (_Bool)isPermittedToUseBluetoothAccessories;	// IMP=0x0000000000013af8
- (_Bool)isPermittedToUsePrivateAPI;	// IMP=0x0000000000013aad
- (_Bool)isPermittedToUsePublicAPI;	// IMP=0x0000000000013a74
- (CDStruct_6ad76789)auditToken;	// IMP=0x0000000000013a16
- (int)processIdentifier;	// IMP=0x00000000000139d2
- (_Bool)isConnected;	// IMP=0x000000000001399f
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)dealloc;	// IMP=0x00000000000138a5
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000000013003
- (id)init;	// IMP=0x0000000000012ff5

@end
