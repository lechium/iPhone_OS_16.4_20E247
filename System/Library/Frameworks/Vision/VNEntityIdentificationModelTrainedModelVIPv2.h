//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, VNRequestSpecifier;

__attribute__((visibility("hidden")))
@interface VNEntityIdentificationModelTrainedModelVIPv2
{
    shared_ptr_8c39738b _faceIDModel;	// 8 = 0x8
    VNRequestSpecifier *_entityPrintOriginatingRequestSpecifier;	// 24 = 0x18
    int _maximumElementsPerID;	// 32 = 0x20
    NSArray *_entityUniqueIdentifiers;	// 40 = 0x28
    NSArray *_entityPrintCounts;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000221dd4
+ (id)trainedModelBuiltFromConfiguration:(id)arg1 dataProvider:(id)arg2 canceller:(id)arg3 error:(id *)arg4;	// IMP=0x0060000000220c80
+ (_Bool)getStoredRepresentationTag:(unsigned int *)arg1 forModelVersion:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0060000000220c72
- (id).cxx_construct;	// IMP=0x00000000002202a6
- (void).cxx_destruct;	// IMP=0x0000000000220255
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000220041
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000021fa7c
- (id)printCountsForAllEntities;	// IMP=0x000000000021f988
- (id)printCountsForEntitiesWithUniqueIdentifiers:(id)arg1;	// IMP=0x000000000021f80f
- (unsigned long long)printCountForEntityWithUniqueIdentifier:(id)arg1;	// IMP=0x000000000021f74d
- (unsigned long long)indexOfEntityWithUniqueIdentifier:(id)arg1;	// IMP=0x000000000021f730
- (id)uniqueIdentifierOfEntityAtIndex:(unsigned long long)arg1;	// IMP=0x000000000021f713
- (id)entityUniqueIdentifiers;	// IMP=0x000000000021f6fe
- (unsigned long long)entityCount;	// IMP=0x000000000021f6e1
- (id)predictionsForObservation:(id)arg1 limit:(unsigned long long)arg2 canceller:(id)arg3 error:(id *)arg4;	// IMP=0x000000000021f0fb
- (id)trainingEntityPrintsForEntityWithUniqueIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000021ee26
- (id)entityPrintOriginatingRequestSpecifier;	// IMP=0x000000000021ee11
- (id)initWithFaceIDModel:(shared_ptr_8c39738b)arg1 entityPrintOriginatingRequestSpecifier:(id)arg2 maximumElementsPerID:(unsigned long long)arg3 entityUniqueIdentifiers:(id)arg4 entityPrintCounts:(id)arg5;	// IMP=0x000000000021ec5b

@end

