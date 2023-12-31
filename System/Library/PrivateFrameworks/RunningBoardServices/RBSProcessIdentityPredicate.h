//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RBSProcessPredicateImpl.h"

@class RBSProcessIdentity;

__attribute__((visibility("hidden")))
@interface RBSProcessIdentityPredicate : RBSProcessPredicateImpl
{
    RBSProcessIdentity *_identity;	// 8 = 0x8
}

+ (_Bool)supportsRBSXPCSecureCoding;	// IMP=0x00600000000365fa
- (void).cxx_destruct;	// IMP=0x00000000000366c4
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x000000000003662c
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000036602
- (id)description;	// IMP=0x0000000000036576
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000364bf
- (unsigned long long)hash;	// IMP=0x0000000000036469
- (id)processPredicate;	// IMP=0x000000000003644d
- (_Bool)matchesProcess:(id)arg1;	// IMP=0x0000000000036430

@end

