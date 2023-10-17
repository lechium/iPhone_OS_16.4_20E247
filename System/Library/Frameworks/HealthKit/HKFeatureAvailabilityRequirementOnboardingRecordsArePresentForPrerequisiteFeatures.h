//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityRequirementOnboardingRecordsArePresentForPrerequisiteFeatures
{
    NSArray *_prerequisiteFeatureIdentifiers;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000011d068
+ (id)requirementIdentifier;	// IMP=0x001000000011c774
- (void).cxx_destruct;	// IMP=0x000000000011d179
@property(readonly, copy, nonatomic) NSArray *prerequisiteFeatureIdentifiers; // @synthesize prerequisiteFeatureIdentifiers=_prerequisiteFeatureIdentifiers;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000011d09a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000011d070
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011d05d
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011cfde
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;	// IMP=0x000000000011ce0c
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;	// IMP=0x000000000011ca23
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x000000000011c849
@property(readonly, nonatomic) NSString *requirementDescription;
- (id)initWithPrerequisiteFeatureIdentifiers:(id)arg1;	// IMP=0x000000000011c706

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
