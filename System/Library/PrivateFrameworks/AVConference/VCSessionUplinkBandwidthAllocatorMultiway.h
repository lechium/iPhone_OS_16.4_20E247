//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableDictionary, NSString, VCSessionBandwidthAllocationTable;

__attribute__((visibility("hidden")))
@interface VCSessionUplinkBandwidthAllocatorMultiway
{
    VCSessionBandwidthAllocationTable *_table;	// 24 = 0x18
    NSDictionary *_currentTable;	// 32 = 0x20
    NSMutableDictionary *_streamTokenToEnableMap;	// 40 = 0x28
    _Bool _redundancyEnabled;	// 48 = 0x30
    _Bool _redundancyEnabledFor720Stream;	// 49 = 0x31
}

- (id)getBitrateToStreamTable;	// IMP=0x000000000012b635
- (void)_recomputeCurrentTable;	// IMP=0x000000000012b5d8
- (id)streamIDsForStreamToken:(long long)arg1 targetBitrateCap:(unsigned int)arg2;	// IMP=0x000000000012b238
- (id)streamIDsForStreamToken:(long long)arg1 targetBitrate:(unsigned int)arg2;	// IMP=0x000000000012b063
- (id)repairStreamIDsForStreamToken:(long long)arg1;	// IMP=0x000000000012ae97
- (id)streamIDsForStreamToken:(long long)arg1;	// IMP=0x000000000012accb
- (id)mediaBitratesForStreamToken:(long long)arg1 targetNetworkBitrate:(unsigned int)arg2;	// IMP=0x000000000012a8b4
- (id)tableEntriesForStreamToken:(long long)arg1 targetBitrate:(unsigned int)arg2 remainingBitrate:(unsigned int *)arg3 isLastEntryForStreamToken:(_Bool *)arg4;	// IMP=0x000000000012a5e1
- (_Bool)peerSubscription:(_Bool)arg1 streamID:(unsigned short)arg2;	// IMP=0x000000000012a522
@property(nonatomic, getter=isRedundancyEnabledFor720Stream) _Bool redundancyEnabledFor720Stream;
@property(nonatomic, getter=isRedundancyEnabled) _Bool redundancyEnabled;
- (_Bool)isEnabledStreamToken:(long long)arg1;	// IMP=0x000000000012a417
- (void)streamToken:(long long)arg1 enabled:(_Bool)arg2;	// IMP=0x000000000012a352
- (void)addBandwidthAllocationTableEntry:(id)arg1 updateNow:(_Bool)arg2;	// IMP=0x000000000012a2a8
- (void)dealloc;	// IMP=0x000000000012a21f
- (id)init;	// IMP=0x000000000012a0cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
