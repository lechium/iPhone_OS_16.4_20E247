//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol RDXPCProtocol;

@interface RDCommClient : NSObject
{
    NSXPCConnection *connection;	// 8 = 0x8
    id <RDXPCProtocol> server;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000002323
- (void)clearStatusSharedWithPeers;	// IMP=0x000000000000223e
- (void)shareStatusWithPeers;	// IMP=0x0000000000002159
- (void)clearDataCache;	// IMP=0x0000000000002074
- (void)ping;	// IMP=0x0000000000001f8f
- (void)createCacheDirAtPath:(id)arg1;	// IMP=0x0000000000001e45
- (void)updatePeer:(id)arg1 withEstimate:(id)arg2;	// IMP=0x0000000000001e02
- (void)updatePeer:(id)arg1 withCountryCode:(id)arg2 priority:(int)arg3 andTimestamp:(id)arg4;	// IMP=0x0000000000001dbf
- (void)update:(long long)arg1 withCountryCode:(id)arg2;	// IMP=0x0000000000001d7c
- (id)init;	// IMP=0x0000000000001846

@end

