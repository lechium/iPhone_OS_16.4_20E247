//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityRequirementWatchAppIsInstalled
{
    NSString *_bundleIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000b5114
+ (id)requirementIdentifier;	// IMP=0x00100000000b4e17
- (void).cxx_destruct;	// IMP=0x00000000000b51e4
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b5146
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b511c
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b5011
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;	// IMP=0x00000000000b4f91
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;	// IMP=0x00000000000b4e7e
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b4e5b
@property(readonly, nonatomic) NSString *requirementDescription;
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x00000000000b4da9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
