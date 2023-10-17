//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKMedicalRecord.h>

@class NSString;

@interface HKMedicalRecord (HDDistinctableObject)
+ (id)createWithCodable:(id)arg1;	// IMP=0x001000000025be8c
+ (Class)hd_dataEntityClass;	// IMP=0x00100000008b4328
- (id)uniqueIdentifierForDistinctByKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000ebf5a
- (_Bool)addCodableRepresentationToCollection:(id)arg1;	// IMP=0x001000000025c1c5
- (id)codableRepresentationForSync;	// IMP=0x001000000025bf7b
- (_Bool)hd_insertRelatedDataWithPersistentID:(id)arg1 insertionContext:(id)arg2 profile:(id)arg3 transaction:(id)arg4 error:(id *)arg5;	// IMP=0x001000000029c9a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
