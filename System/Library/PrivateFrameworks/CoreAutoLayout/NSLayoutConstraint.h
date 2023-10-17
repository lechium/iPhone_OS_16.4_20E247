//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLayoutAnchor, NSSet, NSString, _NSConstraintDescriptionLayoutRuleNode;

@interface NSLayoutConstraint : NSObject
{
    id _container;	// 8 = 0x8
    id _firstAnchor;	// 16 = 0x10
    id _secondAnchor;	// 24 = 0x18
    double _constant;	// 32 = 0x20
    double _loweredConstant;	// 40 = 0x28
    id _markerAndPositiveExtraVar;	// 48 = 0x30
    id _negativeExtraVar;	// 56 = 0x38
    unsigned long long _layoutConstraintFlags;	// 64 = 0x40
    float _coefficient;	// 72 = 0x48
    float _priority;	// 76 = 0x4c
}

+ (id)constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 constant:(double)arg3;	// IMP=0x001000000002a88b
+ (id)constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 toAnchor:(id)arg3 multiplier:(double)arg4 constant:(double)arg5;	// IMP=0x001000000002a66f
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 constant:(double)arg4;	// IMP=0x001000000002a643
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5;	// IMP=0x001000000002a623
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 constant:(double)arg6;	// IMP=0x001000000002a603
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6;	// IMP=0x001000000002a5eb
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7;	// IMP=0x001000000002a4eb
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7 symbolicConstantMultiplier:(double)arg8;	// IMP=0x001000000002a072
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7;	// IMP=0x001000000002a055
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7 theme:(id)arg8;	// IMP=0x001000000002a040
+ (id)constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4;	// IMP=0x001000000002a027
+ (id)_findCommonAncestorOfItem:(id)arg1 andItem:(id)arg2;	// IMP=0x0010000000029f7b
+ (void)deactivateConstraints:(id)arg1;	// IMP=0x0010000000029dd4
+ (void)activateConstraints:(id)arg1;	// IMP=0x0010000000029b89
+ (void)_setLegacyDecodingOnly:(_Bool)arg1;	// IMP=0x0010000000026de7
+ (double)_constraintConstantLimit;	// IMP=0x001000000002561c
@property(copy, setter=_setSecondAnchor:) NSLayoutAnchor *secondAnchor; // @synthesize secondAnchor=_secondAnchor;
@property(copy, setter=_setFirstAnchor:) NSLayoutAnchor *firstAnchor; // @synthesize firstAnchor=_firstAnchor;
@property(getter=isActive) _Bool active;
- (void)_setActive:(_Bool)arg1 mutuallyExclusiveConstraints:(id *)arg2;	// IMP=0x0000000000029a2f
- (_Bool)_nsib_isRedundant;	// IMP=0x00000000000299e3
- (_Bool)_nsib_isRedundantInEngine:(id)arg1;	// IMP=0x0000000000029443
- (int)nsis_orientationHintForVariable:(id)arg1;	// IMP=0x00000000000293e2
- (id)nsis_descriptionOfVariable:(id)arg1;	// IMP=0x0000000000029295
- (id)_explainUnsatisfaction;	// IMP=0x0000000000029220
- (void)_forceSatisfactionMeasuringUnsatisfactionChanges:(id *)arg1 andMutuallyExclusiveConstraints:(id *)arg2;	// IMP=0x0000000000029130
- (void)_tryToActivateMeasuringUnsatisfactionChanges:(id *)arg1 andMutuallyExclusiveConstraints:(id *)arg2;	// IMP=0x0000000000028c06
- (id)_loweredExpression;	// IMP=0x0000000000028b74
- (_Bool)_lowerIntoExpression:(id)arg1 reportingConstantIsRounded:(_Bool *)arg2;	// IMP=0x0000000000028a70
- (struct CGSize)_engineToContainerScalingCoefficients;	// IMP=0x0000000000028a3c
- (void)_removeFromEngine:(id)arg1;	// IMP=0x0000000000028902
- (void)_addToEngine:(id)arg1;	// IMP=0x00000000000288ee
- (_Bool)_addToEngine:(id)arg1 mutuallyExclusiveConstraints:(id *)arg2;	// IMP=0x00000000000287c4
- (_Bool)_addToEngine:(id)arg1 integralizationAdjustment:(double)arg2 mutuallyExclusiveConstraints:(id *)arg3;	// IMP=0x00000000000287b2
- (double)priorityForVariable:(id)arg1;	// IMP=0x00000000000287a7
- (id)_constraintValueCopy;	// IMP=0x000000000002866f
- (void)_setMutablePropertiesFromConstraint:(id)arg1;	// IMP=0x000000000002839f
- (_Bool)_isEqualToConstraintValue:(id)arg1 includingConstant:(_Bool)arg2 includeOtherMutableProperties:(_Bool)arg3;	// IMP=0x0000000000027cba
- (unsigned long long)_constraintValueHashIncludingConstant:(_Bool)arg1 includeOtherMutableProperties:(_Bool)arg2;	// IMP=0x0000000000027b5e
- (_Bool)_describesSameRestrictionAsConstraint:(id)arg1;	// IMP=0x0000000000027b41
@property(readonly, copy) NSSet *_referencedLayoutItems;
- (_Bool)_referencesLayoutItem:(id)arg1;	// IMP=0x00000000000279dc
- (id)_constraintByReplacingView:(id)arg1 withView:(id)arg2;	// IMP=0x00000000000279ca
- (id)_constraintByReplacingItem:(id)arg1 withItem:(id)arg2;	// IMP=0x00000000000277c1
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000027275
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000026df3
@property(readonly, copy) NSString *description;
- (id)descriptionAccessory;	// IMP=0x0000000000026778
- (id)_priorityDescription;	// IMP=0x0000000000026704
- (int)_constraintType;	// IMP=0x000000000002600a
- (void)dealloc;	// IMP=0x0000000000025f6b
- (id)init;	// IMP=0x0000000000025f23
@property double symbolicConstantMultiplier;
@property(copy) NSString *symbolicConstant;
- (void)_setSymbolicConstant:(id)arg1;	// IMP=0x0000000000025cc0
- (id)_symbolicConstant;	// IMP=0x0000000000025c18
@property double constant;
- (id)_constantDescriptionForDTrace;	// IMP=0x0000000000025a9f
- (id)_descriptionforSymbolicConstant;	// IMP=0x0000000000025a15
- (_Bool)_effectiveConstant:(double *)arg1 error:(id *)arg2;	// IMP=0x0000000000025500
- (void)_containerGeometryDidChange;	// IMP=0x00000000000253b7
@property(setter=_setContainerDeclaredConstraint:) _Bool _containerDeclaredConstraint;
- (void)_clearWeakContainerReference;	// IMP=0x0000000000024ea3
@property id container;
- (_Bool)_loweredConstantIsRounded;	// IMP=0x0000000000024e74
- (id)_markerAndPositiveExtraVar;	// IMP=0x0000000000024e5f
- (_Bool)nsis_valueOfVariableIsUserObservable:(id)arg1;	// IMP=0x0000000000024e57
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;	// IMP=0x0000000000024e51
- (double)_allowedMagnitudeForIntegralizationAdjustment;	// IMP=0x0000000000024e48
- (double)_fudgeIncrement;	// IMP=0x0000000000024e3f
- (_Bool)_isFudgeable;	// IMP=0x0000000000024e37
- (void)setAnimations:(id)arg1;	// IMP=0x0000000000024e21
- (id)animations;	// IMP=0x0000000000024e10
@property(copy) NSString *identifier;
- (id)_identifier;	// IMP=0x0000000000024c45
@property(readonly) _Bool hasBeenLowered;
- (_Bool)_existsInEngine:(id)arg1;	// IMP=0x0000000000024c0f
@property float priority;
- (_Bool)_isIBPrototypingLayoutConstraint;	// IMP=0x00000000000245e3
@property _Bool shouldBeArchived;
- (void)_setSecondItem:(id)arg1 attribute:(long long)arg2;	// IMP=0x0000000000024570
@property(readonly) long long secondAttribute;
@property(readonly) id secondItem;
@property(setter=_setMultiplier:) double multiplier;
@property(setter=_setRelation:) long long relation;
- (void)_setFirstItem:(id)arg1 attribute:(long long)arg2;	// IMP=0x00000000000242e2
@property(readonly) long long firstAttribute;
@property(readonly) id firstItem;
@property(nonatomic, getter=_loweredConstantNeedsUpdate, setter=_setLoweredConstantNeedsUpdate:) _Bool loweredConstantNeedsUpdate;
@property(readonly) double unsatisfaction;
@property(setter=_setAssociatedRuleNode:) _NSConstraintDescriptionLayoutRuleNode *_associatedRuleNode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
