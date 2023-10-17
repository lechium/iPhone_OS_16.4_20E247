//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSSet, NSString, _UIInterfaceActionImagePropertyView, _UIInterfaceActionLabelsPropertyView;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionSystemRepresentationView
{
    _UIInterfaceActionImagePropertyView *_leadingImageView;	// 8 = 0x8
    _UIInterfaceActionImagePropertyView *_trailingImageView;	// 16 = 0x10
    _UIInterfaceActionLabelsPropertyView *_labelsView;	// 24 = 0x18
    NSSet *_viewsToDisplayWhenContentsVisible;	// 32 = 0x20
    NSSet *_displayedViews;	// 40 = 0x28
    NSArray *_displayedViewsSpacingConstraints;	// 48 = 0x30
    NSArray *_displayedViewsPositioningConstraints;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000004eb7c
@property(readonly, nonatomic) NSArray *displayedViewsPositioningConstraints; // @synthesize displayedViewsPositioningConstraints=_displayedViewsPositioningConstraints;
@property(readonly, nonatomic) NSArray *displayedViewsSpacingConstraints; // @synthesize displayedViewsSpacingConstraints=_displayedViewsSpacingConstraints;
@property(retain, nonatomic) NSSet *displayedViews; // @synthesize displayedViews=_displayedViews;
@property(retain, nonatomic) NSSet *viewsToDisplayWhenContentsVisible; // @synthesize viewsToDisplayWhenContentsVisible=_viewsToDisplayWhenContentsVisible;
@property(readonly, nonatomic) _UIInterfaceActionLabelsPropertyView *labelsView; // @synthesize labelsView=_labelsView;
@property(readonly, nonatomic) _UIInterfaceActionImagePropertyView *trailingImageView; // @synthesize trailingImageView=_trailingImageView;
@property(readonly, nonatomic) _UIInterfaceActionImagePropertyView *leadingImageView; // @synthesize leadingImageView=_leadingImageView;
- (_Bool)_isDisplayingTrailingImageView;	// IMP=0x000000000004eac6
- (_Bool)_isDisplayingLeadingImageView;	// IMP=0x000000000004ea9b
- (_Bool)_displayedViewsConstraintsNeedsLoading;	// IMP=0x000000000004ea77
- (void)_activateDisplayedViewsConstraints;	// IMP=0x000000000004e91e
- (void)_invalidateDisplayedViewsConstraints;	// IMP=0x000000000004e891
- (void)_updateDisplayedViewsConstraintsVisualStyleConstants;	// IMP=0x000000000004e7e1
- (id)_constraintsForHorizontallyCenteringLabelsView;	// IMP=0x000000000004e6d7
- (id)_constraintsForInsettingImageViewsLeadingAndTrailingEdge;	// IMP=0x000000000004e3a8
- (id)_constraintsForInsettingLabelsViewLeadingAndTrailingHorizontalEdgeReferenceExact:(_Bool)arg1;	// IMP=0x000000000004e14a
- (id)_constraintsForInsettingLabelsViewLeadingAndTrailingToImageViewsExact:(_Bool)arg1;	// IMP=0x000000000004df17
- (id)_constraintsForInsettingLabelsViewLeadingAndTrailing;	// IMP=0x000000000004dbda
- (id)_constraintsToEnsureContainerHeightTallEnoughForViews:(id)arg1;	// IMP=0x000000000004d801
- (id)_constraintForBaselineAligningOrVerticallyCenteringImageViewToLabelsView:(id)arg1;	// IMP=0x000000000004d717
- (id)_constraintForVerticallyCenteringLabelsView;	// IMP=0x000000000004d68d
- (void)_loadConstraintsForLabelsAndImagesDisplay;	// IMP=0x000000000004d25d
- (void)_loadConstraintsForLabelsOnlyDisplay;	// IMP=0x000000000004d05b
- (void)_loadConstraintsForDisplayedViews;	// IMP=0x000000000004cfd1
- (id)_horizontalEdgeReference;	// IMP=0x000000000004cfbf
- (void)_reloadHierarchyWithViewsToDisplayWhenContentsVisible;	// IMP=0x000000000004ce64
- (void)_removeAllDisplayedViews;	// IMP=0x000000000004cdee
- (void)_arrangeDisplayedViews;	// IMP=0x000000000004cda3
- (void)_reloadViewsToDisplayWhenContentsVisible;	// IMP=0x000000000004ccaf
- (void)_applyVisualStyleToDisplayedViews;	// IMP=0x000000000004cc9d
- (void)_applyVisualStyle;	// IMP=0x000000000004cc5c
- (void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;	// IMP=0x000000000004cc2d
- (void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2;	// IMP=0x000000000004cb0e
- (_Bool)_hasLoadedContents;	// IMP=0x000000000004caf9
- (void)updateContentsInsertedIntoHierarchy;	// IMP=0x000000000004cae7
- (void)loadContents;	// IMP=0x000000000004c932
- (void)updateConstraints;	// IMP=0x000000000004c8f1
- (id)initWithAction:(id)arg1;	// IMP=0x000000000004c7ab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
