//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSNumber, UIColor;

@interface UIView (FMRoundedRect)
- (struct CGPath *)newPathForRoundedRect:(struct CGRect)arg1 radius:(double)arg2;	// IMP=0x0030000000015b64
@property(retain, nonatomic) NSNumber *roundedRectBorderWidth;
@property(retain, nonatomic) UIColor *roundedRectBorderColor;
@property(retain, nonatomic) UIColor *roundedRectBackgroundColor;
- (id)addConstraintsToSetSize:(struct CGSize)arg1;	// IMP=0x0030000000019fd4
- (id)addConstraintsToFillSuperview;	// IMP=0x0030000000019e47
- (id)generateImage;	// IMP=0x0030000000019d82
@property(retain, nonatomic) UIColor *debugHighlight;
- (void)setRandomDebugHighlight;	// IMP=0x0030000000019862
- (void)centerVerticallyInSuperview;	// IMP=0x0030000000019738
- (void)centerHorizontallyInSuperview;	// IMP=0x00300000000195f9
- (void)performOnAllSubviews:(CDUnknownBlockType)arg1;	// IMP=0x0030000000019497
@property(readonly, copy) NSArray *allSubviews;
@end
