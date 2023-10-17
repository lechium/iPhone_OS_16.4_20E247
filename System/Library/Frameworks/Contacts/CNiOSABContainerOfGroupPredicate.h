//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABContainerOfGroupPredicate : CNPredicate
{
    NSString *_groupIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000069e39
- (void).cxx_destruct;	// IMP=0x000000000006a204
@property(readonly, copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(readonly, copy) NSString *description;
- (_Bool)includesDisabledContainers;	// IMP=0x000000000006a11a
- (struct __CFArray *)cn_copyContainersInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;	// IMP=0x0000000000069f92
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000069f15
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000069e41
- (id)initWithGroupIdentifier:(id)arg1;	// IMP=0x0000000000069d84
- (id)initWithPredicate:(id)arg1;	// IMP=0x0000000000069d70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
