//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CarCardView, MISSING_TYPE, MapsTheme, NSLayoutXAxisAnchor;

@interface UIView (UIKitExtras)
+ (void)_maps_animateForAndromeda:(_Bool)arg1 animations:(CDUnknownBlockType)arg2;	// IMP=0x0020000000176928
+ (_Bool)_maps_shouldAdoptImplicitAnimationParameters;	// IMP=0x00100000001758b4
- (void)_maps_setAllContentHuggingAndCompressionResistancePriorities:(float)arg1;	// IMP=0x00200000001768b7
- (double)_maps_maxConstraintConstantForAxis:(long long)arg1;	// IMP=0x00100000001767bb
- (struct CGAffineTransform)_maps_transformScaledToTopAndTrailingAtScale:(double)arg1;	// IMP=0x0010000000176617
- (struct CGAffineTransform)_maps_transformScaledToTopAndLeadingAtScale:(double)arg1;	// IMP=0x0010000000176473
- (struct CGAffineTransform)_maps_transformScaledToTopAtScale:(double)arg1;	// IMP=0x0010000000176392
- (struct CGAffineTransform)_maps_transformScaledToLeadingAtScale:(double)arg1;	// IMP=0x0010000000176234
- (id)_maps_constraintsEqualToEdgesOfLayoutGuide:(id)arg1 insets:(struct UIEdgeInsets)arg2 priority:(float)arg3;	// IMP=0x0010000000175fd4
- (id)_maps_constraintsEqualToEdgesOfLayoutGuide:(id)arg1 priority:(float)arg2;	// IMP=0x0010000000175fa2
- (id)_maps_constraintsEqualToEdgesOfView:(id)arg1 insets:(struct UIEdgeInsets)arg2 priority:(float)arg3;	// IMP=0x0010000000175d42
- (id)_maps_constraintsEqualToEdgesOfView:(id)arg1 priority:(float)arg2;	// IMP=0x0010000000175d10
- (id)_maps_constraintsForCenteringInView:(id)arg1 edgeInsets:(struct UIEdgeInsets)arg2 priorities:(CDStruct_818bb265)arg3;	// IMP=0x0010000000175a78
- (id)_maps_constraintsForCenteringInView:(id)arg1 priorities:(CDStruct_818bb265)arg2;	// IMP=0x0010000000175a41
- (id)_maps_constraintsForCenteringInView:(id)arg1 edgeInsets:(struct UIEdgeInsets)arg2;	// IMP=0x0010000000175a25
- (id)_maps_constraintsForCenteringInView:(id)arg1;	// IMP=0x00100000001759e4
- (void)_maps_alignTopToView:(id)arg1;	// IMP=0x0010000000175937
@property(readonly, nonatomic) _Bool _maps_isVisible;
- (struct CGSize)_maps_compressedSizeForWidth:(double)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000175867
- (struct CGRect)_maps_centeringFrameForView:(id)arg1 size:(struct CGSize)arg2 inRect:(struct CGRect)arg3;	// IMP=0x00100000001757b5
- (struct CGRect)_maps_centeringFrameForView:(id)arg1 inRect:(struct CGRect)arg2 options:(long long)arg3;	// IMP=0x00100000001755b8
- (struct CGRect)_maps_centeringFrameForView:(id)arg1 fit:(_Bool)arg2 constrain:(_Bool)arg3 inRect:(struct CGRect)arg4;	// IMP=0x0010000000175577
- (void)_maps_initializeWithAutolayoutCompressedSize;	// IMP=0x00100000001754fb
- (MISSING_TYPE *)_maps_recursivelySetAllowsGroupOpacity: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000175389
- (id)_mapsCar_injectBlurView;	// IMP=0x00100000003c6126
- (void)_mapsCar_updateShadow;	// IMP=0x00100000003c6254
@property(readonly, nonatomic) NSLayoutXAxisAnchor *_maps_rightRHDAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *_maps_leftRHDAnchor;
- (id)_addHairlineAtTrailing:(_Bool)arg1 topMargin:(double)arg2 bottomMargin:(double)arg3;	// IMP=0x00100000004300b4
- (id)_addHairlineAtTrailingWithTopMargin:(double)arg1 bottomMargin:(double)arg2;	// IMP=0x001000000043009d
- (id)_maps_addHairlineAtTrailingWithMargin:(double)arg1;	// IMP=0x0010000000430083
- (id)_addHairlineAtLeadingWithTopMargin:(double)arg1 bottomMargin:(double)arg2;	// IMP=0x001000000043006f
- (id)_maps_addHairlineAtLeadingWithMargin:(double)arg1;	// IMP=0x0010000000430058
- (id)_addHairlineAtBottom:(_Bool)arg1 leadingMargin:(double)arg2 trailingMargin:(double)arg3;	// IMP=0x001000000042fdc3
- (id)_maps_addHairlineAtBottomWithLeadingMargin:(double)arg1 trailingMargin:(double)arg2;	// IMP=0x001000000042fdac
- (id)_maps_addHairlineAtBottomWithMargin:(double)arg1;	// IMP=0x001000000042fd97
- (id)_maps_addHairlineAtTopWithLeadingMargin:(double)arg1 trailingMargin:(double)arg2;	// IMP=0x001000000042fd83
- (id)_maps_addHairlineAtTopWithMargin:(double)arg1;	// IMP=0x001000000042fd6e
@property(readonly, nonatomic) MapsTheme *theme;
@property(readonly, nonatomic) __weak CarCardView *_cardView;
- (id)_mapsCar_insertFocusContainerGuide;	// IMP=0x00100000006a2595
- (id)_mapsCar_insertFocusGuideWithOriginView:(id)arg1 toDestinationFocusEnvironments:(id)arg2 forDirection:(unsigned long long)arg3;	// IMP=0x00100000006a2339
- (id)_maps_mapsSceneDelegate;	// IMP=0x00100000006f9b55
- (id)_mapsCar_recursiveSubviewsWithClass:(Class)arg1;	// IMP=0x0010000000abff48
@end
