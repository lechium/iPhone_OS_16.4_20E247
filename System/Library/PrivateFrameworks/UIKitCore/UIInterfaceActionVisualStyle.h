//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIInterfaceActionConcreteVisualStyle, UIInterfaceActionGroupViewState, UIInterfaceActionOverrideVisualStyle;
@protocol UIInterfaceActionConcreteVisualStyleImpl;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionVisualStyle : NSObject
{
    UIInterfaceActionGroupViewState *_groupViewState;	// 8 = 0x8
    UIInterfaceActionConcreteVisualStyle<UIInterfaceActionConcreteVisualStyleImpl> *_concreteVisualStyle;	// 16 = 0x10
    CDUnknownBlockType _fontForViewStateBlock;	// 24 = 0x18
    UIInterfaceActionOverrideVisualStyle *_visualStyleOverride;	// 32 = 0x20
}

+ (id)idiomSpecificStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2;	// IMP=0x0010000000030cea
- (void).cxx_destruct;	// IMP=0x00000000000326af
@property(retain, nonatomic) UIInterfaceActionOverrideVisualStyle *visualStyleOverride; // @synthesize visualStyleOverride=_visualStyleOverride;
@property(copy, nonatomic) CDUnknownBlockType fontForViewStateBlock; // @synthesize fontForViewStateBlock=_fontForViewStateBlock;
@property(retain, nonatomic) UIInterfaceActionConcreteVisualStyle<UIInterfaceActionConcreteVisualStyleImpl> *concreteVisualStyle; // @synthesize concreteVisualStyle=_concreteVisualStyle;
@property(readonly, nonatomic) UIInterfaceActionGroupViewState *groupViewState; // @synthesize groupViewState=_groupViewState;
- (void)configureAttributesForActionRepresentationView:(id)arg1 actionViewState:(id)arg2;	// IMP=0x00000000000325f2
- (id)actionPropertiesAffectingActionRepresentationViewStyling;	// IMP=0x000000000003257f
- (void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3;	// IMP=0x00000000000324d0
- (id)actionPropertiesAffectingImageViewStyling;	// IMP=0x0000000000032406
- (void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;	// IMP=0x0000000000032357
- (id)actionPropertiesAffectingLabelStyling;	// IMP=0x000000000003228d
- (void)configureAttributesForActionScrollView:(id)arg1 groupViewState:(id)arg2;	// IMP=0x0000000000032207
- (id)actionGroupPropertiesAffectingActionsScrollViewStyling;	// IMP=0x0000000000032194
- (void)configureForDismissingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;	// IMP=0x000000000003210e
- (void)configureForPresentingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;	// IMP=0x0000000000032088
- (id)actionImageViewTintColorForImageProperty:(id)arg1 actionViewState:(id)arg2;	// IMP=0x0000000000031ff1
- (id)actionClassificationLabelColorForViewState:(id)arg1;	// IMP=0x0000000000031f6e
- (id)actionClassificationLabelFontForViewState:(id)arg1;	// IMP=0x0000000000031e9e
- (id)actionTitleLabelColorForViewState:(id)arg1;	// IMP=0x0000000000031e1b
- (id)actionTitleLabelFontForViewState:(id)arg1;	// IMP=0x0000000000031d4b
- (id)newActionBackgroundViewForViewState:(id)arg1;	// IMP=0x0000000000031cd4
- (id)newSectionSeparatorViewForGroupViewState:(id)arg1;	// IMP=0x0000000000031bf6
- (id)newActionSeparatorViewForGroupViewState:(id)arg1;	// IMP=0x0000000000031b7f
- (id)newGroupBackgroundViewWithGroupViewState:(id)arg1;	// IMP=0x0000000000031b08
- (id)actionViewStateForAttachingToActionRepresentationView:(id)arg1;	// IMP=0x0000000000031a85
- (double)actionTitleLabelMinimumScaleFactor;	// IMP=0x0000000000031a35
- (_Bool)selectByIndirectPointerTouchRequired;	// IMP=0x00000000000319f1
- (_Bool)selectionFeedbackEnabled;	// IMP=0x00000000000319ad
- (_Bool)selectByPressGestureRequired;	// IMP=0x0000000000031969
- (struct UIEdgeInsets)contentMargin;	// IMP=0x000000000003190b
- (double)contentCornerRadius;	// IMP=0x00000000000318bb
- (struct UIEdgeInsets)actionSequenceEdgeInsets;	// IMP=0x000000000003185d
- (double)actionSectionSpacing;	// IMP=0x000000000003180d
- (double)verticalImageContentSpacing;	// IMP=0x00000000000317bd
- (double)horizontalImageContentSpacing;	// IMP=0x000000000003176d
- (struct CGSize)minimumActionContentSize;	// IMP=0x0000000000031713
- (struct CGSize)maximumActionGroupContentSize;	// IMP=0x00000000000316b9
- (id)defaultScreen;	// IMP=0x0000000000031669
- (id)_styleForVisualProperties;	// IMP=0x000000000003164f
- (void)_base_configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3;	// IMP=0x00000000000313a3
- (id)_base_actionPropertiesAffectingImageViewStyling;	// IMP=0x000000000003133c
- (void)_base_configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;	// IMP=0x0000000000031005
- (id)_base_actionPropertiesAffectingLabelStyling;	// IMP=0x0000000000030f72
- (id)copyWithGroupViewState:(id)arg1;	// IMP=0x0000000000030b5f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000030ad8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000309a1
@property(readonly, copy) NSString *description;
- (id)initWithConcreteVisualStyle:(id)arg1;	// IMP=0x000000000003082e
- (id)init;	// IMP=0x00000000000307ee
- (id)defaultConcreteActionTitleLabelPreferredFont;	// IMP=0x0000000000032754
- (id)defaultConcreteActionTitleLabelRegularFont;	// IMP=0x00000000000326ed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

