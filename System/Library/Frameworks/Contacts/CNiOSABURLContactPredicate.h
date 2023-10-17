//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABURLContactPredicate : CNPredicate
{
    NSString *_urlString;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000babee
- (void).cxx_destruct;	// IMP=0x00000000000bb197
@property(readonly, copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(readonly, copy) NSString *description;
- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000bb0ad
- (id)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 nserror:(id *)arg5;	// IMP=0x00000000000bae45
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x00000000000bad5f
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x00000000000bad57
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x00000000000bad4f
- (_Bool)cn_supportsNativeSorting;	// IMP=0x00000000000bad47
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000bacca
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000babf6
- (id)initWithURLString:(id)arg1;	// IMP=0x00000000000bab74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
