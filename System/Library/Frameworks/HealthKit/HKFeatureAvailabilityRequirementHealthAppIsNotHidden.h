//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityRequirementHealthAppIsNotHidden
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00800000001ef2a3
+ (id)requirementIdentifier;	// IMP=0x00800000001ef178
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001ef2b1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001ef2ab
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ef298
- (unsigned long long)hash;	// IMP=0x00000000001ef255
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ef20e
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001ef199
- (id)requirementDescription;	// IMP=0x00000000001ef18c

@end
