//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKObject.h>

@interface HKObject (HDCodingSupport)
+ (id)hd_allObjectsToInsertWithObjects:(id)arg1;	// IMP=0x0060000000055822
+ (Class)hd_dataEntityClass;	// IMP=0x00600000008b3ffc
- (_Bool)addCodableRepresentationToCollectionForSync:(id)arg1;	// IMP=0x0010000000255bf9
- (_Bool)addCodableRepresentationToCollectionForJournal:(id)arg1;	// IMP=0x00100000000168e7
- (_Bool)addCodableRepresentationToCollection:(id)arg1;	// IMP=0x0010000000255bef
- (id)codableRepresentationForSync;	// IMP=0x0010000000016b21
- (_Bool)hd_insertRelatedDataWithPersistentID:(id)arg1 insertionContext:(id)arg2 profile:(id)arg3 transaction:(id)arg4 error:(id *)arg5;	// IMP=0x001000000029c603
- (id)hd_relatedJournalEntriesWithProfile:(id)arg1;	// IMP=0x001000000029c5f6
- (long long)entityType;	// IMP=0x001000000029c5ee
- (id)hd_associatedSampleTypes;	// IMP=0x00100000008b400c
- (id)hd_associatedObjects;	// IMP=0x0010000000055b07
- (Class)hd_dataEntityClass;	// IMP=0x00100000000165da
- (id)hd_sampleType;	// IMP=0x00100000008b3ff4
@end

