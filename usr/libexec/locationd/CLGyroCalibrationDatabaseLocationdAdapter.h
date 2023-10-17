//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLGyroCalibrationDatabaseLocationdAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x00200000001cb43b
+ (id)getSilo;	// IMP=0x00100000001cb286
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000001cb26d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000001cb210
- (int)syncgetNumTemperatures;	// IMP=0x00200000001cb74e
- (_Bool)syncgetWipeDatabase;	// IMP=0x00100000001cb730
- (void)dumpDatabase:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001cb6f7
- (_Bool)syncgetInsertWithBias:(const CDStruct_869f9c67 *)arg1 variance:(const CDStruct_869f9c67 *)arg2 temperature:(float)arg3 timestamp:(double)arg4;	// IMP=0x00100000001cb6a8
- (double)syncgetLastMiniCalibration;	// IMP=0x00100000001cb670
- (_Bool)syncgetSupportsMiniCalibration;	// IMP=0x00100000001cb652
- (int)syncgetNonFactoryRoundCount;	// IMP=0x00100000001cb634
- (void)getBiasFitWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001cb5a0
- (_Bool)syncgetBiasFit:(CDStruct_5b0a5b35 *)arg1;	// IMP=0x00100000001cb572
- (void)startFactoryGYTT;	// IMP=0x00100000001cb554
- (int)syncgetMaxDynamicTemperature;	// IMP=0x00100000001cb536
- (_Bool)syncgetGyroStatsWithBias:(CDStruct_869f9c67 *)arg1 slope:(CDStruct_869f9c67 *)arg2 l2Error:(CDStruct_869f9c67 *)arg3 isDynamic:(_Bool)arg4 deltaBias:(CDStruct_869f9c67 *)arg5 deltaSlope:(CDStruct_869f9c67 *)arg6 deltaError:(CDStruct_869f9c67 *)arg7 isDeltaDynamic:(_Bool)arg8;	// IMP=0x00100000001cb47d
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001cb413
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001cb3e6
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001cb3be
- (void *)adaptee;	// IMP=0x00100000001cb38b
- (void)endService;	// IMP=0x00100000001cb370
- (void)beginService;	// IMP=0x00100000001cb31f
- (id)init;	// IMP=0x00100000001cb2e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
