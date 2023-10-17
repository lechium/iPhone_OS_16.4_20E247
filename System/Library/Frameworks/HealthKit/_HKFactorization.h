//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _HKFactorization : NSObject
{
    NSMapTable *_factors;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000011aade
+ (id)factorizationFromString:(id)arg1 factorGrammar:(id)arg2;	// IMP=0x0010000000018a28
+ (id)factorizationWithFactorsAndExponents:(id)arg1;	// IMP=0x001000000001aa08
+ (id)factorizationWithFactor:(id)arg1 exponent:(long long)arg2;	// IMP=0x001000000001a9f1
+ (id)factorization;	// IMP=0x001000000001ab94
- (void).cxx_destruct;	// IMP=0x000000000001ad5f
- (void)_raiseToExponent:(long long)arg1;	// IMP=0x000000000001c12b
- (void)_multiplyByFactorization:(id)arg1;	// IMP=0x000000000001c2f3
- (void)_multiplyByFactor:(id)arg1 exponent:(long long)arg2;	// IMP=0x000000000001ac0c
- (long long)_exponentForFactor:(id)arg1;	// IMP=0x000000000000e04c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000011ac68
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000011aae6
- (id)unitString;	// IMP=0x000000000000e7e6
- (long long)exponentForFactor:(id)arg1;	// IMP=0x000000000001ad17
- (id)anyFactor;	// IMP=0x000000000001acc3
- (unsigned long long)factorCount;	// IMP=0x000000000001acad
- (void)_enumerateFactorsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000011a91b
- (void)enumerateFactorsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000de0a
- (id)factorizationByRaisingToExponent:(long long)arg1;	// IMP=0x000000000001c0cc
- (id)reciprocal;	// IMP=0x000000000001c0b3
- (id)factorizationByDividing:(id)arg1;	// IMP=0x000000000001c051
- (id)factorizationByMultiplying:(id)arg1;	// IMP=0x000000000001c28d
- (id)description;	// IMP=0x000000000011a909
- (unsigned long long)hash;	// IMP=0x000000000011a7ff
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004262
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b7d1
- (id)init;	// IMP=0x000000000001aba6

@end
