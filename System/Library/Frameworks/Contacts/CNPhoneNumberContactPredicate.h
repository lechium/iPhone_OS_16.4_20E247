//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class CNPhoneNumber, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNPhoneNumberContactPredicate : CNPredicate
{
    _Bool _returnsMultipleResults;	// 24 = 0x18
    CNPhoneNumber *_phoneNumber;	// 32 = 0x20
    NSString *_prefixHint;	// 40 = 0x28
    NSString *_digits;	// 48 = 0x30
    NSString *_countryCode;	// 56 = 0x38
    NSArray *_groupIdentifiers;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000c8812
- (void).cxx_destruct;	// IMP=0x00000000000c96e2
- (void)cn_triageWithLog:(id)arg1 serialNumber:(unsigned long long)arg2;	// IMP=0x00000000000c95e5
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c8d39
- (id)shortDebugDescription;	// IMP=0x00000000000c8d2c
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c8a43
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c881a
- (id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(_Bool)arg2 service:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000de269

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

