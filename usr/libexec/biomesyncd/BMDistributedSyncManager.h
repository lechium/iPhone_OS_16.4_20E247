//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMStreamCKCRDT, BMSyncDatabase, BMSyncPolicy, NSString;

@interface BMDistributedSyncManager : NSObject
{
    BMStreamCKCRDT *_streamCRDT;	// 8 = 0x8
    BMSyncDatabase *_db;	// 16 = 0x10
    NSString *_localSiteIdentifier;	// 24 = 0x18
    BMSyncPolicy *_policy;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000003590a
@property(readonly, nonatomic) BMSyncDatabase *db; // @synthesize db=_db;
@property(readonly, nonatomic) BMStreamCKCRDT *streamCRDT; // @synthesize streamCRDT=_streamCRDT;
@property(readonly, nonatomic) BMSyncPolicy *policy; // @synthesize policy=_policy;
@property(readonly, nonatomic) NSString *localSiteIdentifier;
- (id)deletedLocations;	// IMP=0x0010000000035850
- (id)atomBatchesInClockVector:(id)arg1 ckFormatVersion:(unsigned char)arg2 chunker:(id)arg3 transportType:(unsigned long long)arg4;	// IMP=0x00100000000355c0
- (void)mergeAtomBatch:(id)arg1 deletedLocations:(id)arg2 sessionContext:(id)arg3;	// IMP=0x0010000000034fca
- (id)clockVector;	// IMP=0x0010000000034fb4
- (void)updateClockVectorByUnionWithUnseenSiteIdentifiers:(id)arg1;	// IMP=0x0010000000034c8e
- (id)initWithStreamCRDT:(id)arg1 database:(id)arg2 localSiteIdentifier:(id)arg3 policy:(id)arg4;	// IMP=0x0010000000034b97

@end

