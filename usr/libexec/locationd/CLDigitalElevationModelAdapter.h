//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSString;

@interface CLDigitalElevationModelAdapter : CLIntersiloService
{
    void *_cldem;	// 8 = 0x8
}

+ (id)getSilo;	// IMP=0x00200000008d7f46
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000008d7f2d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000008d7ed0
@property(nonatomic) void *cldem; // @synthesize cldem=_cldem;
- (void)downloadAvailabilityFile:(double)arg1;	// IMP=0x00100000008d9d8c
- (void)downloadIfNeeded:(CDUnknownBlockType)arg1 signalQuality:(_Bool)arg2 allowCenterOverCellular:(_Bool)arg3 ringsToDownloadOverCellular:(int)arg4;	// IMP=0x00100000008d9d2e
- (void)downloadIfNeeded:(CDUnknownBlockType)arg1 signalQuality:(_Bool)arg2 allowCenterOverCellular:(_Bool)arg3;	// IMP=0x00100000008d96b4
- (void)updateTunnelBridgeAssistance:(struct TunnelBridgeAssistance)arg1;	// IMP=0x00100000008d967c
- (void)updateAirborneActivity:(_Bool)arg1;	// IMP=0x00100000008d9623
- (void)updateMotion:(int)arg1 conf:(int)arg2;	// IMP=0x00100000008d93b0
- (void)clear;	// IMP=0x00100000008d939b
- (_Bool)syncgetAltitude:(void *)arg1 rel:(int *)arg2 undulation:(double *)arg3 feedToAltFilter:(_Bool)arg4;	// IMP=0x00100000008d81f5
- (_Bool)syncgetAltitude:(void *)arg1 rel:(int *)arg2 undulation:(double *)arg3;	// IMP=0x00100000008d81e0
- (void)endService;	// IMP=0x00100000008d806f
- (void)beginService;	// IMP=0x00100000008d7fdf
- (id)init;	// IMP=0x00100000008d7fa2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

