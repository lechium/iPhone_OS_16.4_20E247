//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABGroupIdentifiersPredicate : CNPredicate
{
    NSArray *_identifiers;	// 24 = 0x18
}

+ (id)descriptionOfIdentifiers:(id)arg1;	// IMP=0x001000000010be0b
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000010ba80
- (void).cxx_destruct;	// IMP=0x000000000010be92
@property(readonly, copy, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
@property(readonly, copy) NSString *description;
- (struct __CFArray *)cn_copyGroupsInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;	// IMP=0x000000000010bc20
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000010bba3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000010ba88
- (id)initWithIdentifiers:(id)arg1;	// IMP=0x000000000010b9b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
