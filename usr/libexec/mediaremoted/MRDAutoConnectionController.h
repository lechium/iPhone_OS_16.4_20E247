//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDNowPlayingServer, NSArray, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface MRDAutoConnectionController : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    MRDNowPlayingServer *_nowPlayingServer;	// 16 = 0x10
    NSMutableDictionary *_pendingReconSessions;	// 24 = 0x18
    NSMutableDictionary *_pendingReconSessionCompletions;	// 32 = 0x20
    NSMutableDictionary *_pendingGroupReconSessions;	// 40 = 0x28
    NSMutableDictionary *_pendingGroupReconSessionCompletions;	// 48 = 0x30
    NSMutableSet *_connectedEndpoints;	// 56 = 0x38
    NSMutableDictionary *_connectingEndpoints;	// 64 = 0x40
    NSMutableDictionary *_pendingConnectingEndpointCompletions;	// 72 = 0x48
}

+ (id)sharedConnectionController;	// IMP=0x00400000000bf1ba
- (void).cxx_destruct;	// IMP=0x00200000000c3bcb
- (void)_handleActiveSystemEndpointDidChangeNotification:(id)arg1;	// IMP=0x00100000000c3a46
- (void)_handleEndpointDidInvalidateNotification:(id)arg1;	// IMP=0x00100000000c390a
- (void)_onSerialQueue_removeConnectedEndpoint:(id)arg1;	// IMP=0x00100000000c3645
- (void)_onSerialQueue_addConnectedEndpoint:(id)arg1;	// IMP=0x00100000000c3155
- (void)_onSerialQueue_connectToEndpoint:(id)arg1 reason:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000c211f
- (void)_onSerialQueue_discoverGroup:(id)arg1 connect:(_Bool)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000c1aaf
- (void)_onSerialQueue_discoverOutputDevice:(id)arg1 connect:(_Bool)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000c13ea
- (void)_discoverGroup:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c12dc
- (void)_discoverOutputDevice:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c11ce
- (void)_connectToGroup:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c10bd
- (void)_connectToOutputDevice:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c0fac
- (void)_connectToAllOutputDevicesForReason:(id)arg1 comparator:(CDUnknownBlockType)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000c0718
- (void)discoverGroup:(id)arg1 reason:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000c04eb
- (void)discoverOutputDevice:(id)arg1 reason:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000c02be
- (void)connectToGroup:(id)arg1 reason:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000c0091
- (void)connectToOutputDevice:(id)arg1 reason:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000bfe64
- (void)connectToAllOutputDevicesForReason:(id)arg1 comparator:(CDUnknownBlockType)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000bfc12
@property(readonly, nonatomic) NSArray *autoConnectedEndpoints;
@property(readonly, nonatomic) NSArray *autoConnectingEndpoints;
- (id)_init;	// IMP=0x00100000000bf21f

@end
