//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABDefaultContainerForAccountPredicate : CNPredicate
{
    NSString *_identifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000052dca
- (void).cxx_destruct;	// IMP=0x000000000005311a
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
- (_Bool)includesDisabledContainers;	// IMP=0x0000000000053030
- (struct __CFArray *)cn_copyContainersInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;	// IMP=0x0000000000052f23
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000052ea6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000052dd2
- (id)initWithAccountIdentifier:(id)arg1;	// IMP=0x0000000000052d01
- (id)initWithPredicate:(id)arg1;	// IMP=0x0000000000052ced

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

