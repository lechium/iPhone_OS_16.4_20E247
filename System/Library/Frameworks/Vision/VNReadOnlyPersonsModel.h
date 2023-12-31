//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VNPersonsModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VNReadOnlyPersonsModel : VNPersonsModel
{
}

+ (id)newModelFromVersion:(unsigned long long)arg1 objects:(id)arg2 error:(id *)arg3;	// IMP=0x001000000022bfc2
+ (_Bool)isReadOnly;	// IMP=0x001000000022bfba
- (id)personsModel:(id)arg1 faceObservationAtIndex:(unsigned long long)arg2 forPersonAtIndex:(unsigned long long)arg3;	// IMP=0x000000000022bf0f
- (unsigned long long)personsModel:(id)arg1 numberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg2;	// IMP=0x000000000022bee5
- (unsigned long long)personsModel:(id)arg1 indexOfPersonWithUniqueIdentifier:(id)arg2;	// IMP=0x000000000022be0b
- (id)personsModel:(id)arg1 uniqueIdentifierOfPersonAtIndex:(unsigned long long)arg2;	// IMP=0x000000000022bd55
- (unsigned long long)numberOfPersonsInPersonsModel:(id)arg1;	// IMP=0x000000000022bcb8
- (id)faceCountsForAllPersons;	// IMP=0x000000000022bc43
- (id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg1;	// IMP=0x000000000022bb99
- (id)faceObservationsForPersonWithUniqueIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000022bb63
- (unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)arg1;	// IMP=0x000000000022bac9
- (id)personUniqueIdentifiers;	// IMP=0x000000000022ba54
- (unsigned long long)personCount;	// IMP=0x000000000022b9f1
- (id)upToDateFaceModelWithCanceller:(id)arg1 error:(id *)arg2;	// IMP=0x000000000022b9e3
- (_Bool)dropCurrentFaceModelAndReturnError:(id *)arg1;	// IMP=0x000000000022b9b2
- (id)initWithConfiguration:(id)arg1 faceModel:(id)arg2;	// IMP=0x000000000022b926

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

