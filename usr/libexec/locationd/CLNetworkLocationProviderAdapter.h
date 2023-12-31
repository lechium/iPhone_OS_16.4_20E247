//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLNetworkLocationProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x002000000029238b
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000292372
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000292315
- (void)fetchQueryLocationsForWifis:(CDUnknownBlockType)arg1 useCache:(_Bool)arg2 piggyback:(_Bool)arg3 config:(CDUnknownBlockType)arg4 withReply:(CDUnknownBlockType)arg5;	// IMP=0x00200000002985ab
- (int)syncgetQueryLocationsForWifis:(const void *)arg1 useCache:(_Bool)arg2 piggyback:(_Bool)arg3 config:(const struct CLNetworkLocationRequestConfig *)arg4;	// IMP=0x0010000000298540
- (int)syncgetQueryLocationsForCells:(const void *)arg1 useCache:(_Bool)arg2;	// IMP=0x0010000000297da4
- (int)syncgetBestMatchLocation:(struct CLDaemonLocation *)arg1 forCell:(const void *)arg2;	// IMP=0x0010000000297aa1
- (void)resetRetryCounters:(id)arg1;	// IMP=0x0010000000297764
- (void)removeResponseListener:(struct CLNetworkLocationServerResponseListener *)arg1;	// IMP=0x001000000029772e
- (void)addResponseListener:(struct CLNetworkLocationServerResponseListener *)arg1;	// IMP=0x00100000002976f5
- (void)setCurrentReachability:(int)arg1;	// IMP=0x00100000002976c2
- (int)syncgetQueryNearbys:(const struct CLDaemonLocation *)arg1 forFenceKeys:(const void *)arg2;	// IMP=0x00100000002973a7
- (_Bool)syncgetMetric:(void *)arg1;	// IMP=0x0010000000297202
- (void)setPrivateMode:(_Bool)arg1;	// IMP=0x00100000002971d2
- (_Bool)syncgetIsBroadConnection;	// IMP=0x0010000000297039
- (void)setLocation_NR:(id)arg1 forCell:(CDUnknownBlockType)arg2;	// IMP=0x0010000000296941
- (void)setLocation_LTE:(id)arg1 forCell:(CDUnknownBlockType)arg2;	// IMP=0x0010000000296249
- (void)setLocation_CDMA:(id)arg1 forCell:(CDUnknownBlockType)arg2;	// IMP=0x0010000000295aff
- (void)setLocation_SCDMA:(id)arg1 forCell:(CDUnknownBlockType)arg2;	// IMP=0x0010000000295523
- (void)setLocation_GSM:(id)arg1 forCell:(CDUnknownBlockType)arg2;	// IMP=0x0010000000294f48
- (_Bool)syncgetLocation_CELL:(struct CLDaemonLocation *)arg1 forCell:(void *)arg2;	// IMP=0x0010000000294bc1
- (_Bool)syncgetLocation_LTE:(struct CLDaemonLocation *)arg1 forCell:(struct LteCell *)arg2;	// IMP=0x00100000002941ef
- (_Bool)syncgetLocation_CDMA:(struct CLDaemonLocation *)arg1 forCell:(void *)arg2;	// IMP=0x00100000002935e0
- (_Bool)syncgetLocation_SCDMA:(struct CLDaemonLocation *)arg1 forCell:(struct ScdmaCell *)arg2;	// IMP=0x0010000000292dc0
- (_Bool)syncgetLocation_GSM:(struct CLDaemonLocation *)arg1 forCell:(struct Cell *)arg2;	// IMP=0x00100000002925a0
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000292578
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000029254b
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000292523
- (void *)adaptee;	// IMP=0x00100000002924f0
- (void)endService;	// IMP=0x00100000002924d5
- (void)beginService;	// IMP=0x0010000000292424
- (id)init;	// IMP=0x00100000002923e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

