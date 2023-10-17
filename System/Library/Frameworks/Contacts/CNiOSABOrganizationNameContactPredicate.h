//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABOrganizationNameContactPredicate : CNPredicate
{
    NSString *_organizationName;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000f7e17
- (void).cxx_destruct;	// IMP=0x00000000000f854d
@property(readonly, copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f834e
- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000f82eb
- (id)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 nserror:(id *)arg5;	// IMP=0x00000000000f813f
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x00000000000f8059
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x00000000000f8051
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x00000000000f8049
- (_Bool)cn_supportsNativeSorting;	// IMP=0x00000000000f8041
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f7ef3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f7e1f
- (id)initWithOrganizationName:(id)arg1;	// IMP=0x00000000000f7d86

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
