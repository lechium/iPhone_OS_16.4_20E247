//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityMustBeTrueRequirement
{
    _Bool _isTrue;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001eac60
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001eac92
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001eac68
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001eac55
- (unsigned long long)hash;	// IMP=0x00000000001eac44
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001eabef
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001eabc8
- (id)initWithWhatMustBeTrue:(_Bool)arg1;	// IMP=0x00000000001eab86

@end

