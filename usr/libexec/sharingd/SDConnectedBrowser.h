//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, SDStatusMonitor;
@protocol OS_dispatch_source;

@interface SDConnectedBrowser : NSObject
{
    int _clientCount;	// 8 = 0x8
    int _recentsCount;	// 12 = 0xc
    int _connectedCount;	// 16 = 0x10
    _Bool _sendNotification;	// 20 = 0x14
    NSDictionary *_servers;	// 24 = 0x18
    NSDictionary *_odiskServers;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_timer;	// 40 = 0x28
    SDStatusMonitor *_monitor;	// 48 = 0x30
    struct __CFBag *_airDropPeople;	// 56 = 0x38
}

+ (id)sharedBrowser;	// IMP=0x00400000001c4751
- (void).cxx_destruct;	// IMP=0x00200000001c5d9c
- (void)stop;	// IMP=0x00100000001c5cfe
- (void)start;	// IMP=0x00100000001c5bf4
- (void)volumesChanged:(id)arg1;	// IMP=0x00100000001c5bda
- (void)removeAirDropPerson:(struct __SFNode *)arg1;	// IMP=0x00100000001c5b0a
- (void)removeAirDropPersonInternal:(struct __SFNode *)arg1;	// IMP=0x00100000001c5a57
@property(readonly, copy) NSArray *airDropNodes;
- (void)addAirDropPerson:(struct __SFNode *)arg1;	// IMP=0x00100000001c58fd
- (void)buildNodesAndNotify:(_Bool)arg1;	// IMP=0x00100000001c58cf
- (void)combineRecentAndConnectedNodes:(_Bool)arg1;	// IMP=0x00100000001c52c5
- (id)connectedNodes;	// IMP=0x00100000001c4b2e
- (id)URLForRemounting:(id)arg1;	// IMP=0x00100000001c4a7c
- (_Bool)opticalDisk:(id)arg1;	// IMP=0x00100000001c4a00
- (void)setNodeModel:(struct __SFNode *)arg1 protocol:(id)arg2 url:(id)arg3;	// IMP=0x00100000001c49fa
- (int)removeNode:(struct __SFNode *)arg1;	// IMP=0x00100000001c49ef
- (int)addNode:(struct __SFNode *)arg1;	// IMP=0x00100000001c49e4
- (id)recentNodes;	// IMP=0x00100000001c499e
- (void)addToRecents:(id)arg1;	// IMP=0x00100000001c4998
- (void)browseAfterDelay:(double)arg1;	// IMP=0x00100000001c4978
- (void)postNotification;	// IMP=0x00100000001c4919
@property(readonly, copy) NSArray *odiskNodes;
@property(readonly, copy) NSArray *nodes;
- (void)setODiskServers:(id)arg1;	// IMP=0x00100000001c489e
- (void)setServers:(id)arg1;	// IMP=0x00100000001c484f
- (id)init;	// IMP=0x00100000001c47a6

@end

