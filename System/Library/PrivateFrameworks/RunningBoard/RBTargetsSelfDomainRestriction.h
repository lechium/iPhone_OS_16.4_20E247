//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RBDomainRestriction.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface RBTargetsSelfDomainRestriction : RBDomainRestriction
{
    NSArray *_restrictions;	// 8 = 0x8
}

+ (id)domainRestrictionForDictionary:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000000767ec
- (void).cxx_destruct;	// IMP=0x0000000000076b44
- (id)description;	// IMP=0x0000000000076aca
- (unsigned long long)hash;	// IMP=0x0000000000076aad
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000076a5c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000076a51
- (id)allEntitlements;	// IMP=0x0000000000076a38
- (_Bool)allowsContext:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000000076851
- (id)_init;	// IMP=0x000000000007679e

@end
