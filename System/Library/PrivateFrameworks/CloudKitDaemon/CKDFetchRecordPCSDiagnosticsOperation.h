//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray;

@interface CKDFetchRecordPCSDiagnosticsOperation
{
    NSArray *_zoneIDs;	// 8 = 0x8
    NSMutableArray *_fetchedZones;	// 16 = 0x10
    NSMutableArray *_mutableCorruptRecords;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000777d2
@property(retain, nonatomic) NSMutableArray *mutableCorruptRecords; // @synthesize mutableCorruptRecords=_mutableCorruptRecords;
@property(retain, nonatomic) NSMutableArray *fetchedZones; // @synthesize fetchedZones=_fetchedZones;
@property(retain, nonatomic) NSArray *zoneIDs; // @synthesize zoneIDs=_zoneIDs;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x0000000000077734
- (void)main;	// IMP=0x0000000000077565
@property(readonly, nonatomic) NSArray *corruptRecords;
- (void)_fetchZones;	// IMP=0x000000000007708d
- (void)_checkRecordPCSForAllZones;	// IMP=0x00000000000769da
- (id)nameForState:(unsigned long long)arg1;	// IMP=0x0000000000076978
- (_Bool)makeStateTransition;	// IMP=0x00000000000768a7
- (id)activityCreate;	// IMP=0x000000000007687e
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x00000000000767af

// Remaining properties
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

