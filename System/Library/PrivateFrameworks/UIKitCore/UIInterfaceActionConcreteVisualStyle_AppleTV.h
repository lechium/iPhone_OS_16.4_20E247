//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionConcreteVisualStyle_AppleTV
{
}

- (void)configureAttributesForActionScrollView:(id)arg1 groupViewState:(id)arg2;	// IMP=0x000000000002d29f
- (void)configureForDismissingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;	// IMP=0x000000000002d299
- (void)configureForPresentingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;	// IMP=0x000000000002d293
- (void)configureAttributesForActionRepresentationView:(id)arg1 actionViewState:(id)arg2;	// IMP=0x000000000002d1f6
- (id)actionPropertiesAffectingActionRepresentationViewStyling;	// IMP=0x000000000002d18f
- (void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;	// IMP=0x000000000002d129
- (id)actionPropertiesAffectingLabelStyling;	// IMP=0x000000000002d0c2
- (id)newGroupBackgroundViewWithGroupViewState:(id)arg1;	// IMP=0x000000000002d0b1
- (id)newActionBackgroundViewForViewState:(id)arg1;	// IMP=0x000000000002cf9d
- (id)actionImageViewTintColorForImageProperty:(id)arg1 actionViewState:(id)arg2;	// IMP=0x000000000002cf08
- (id)actionTitleLabelColorForViewState:(id)arg1;	// IMP=0x000000000002cdff
- (id)actionTitleLabelFontForViewState:(id)arg1;	// IMP=0x000000000002cddc
- (_Bool)selectByPressGestureRequired;	// IMP=0x000000000002cdd4
- (struct CGSize)minimumActionContentSize;	// IMP=0x000000000002cdc3
- (struct UIEdgeInsets)actionSequenceEdgeInsets;	// IMP=0x000000000002cd75
- (double)actionSectionSpacing;	// IMP=0x000000000002cd67
- (double)verticalImageContentSpacing;	// IMP=0x000000000002cd59
- (double)horizontalImageContentSpacing;	// IMP=0x000000000002cd4b
- (struct UIEdgeInsets)contentMargin;	// IMP=0x000000000002cd01
- (double)contentCornerRadius;	// IMP=0x000000000002ccf8
- (id)defaultScreen;	// IMP=0x000000000002ccdf
- (id)actionViewStateForAttachingToActionRepresentationView:(id)arg1;	// IMP=0x000000000002cc92

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
