//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSMutableArray, NSString;

@interface CLTileDownloadSchedulingService : CLIntersiloService
{
    _Bool _hasRegisteredForWifiConnectivity;	// 8 = 0x8
    _Bool _hasRegisteredForCellularConnectivity;	// 9 = 0x9
    NSMutableArray *_clients;	// 16 = 0x10
}

+ (id)getSilo;	// IMP=0x00200000003a711c
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000003a7103
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000003a70a6
@property(nonatomic) _Bool hasRegisteredForCellularConnectivity; // @synthesize hasRegisteredForCellularConnectivity=_hasRegisteredForCellularConnectivity;
@property(nonatomic) _Bool hasRegisteredForWifiConnectivity; // @synthesize hasRegisteredForWifiConnectivity=_hasRegisteredForWifiConnectivity;
@property(retain, nonatomic) NSMutableArray *clients; // @synthesize clients=_clients;
- (void)scheduleDownloadsWithCellularConnectivity;	// IMP=0x00100000003a7c02
- (void)scheduleDownloadsWithWifiConnectivity;	// IMP=0x00100000003a7603
- (void)stopListeningForForScheduledTileDownload:(byref id)arg1;	// IMP=0x00100000003a74bc
- (void)requestForSchedulingTileDownload:(byref id)arg1;	// IMP=0x00100000003a7263
- (void)endService;	// IMP=0x00100000003a7238
- (void)beginService;	// IMP=0x00100000003a720d
- (void)dealloc;	// IMP=0x00100000003a71b5
- (id)init;	// IMP=0x00100000003a7178

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
