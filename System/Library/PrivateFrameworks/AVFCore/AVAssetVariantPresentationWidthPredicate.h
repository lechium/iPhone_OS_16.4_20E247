//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSPredicate.h>

@class NSPredicateOperator;

__attribute__((visibility("hidden")))
@interface AVAssetVariantPresentationWidthPredicate : NSPredicate
{
    double _width;	// 16 = 0x10
    NSPredicateOperator *_operator;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000012bb57
- (void)dealloc;	// IMP=0x000000000012bedc
- (id)description;	// IMP=0x000000000012be80
- (id)predicateFormat;	// IMP=0x000000000012be73
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x000000000012be58
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012be4d
- (_Bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;	// IMP=0x000000000012bd97
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000012bc41
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000012bb5f
- (id)initWithPresentationWidth:(double)arg1 operatorType:(unsigned long long)arg2;	// IMP=0x000000000012bace

@end
