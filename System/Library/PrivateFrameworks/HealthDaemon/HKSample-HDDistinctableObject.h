//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKSample.h>

@class NSString;

@interface HKSample (HDDistinctableObject)
+ (_Bool)supportsDistinctByKeyPath:(id)arg1;	// IMP=0x00100000000ebbbb
+ (id)createWithCodable:(id)arg1;	// IMP=0x0010000000255c0d
+ (id)hd_sampleTypesForObjects:(id)arg1;	// IMP=0x0010000000055bae
- (id)uniqueIdentifierForDistinctByKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000ebc45
- (_Bool)addCodableRepresentationToCollection:(id)arg1;	// IMP=0x001000000001fca9
- (id)codableRepresentationForSync;	// IMP=0x0010000000016a0b
- (long long)entityType;	// IMP=0x001000000002c5aa
- (id)hd_associatedSampleTypes;	// IMP=0x0010000000055db0
- (id)hd_sampleType;	// IMP=0x0010000000018647

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
