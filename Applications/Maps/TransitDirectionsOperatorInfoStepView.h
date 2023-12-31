//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKMultiPartLabel, NSLayoutConstraint, TransitDirectionsListItem;

@interface TransitDirectionsOperatorInfoStepView
{
    NSLayoutConstraint *_topToPrimaryLabelBaselineConstraint;	// 16 = 0x10
    NSLayoutConstraint *_leadingLabelConstraint;	// 24 = 0x18
    MKMultiPartLabel *_label;	// 32 = 0x20
    TransitDirectionsListItem *_previousTransitDirectionsListItem;	// 40 = 0x28
    long long _previousTransitDirectionsListItemsNavigationState;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000b48aa6
- (double)bottomSpacerHeight;	// IMP=0x0010000000b48a9d
- (void)_updateNavigationStateAlpha:(double)arg1;	// IMP=0x0010000000b48a4a
- (void)_contentSizeCategoryDidChange;	// IMP=0x0010000000b48966
- (void)setPreviousItem:(id)arg1 withPreviousNavigationState:(long long)arg2;	// IMP=0x0010000000b488cd
- (void)configureWithItem:(id)arg1;	// IMP=0x0010000000b48654
- (id)_initialConstraints;	// IMP=0x0010000000b48547
- (void)_createSubviews;	// IMP=0x0010000000b483af

@end

