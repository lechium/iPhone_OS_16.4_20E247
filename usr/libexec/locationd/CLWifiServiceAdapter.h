//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLWifiServiceAdapter
{
}

+ (id)getSilo;	// IMP=0x00200000001ac526
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ac50d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000001ac4b0
- (_Bool)syncgetSetAutoJoin:(_Bool)arg1;	// IMP=0x00200000001ad5dc
- (void)setBackgroundExitScanCount:(int)arg1;	// IMP=0x00100000001ad5c4
- (void)setWifiPower:(_Bool)arg1;	// IMP=0x00100000001ad574
- (_Bool)syncgetSetAllowBeingRanged:(const void *)arg1 enable:(_Bool)arg2;	// IMP=0x00100000001ad556
- (_Bool)syncgetStartRangingWithPeers:(const void *)arg1 andTimeout:(double)arg2;	// IMP=0x00100000001ad539
- (_Bool)syncgetStartScanWithParameters:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ad469
- (_Bool)syncgetStartScanWithType:(BOOL)arg1 lowPriority:(_Bool)arg2 lowLatency:(_Bool)arg3 passive:(_Bool)arg4 requester:(const char *)arg5 channels:(const void *)arg6;	// IMP=0x00100000001ad3c9
- (_Bool)syncgetStartScanWithType:(BOOL)arg1 lowPriority:(_Bool)arg2 passive:(_Bool)arg3 requester:(const char *)arg4;	// IMP=0x00100000001ad300
- (void)clearExitAndEntryScanNetworks:(_Bool)arg1;	// IMP=0x00100000001ad223
- (_Bool)syncgetHostedNetwork:(void *)arg1;	// IMP=0x00100000001ad0c5
- (_Bool)syncgetAssociatedNetwork:(void *)arg1;	// IMP=0x00100000001acf4e
- (void)fetchScanResultWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001acea7
- (CDUnknownBlockType)syncgetBackgroundScanCacheResult;	// IMP=0x00100000001ace06
- (CDUnknownBlockType)syncgetScanResult;	// IMP=0x00100000001accd3
- (CDUnknownBlockType)syncgetScanStats;	// IMP=0x00100000001acbcc
- (void)setScannerExitScanNetworks:(CDUnknownBlockType)arg1;	// IMP=0x00100000001acb76
- (void)setScannerEntryScanNetworks:(CDUnknownBlockType)arg1;	// IMP=0x00100000001acb20
- (void)setEntryScanNetworks:(CDUnknownBlockType)arg1 andExitScanNetworks:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ac99c
- (void)programEntryScanNetworks:(CDUnknownBlockType)arg1 andExitScanNetworks:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ac934
- (_Bool)syncgetIsSimulationEnabled;	// IMP=0x00100000001ac916
- (_Bool)syncgetIsAvailable;	// IMP=0x00100000001ac8c5
- (_Bool)syncgetIsWifiPoweredWithStatus:(_Bool *)arg1;	// IMP=0x00100000001ac886
- (_Bool)syncgetIsWifiPowered;	// IMP=0x00100000001ac854
- (_Bool)syncgetIsWifiTrackingAvailable;	// IMP=0x00100000001ac82e
- (void)fetchIsWifiAvailableWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ac7e7
- (_Bool)syncgetIsAssociated;	// IMP=0x00100000001ac7a0
- (void)fetchIsAssociatedWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ac73a
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ac712
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ac6e5
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ac6bd
- (void *)adaptee;	// IMP=0x00100000001ac68a
- (void)endService;	// IMP=0x00100000001ac66f
- (void)beginService;	// IMP=0x00100000001ac5bf
- (id)init;	// IMP=0x00100000001ac582

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

