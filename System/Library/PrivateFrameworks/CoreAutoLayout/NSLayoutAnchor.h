//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSISVariable, NSString;

@interface NSLayoutAnchor : NSObject
{
    id _referenceItem;	// 8 = 0x8
    long long _attr;	// 16 = 0x10
    NSISVariable *_variable;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    id _cachedReferenceItems;	// 40 = 0x28
    id _reserved;	// 48 = 0x30
    unsigned int _type:2;	// 56 = 0x38
    unsigned int _reserved3:30;	// 56 = 0x38
}

+ (id)anchorNamed:(id)arg1 inItem:(id)arg2 symbolicAttribute:(long long)arg3;	// IMP=0x001000000002fa01
+ (id)anchorNamed:(id)arg1 inItem:(id)arg2;	// IMP=0x001000000002f9ec
+ (id)anchorWithName:(id)arg1 forReferenceView:(id)arg2 symbolicAttribute:(long long)arg3;	// IMP=0x001000000002f9da
+ (id)anchorWithName:(id)arg1 forReferenceView:(id)arg2;	// IMP=0x001000000002f9c8
+ (id)layoutAnchorWithName:(id)arg1 forReferenceView:(id)arg2;	// IMP=0x001000000002f9b6
+ (id)anchorWithItem:(id)arg1 attribute:(long long)arg2;	// IMP=0x001000000002f6eb
+ (id)layoutAnchorWithItem:(id)arg1 attribute:(long long)arg2;	// IMP=0x001000000002f6d9
+ (id)_anchorForItem:(id)arg1 attribute:(long long)arg2;	// IMP=0x001000000002f2fd
- (id)constraintLessThanOrEqualToAnchor:(id)arg1;	// IMP=0x0000000000031c16
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1;	// IMP=0x0000000000031bce
- (id)constraintEqualToAnchor:(id)arg1;	// IMP=0x0000000000031b89
- (id)constraintLessThanOrEqualToAnchor:(id)arg1 constant:(double)arg2;	// IMP=0x0000000000031b2d
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1 constant:(double)arg2;	// IMP=0x0000000000031ad3
- (id)constraintEqualToAnchor:(id)arg1 constant:(double)arg2;	// IMP=0x0000000000031a7c
- (long long)_constraintAttribute;	// IMP=0x0000000000031a72
- (id)_constraintItem;	// IMP=0x0000000000031a68
- (_Bool)nsli_lowerIntoExpression:(id)arg1 withCoefficient:(double)arg2 forConstraint:(id)arg3;	// IMP=0x000000000003143f
- (id)description;	// IMP=0x000000000003123e
- (id)_referencingConstraints;	// IMP=0x0000000000031074
- (id)constraintsAffectingLayout;	// IMP=0x0000000000030dcb
- (_Bool)hasAmbiguousLayout;	// IMP=0x0000000000030c47
- (double)_valueInEngine:(id)arg1;	// IMP=0x0000000000030ab9
- (id)_equationDescriptionLegendEntries;	// IMP=0x000000000003074e
- (id)_equationDescriptionInParent;	// IMP=0x0000000000030614
- (id)equationDescription;	// IMP=0x000000000003060c
- (_Bool)isCompatibleWithAnchor:(id)arg1;	// IMP=0x000000000003057d
- (_Bool)validateOtherAttribute:(long long)arg1;	// IMP=0x00000000000304ee
- (id)_referencedLayoutItems;	// IMP=0x000000000003048c
- (void)_accumulateReferenceLayoutItemsIntoTable:(id)arg1;	// IMP=0x0000000000030221
- (id)_expressionInContext:(CDStruct_1b4a36b4)arg1;	// IMP=0x000000000002fdb9
- (id)_variableName;	// IMP=0x000000000002fcf5
- (id)_referenceItem;	// IMP=0x000000000002fc3e
- (id)_referenceView;	// IMP=0x000000000002fc2c
- (id)initWithIndependentVariableName:(id)arg1 item:(id)arg2 symbolicAttribute:(long long)arg3;	// IMP=0x000000000002fafd
- (long long)_proxiedAttribute;	// IMP=0x000000000002f8ff
- (id)_proxiedItem;	// IMP=0x000000000002f848
- (id)initWithItem:(id)arg1 attribute:(long long)arg2;	// IMP=0x000000000002f71f
- (id)item;	// IMP=0x000000000002f6cf
- (id)anchorWithName:(id)arg1;	// IMP=0x000000000002f67d
- (id)anchorWithName:(id)arg1 referenceItem:(id)arg2 symbolicAttribute:(long long)arg3;	// IMP=0x000000000002f603
- (id)name;	// IMP=0x000000000002f58c
- (id)_expressionInDefaultContextWithEngine:(id)arg1;	// IMP=0x000000000002f2c6
- (id)_constituentAnchors;	// IMP=0x000000000002f0b4
- (id)_nearestAncestorLayoutItem;	// IMP=0x000000000002eee5
- (long long)_anchorType;	// IMP=0x000000000002eed8
- (id)initWithAnchor:(id)arg1;	// IMP=0x000000000002eccc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002ec7f
- (unsigned long long)hash;	// IMP=0x000000000002ebbe
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002e9ea
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002e8b5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002e5e9
- (void)dealloc;	// IMP=0x000000000002e585
- (id)initWithName:(id)arg1 referenceItem:(id)arg2 symbolicAttribute:(long long)arg3;	// IMP=0x000000000002e518
- (id)init;	// IMP=0x000000000002e4ff
- (id)ruleLessThanOrEqualToAnchor:(id)arg1 constant:(double)arg2 priority:(float)arg3 identifier:(id)arg4;	// IMP=0x0000000000005d60
- (id)ruleGreaterThanOrEqualToAnchor:(id)arg1 constant:(double)arg2 priority:(float)arg3 identifier:(id)arg4;	// IMP=0x0000000000005d46
- (id)ruleEqualToAnchor:(id)arg1 constant:(double)arg2 priority:(float)arg3 identifier:(id)arg4;	// IMP=0x0000000000005d2c
- (id)ruleLessThanOrEqualToAnchor:(id)arg1 constant:(double)arg2;	// IMP=0x0000000000005d0d
- (id)ruleGreaterThanOrEqualToAnchor:(id)arg1 constant:(double)arg2;	// IMP=0x0000000000005cee
- (id)ruleEqualToAnchor:(id)arg1 constant:(double)arg2;	// IMP=0x0000000000005ccf
- (id)ruleLessThanOrEqualToAnchor:(id)arg1;	// IMP=0x0000000000005c34
- (id)ruleGreaterThanOrEqualToAnchor:(id)arg1;	// IMP=0x0000000000005b9a
- (id)ruleEqualToAnchor:(id)arg1;	// IMP=0x0000000000005b03
- (id)observableValueInItem:(id)arg1;	// IMP=0x00000000000327f0
- (double)valueInItem:(id)arg1;	// IMP=0x00000000000326fe

@end

