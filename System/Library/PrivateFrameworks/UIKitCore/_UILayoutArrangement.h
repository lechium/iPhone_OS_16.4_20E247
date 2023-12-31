//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, NSSet, NSString, UIView, _UILAConfigurationHistory, _UILayoutSpacer;
@protocol _UILAPropertySource;

__attribute__((visibility("hidden")))
@interface _UILayoutArrangement : NSObject
{
    NSMutableSet *_incomingItems;	// 8 = 0x8
    NSMutableSet *_outgoingItems;	// 16 = 0x10
    NSMutableSet *_hiddenItems;	// 24 = 0x18
    NSMutableSet *_newlyHiddenItems;	// 32 = 0x20
    NSMutableSet *_newlyUnhiddenItems;	// 40 = 0x28
    NSMutableSet *_invalidBaselineConstraints;	// 48 = 0x30
    NSMutableArray *_canvasConnectionConstraints;	// 56 = 0x38
    _Bool _awaitingAnimationLayoutPass;	// 64 = 0x40
    _Bool _layoutFillsCanvas;	// 65 = 0x41
    _Bool _layoutUsesCanvasMarginsWhenFilling;	// 66 = 0x42
    _UILAConfigurationHistory *_unanimatedConfigurationTarget;	// 72 = 0x48
    NSMutableArray *_mutableItems;	// 80 = 0x50
    _UILayoutSpacer *_spanningLayoutGuide;	// 88 = 0x58
    _UILAConfigurationHistory *_configurationHistory;	// 96 = 0x60
    UIView *_canvas;	// 104 = 0x68
    long long _axis;	// 112 = 0x70
}

+ (Class)_configurationHistoryClass;	// IMP=0x00100000013514ac
- (void).cxx_destruct;	// IMP=0x0000000001355b8b
@property(nonatomic) _Bool layoutUsesCanvasMarginsWhenFilling; // @synthesize layoutUsesCanvasMarginsWhenFilling=_layoutUsesCanvasMarginsWhenFilling;
@property(nonatomic) _Bool layoutFillsCanvas; // @synthesize layoutFillsCanvas=_layoutFillsCanvas;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
@property(nonatomic) __weak UIView *canvas; // @synthesize canvas=_canvas;
@property(readonly, nonatomic) NSSet *invalidBaselineConstraints; // @synthesize invalidBaselineConstraints=_invalidBaselineConstraints;
@property(readonly, retain, nonatomic) _UILayoutSpacer *_spanningLayoutGuide; // @synthesize _spanningLayoutGuide;
@property(retain, nonatomic, setter=_setMutableItems:) NSMutableArray *_mutableItems; // @synthesize _mutableItems;
@property(readonly, nonatomic) _Bool _awaitingAnimationLayoutPass; // @synthesize _awaitingAnimationLayoutPass;
@property(retain, nonatomic, setter=_setUnanimatedConfigurationTarget:) _UILAConfigurationHistory *_unanimatedConfigurationTarget; // @synthesize _unanimatedConfigurationTarget;
- (void)_updateCanvasConnectionConstraintsIfNecessary;	// IMP=0x0000000001355209
- (_Bool)_configurationRequiresCanvasConnectionFittingConstraint;	// IMP=0x0000000001355201
- (_Bool)_usesCenteringConnectionConstraint;	// IMP=0x00000000013551f9
- (long long)_layoutRelationForCanvasConnectionForAttribute:(long long)arg1;	// IMP=0x00000000013551f1
- (_Bool)_canvasConnectionConstraintsNeedUpdatePass;	// IMP=0x0000000001355032
- (void)_updateSpanningLayoutGuideConstraintsIfNecessary;	// IMP=0x0000000001354413
- (void)_removeSpanningLayoutGuide;	// IMP=0x000000000135439a
- (_Bool)_spanningGuideConstraintsNeedUpdate;	// IMP=0x0000000001354249
- (_Bool)_usesInequalitySpanningConstraintForAttribute:(long long)arg1;	// IMP=0x0000000001354241
- (id)_viewOrGuideForLocationAttribute:(long long)arg1;	// IMP=0x0000000001354177
- (unsigned long long)_indexOfItemForLocationAttribute:(long long)arg1;	// IMP=0x00000000013540ac
- (void)_updateArrangementConstraints;	// IMP=0x000000000135402a
- (void)_clearAllConstraintsArrays;	// IMP=0x0000000001353ffc
- (void)_clearCanvasConnectionConstraints;	// IMP=0x0000000001353fb7
- (void)_updateConfigurationHistory;	// IMP=0x0000000001353d14
- (_Bool)_hasStaleConfiguration;	// IMP=0x0000000001353b38
- (void)_respondToChangesWithIncomingItem:(id)arg1 outgoingItem:(id)arg2 newlyHiddenItem:(id)arg3 newlyUnhiddenItem:(id)arg4;	// IMP=0x000000000135352c
- (void)_didEvaluateMultilineHeightForView:(id)arg1;	// IMP=0x0000000001353526
- (void)_systemLayoutFittingSizeDidChangeForItem:(id)arg1;	// IMP=0x0000000001353520
- (_Bool)_monitorsSystemLayoutFittingSizeForItem:(id)arg1;	// IMP=0x0000000001353518
- (void)_intrinsicContentSizeInvalidatedForItem:(id)arg1;	// IMP=0x0000000001353512
- (long long)_centerAttributeForCanvasConnections;	// IMP=0x00000000013534f2
- (long long)_minAttributeForCanvasConnections;	// IMP=0x00000000013534cf
- (long long)_dimensionAttributeForCurrentAxis;	// IMP=0x00000000013534af
- (id)_baselineDependentConstraints;	// IMP=0x00000000013534a7
- (void)_hasBaselineChangedNotification:(id)arg1;	// IMP=0x0000000001352d6d
- (void)_invalidateBaselineConstraint:(id)arg1;	// IMP=0x0000000001352d13
- (void)_hasBaselineChangedNotificationRequirementDidChange;	// IMP=0x00000000013529bd
- (_Bool)_requiresNotificationForHasBaselinePropertyChanges;	// IMP=0x00000000013529b5
- (_Bool)_itemWantsLayoutAsIfVisible:(id)arg1;	// IMP=0x00000000013527f3
- (void)_visibilityParameterChangedForItem:(id)arg1;	// IMP=0x000000000135270e
- (void)removeItem:(id)arg1;	// IMP=0x0000000001352658
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000001352378
- (void)addItem:(id)arg1;	// IMP=0x00000000013522e4
@property(readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property(readonly, nonatomic) NSSet *_newlyHiddenItems;
@property(readonly, nonatomic) NSSet *_hiddenItems;
@property(readonly, nonatomic) NSSet *_outgoingItems;
@property(readonly, nonatomic) NSSet *_incomingItems;
@property(readonly, copy, nonatomic) NSArray *items;
- (id)init;	// IMP=0x00000000013521f4
- (id)initWithItems:(id)arg1;	// IMP=0x0000000001351f18
- (id)initWithItems:(id)arg1 onAxis:(long long)arg2;	// IMP=0x0000000001351ef2
- (void)_setLayoutUsesCanvasMarginsWhenFilling:(_Bool)arg1 notify:(_Bool)arg2;	// IMP=0x0000000001351e4f
- (void)_setLayoutFillsCanvas:(_Bool)arg1 notify:(_Bool)arg2;	// IMP=0x0000000001351d95
- (void)_setAxis:(long long)arg1 notify:(_Bool)arg2;	// IMP=0x0000000001351caf
@property(readonly, nonatomic) id <_UILAPropertySource> _propertySource;
- (void)_trackChangesWithConfigBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000001351b81
- (void)_registerAnimationRequest;	// IMP=0x0000000001351b1a
- (void)_createUnanimatedConfigurationTargetIfNecessary;	// IMP=0x0000000001351aaf
@property(readonly, retain, nonatomic) _UILAConfigurationHistory *_configurationHistory; // @synthesize _configurationHistory;
- (long long)_axisForSpanningLayoutGuide;	// IMP=0x0000000001351706
- (_Bool)_spanningLayoutGuideAlwaysUsesFittingConstraint;	// IMP=0x00000000013516f4
- (float)_spanningLayoutGuideFittingPriority;	// IMP=0x00000000013516cb
- (id)_identifierForSpanningLayoutGuide;	// IMP=0x00000000013516be
- (_Bool)_allItemsHidden;	// IMP=0x00000000013515ff
- (id)_spanningLayoutGuideCreateIfNecessary;	// IMP=0x00000000013515be
- (void)_createSpanningLayoutGuide;	// IMP=0x00000000013514b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

