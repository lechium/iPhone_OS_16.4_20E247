//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCAppLibrary, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface BRCPCSChainBatchInfo : NSObject
{
    NSMutableArray *_fullyChainRecordBatch;	// 8 = 0x8
    NSMutableDictionary *_fullyChainRecordInfoMap;	// 16 = 0x10
    NSMutableDictionary *_halfChainedRecordMap;	// 24 = 0x18
    NSMutableSet *_alreadyHalfChainedRecords;	// 32 = 0x20
    NSMutableArray *_recordsForFirstPhase;	// 40 = 0x28
    BRCAppLibrary *_appLibrary;	// 48 = 0x30
    _Bool _should2PhasePCSChain;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001d025c
@property(readonly, nonatomic) NSDictionary *halfChainedRecordMap; // @synthesize halfChainedRecordMap=_halfChainedRecordMap;
@property(readonly, nonatomic) _Bool should2PhasePCSChain;
@property(readonly, nonatomic) NSArray *recordsForSecondPhase;
@property(readonly, nonatomic) NSArray *recordsForFirstPhase;
@property(readonly, nonatomic) unsigned long long chainedRecordsCount;
@property(readonly, nonatomic) unsigned long long batchCount;
- (void)chainPreparedRecordBatch:(id)arg1;	// IMP=0x00000000001cf8c8
- (void)_chainPreppedRecordToParent:(id)arg1;	// IMP=0x00000000001cf5fb
- (void)addFullyChainedRecordInfo:(id)arg1;	// IMP=0x00000000001cea64
- (void)prepareFirstPhaseRecordBatch;	// IMP=0x00000000001ce8bd
- (_Bool)containsRecordInfo:(id)arg1;	// IMP=0x00000000001ce759
- (id)initWithAppLibrary:(id)arg1;	// IMP=0x00000000001ce5fd

@end

