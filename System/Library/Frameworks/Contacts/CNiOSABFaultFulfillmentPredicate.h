//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABFaultFulfillmentPredicate : CNPredicate
{
    int _legacyIdentifier;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000007943
+ (id)os_log;	// IMP=0x0010000000007877
- (void).cxx_destruct;	// IMP=0x000000000000860b
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) int legacyIdentifier; // @synthesize legacyIdentifier=_legacyIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000082bc
@property(readonly, copy) NSString *description;
- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000081b8
- (id)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 nserror:(id *)arg5;	// IMP=0x0000000000007b89
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x0000000000007af9
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x0000000000007af1
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x0000000000007ae9
- (_Bool)cn_supportsNativeSorting;	// IMP=0x0000000000007ae1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000007a41
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000794b
- (id)initWithLegacyIdentifier:(int)arg1 identifier:(id)arg2;	// IMP=0x00000000000078d3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

