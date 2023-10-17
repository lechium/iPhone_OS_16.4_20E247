//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, NSMutableDictionary;
@protocol CKRepairZonePCSOperationCallbacks;

@interface CKDRepairZonePCSOperation
{
    CDUnknownBlockType _zonePCSRepairProgressBlock;	// 8 = 0x8
    NSArray *_zoneIDs;	// 16 = 0x10
    NSMutableArray *_fetchedZones;	// 24 = 0x18
    NSMutableArray *_fixedZones;	// 32 = 0x20
    NSMutableDictionary *_pcsInfoByZoneID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000016fdad
@property(retain, nonatomic) NSMutableDictionary *pcsInfoByZoneID; // @synthesize pcsInfoByZoneID=_pcsInfoByZoneID;
@property(retain, nonatomic) NSMutableArray *fixedZones; // @synthesize fixedZones=_fixedZones;
@property(retain, nonatomic) NSMutableArray *fetchedZones; // @synthesize fetchedZones=_fetchedZones;
@property(retain, nonatomic) NSArray *zoneIDs; // @synthesize zoneIDs=_zoneIDs;
@property(copy, nonatomic) CDUnknownBlockType zonePCSRepairProgressBlock; // @synthesize zonePCSRepairProgressBlock=_zonePCSRepairProgressBlock;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x000000000016fc91
- (void)main;	// IMP=0x000000000016fac2
- (void)_fetchZones;	// IMP=0x000000000016f637
- (void)_checkZonePCS;	// IMP=0x000000000016eb68
- (id)_checkPCSDataForZone:(id)arg1;	// IMP=0x000000000016e9fe
- (void)_uploadRepairedZones;	// IMP=0x000000000016e52e
- (id)nameForState:(unsigned long long)arg1;	// IMP=0x000000000016e4d8
- (_Bool)makeStateTransition;	// IMP=0x000000000016e3ce
- (id)activityCreate;	// IMP=0x000000000016e3a5
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x000000000016e2b4

// Remaining properties
@property(retain, nonatomic) id <CKRepairZonePCSOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(nonatomic) unsigned long long state; // @dynamic state;

@end
