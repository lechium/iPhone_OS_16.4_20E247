//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@interface UICollectionReusableView (GKReusableView)
+ (void)_gkSetupSelectableThreeLineLayoutWithCell:(id)arg1 icon:(id)arg2 selectionView:(id)arg3 upperLine:(id)arg4 middleLine:(id)arg5 lowerLine:(id)arg6 metricOverrides:(id)arg7;	// IMP=0x00600000000131bf
+ (void)_gkSetupSelectableTwoLineLayoutWithCell:(id)arg1 icon:(id)arg2 selectionView:(id)arg3 upperLine:(id)arg4 lowerLine:(id)arg5 metricOverrides:(id)arg6;	// IMP=0x0060000000012989
+ (id)_gkSetupThreeLineLayoutWithSuperview:(id)arg1 icon:(id)arg2 upperLine:(id)arg3 middleLine:(id)arg4 lowerLine:(id)arg5 metricOverrides:(id)arg6;	// IMP=0x0060000000012466
+ (id)_gkSetupTwoLineLayoutWithSuperview:(id)arg1 icon:(id)arg2 upperLabel:(id)arg3 lowerLabel:(id)arg4 leadingBetween:(double)arg5 fontTextStyle:(id)arg6 metricOverrides:(id)arg7;	// IMP=0x0060000000011f5f
+ (void)_gkAdjustConstraintMargins:(id)arg1 leading:(double)arg2 trailing:(double)arg3;	// IMP=0x0060000000011a72
+ (id)_gkStandardConstraintMetricsForIdiom:(long long)arg1 withOverrides:(id)arg2;	// IMP=0x006000000001191f
+ (id)_gkStandardConstraintMetricsForIdiom:(long long)arg1;	// IMP=0x0060000000011745
+ (void)registerSupplementaryViewClassesForKind:(id)arg1 withCollectionView:(id)arg2;	// IMP=0x00600000000116e2
- (id)_gkNewStandardImageView;	// IMP=0x0010000000011ee1
- (id)_gkNewStandardInfoLabel;	// IMP=0x0010000000011db0
- (id)_gkNewStandardTitleLabel;	// IMP=0x0010000000011c7f
- (void)_gkSetLeadingGuideConstraint:(id)arg1 trailingGuideConstraint:(id)arg2;	// IMP=0x00100000000119c1
@end
