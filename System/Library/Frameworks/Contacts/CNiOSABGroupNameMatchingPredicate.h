//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABGroupNameMatchingPredicate : CNPredicate
{
    NSString *_name;	// 24 = 0x18
}

+ (id)groupNameTokenizingCharacterSet;	// IMP=0x001000000011a15a
+ (id)tokenizeString:(id)arg1;	// IMP=0x001000000011a0af
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000119bcf
- (void).cxx_destruct;	// IMP=0x000000000011a2d2
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *description;
- (_Bool)groupName:(id)arg1 matchesSearchTokens:(id)arg2;	// IMP=0x0000000000119f1c
- (struct __CFArray *)cn_copyGroupsInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;	// IMP=0x0000000000119d28
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000119cab
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000119bd7
- (id)initWithName:(id)arg1;	// IMP=0x0000000000119ad7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
