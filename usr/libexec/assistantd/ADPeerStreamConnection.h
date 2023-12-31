//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADSharedPeerStreamConnection, IDSDeviceConnection;
@protocol ADPeerStreamConnectionDelegate;

@interface ADPeerStreamConnection : NSObject
{
    ADSharedPeerStreamConnection *_sharedConnection;	// 8 = 0x8
    id <ADPeerStreamConnectionDelegate> _delegate;	// 16 = 0x10
    IDSDeviceConnection *_vendedDeviceConnection;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000093dfe
- (_Bool)hasNearbyPeer;	// IMP=0x0010000000093de8
- (void)close;	// IMP=0x0010000000093db2
- (_Bool)peerSupportsExtendedHeader;	// IMP=0x0010000000093d9c
- (void)getAWDMetrics:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000093d86
- (void)getRemoteMetrics:(CDUnknownBlockType)arg1;	// IMP=0x0010000000093d70
- (void)getLocalMetrics:(CDUnknownBlockType)arg1;	// IMP=0x0010000000093c32
- (void)getSocket:(CDUnknownBlockType)arg1;	// IMP=0x0010000000093a4b
- (id)initWithServiceIdentifier:(id)arg1 delegate:(id)arg2 listener:(_Bool)arg3;	// IMP=0x0010000000093943

@end

