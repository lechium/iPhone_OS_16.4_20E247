//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIFont.h>

@interface UIFont (FRAdditions)
+ (double)fr_preferredHeightForString:(id)arg1 baseFontSize:(double)arg2 maxFontSize:(double)arg3 textStyle:(id)arg4 constrainedToWidth:(double)arg5;	// IMP=0x0010000000022437
+ (double)fr_preferredHeightForString:(id)arg1 textStyle:(id)arg2 constrainedToWidth:(double)arg3;	// IMP=0x0010000000022414
+ (double)fr_preferredHeightForString:(id)arg1 constrainedToWidth:(double)arg2;	// IMP=0x00100000000223f8
+ (double)fr_inverselyScaledValueForValue:(double)arg1 scalingRate:(double)arg2;	// IMP=0x00100000000223bf
+ (double)fr_scaledValueForValue:(double)arg1 scalingRate:(double)arg2;	// IMP=0x0010000000022384
+ (double)fr_inverselyScaledValueForValue:(double)arg1;	// IMP=0x001000000002234b
+ (double)fr_notRoundedScaledValueForValue:(double)arg1;	// IMP=0x00100000000222e0
+ (double)fr_scaledValueForValue:(double)arg1;	// IMP=0x0010000000022271
+ (id)fr_preferredFontForBaseFont:(id)arg1;	// IMP=0x00100000000221be
+ (_Bool)fr_isDefaultContentSizeCategory;	// IMP=0x001000000002213f
+ (_Bool)fr_accessibilityFontSizesEnabled;	// IMP=0x00100000000220d0
+ (id)fr_appropriateValueForCurrentContentSizeCategoryUsingMap:(id)arg1;	// IMP=0x0010000000021a91
+ (id)fr_drukTextBoldForSize:(double)arg1;	// IMP=0x0010000000021a71
+ (id)fr_drukWideMediumForSize:(double)arg1;	// IMP=0x0010000000021a51
+ (id)fr_orderedContentSizeCategories;	// IMP=0x0010000000021960
+ (_Bool)fr_contentSizeCategoryIsGreaterThan:(id)arg1;	// IMP=0x00100000000218cf
+ (id)fr_systemFontNameForWeight:(double)arg1 condensed:(_Bool)arg2;	// IMP=0x0010000000021797
+ (id)fr_systemFontNameForWeight:(double)arg1;	// IMP=0x0010000000021783
+ (id)_fr_fontNameWithPrefix:(id)arg1 midfix:(id)arg2 suffix:(id)arg3;	// IMP=0x0010000000021754
+ (id)fr_fontWithName:(id)arg1 size:(double)arg2;	// IMP=0x001000000002142a
+ (id)_fr_fontWeightLookup;	// IMP=0x0010000000021061
@end

