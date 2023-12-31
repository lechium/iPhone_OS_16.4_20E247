//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class NSLayoutConstraint, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SFSectionDisclosureButton : UIButton
{
    UILabel *_labelWhenCollapsed;	// 8 = 0x8
    NSLayoutConstraint *_labelWhenCollapsedLeadingConstraint;	// 16 = 0x10
    UILabel *_labelWhenExpanded;	// 24 = 0x18
    NSLayoutConstraint *_labelWhenExpandedLeadingConstraint;	// 32 = 0x20
    UIImageView *_imageView;	// 40 = 0x28
    _Bool _expandsModally;	// 48 = 0x30
    _Bool _expanded;	// 49 = 0x31
    _Bool _labelHidden;	// 50 = 0x32
}

- (void).cxx_destruct;	// IMP=0x000000000005a5af
@property(nonatomic, getter=isLabelHidden) _Bool labelHidden; // @synthesize labelHidden=_labelHidden;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(readonly, nonatomic) UIImageView *chevron;
@property(readonly, nonatomic) struct CGSize sizeIncludingLabels;
- (void)buttonShapesEnabledDidChange;	// IMP=0x000000000005a016
- (void)dealloc;	// IMP=0x0000000000059f94
- (id)initWithFrame:(struct CGRect)arg1 expanded:(_Bool)arg2 modally:(_Bool)arg3;	// IMP=0x000000000005937b
- (void)toggleExpanded;	// IMP=0x00000000000592db
- (void)updateExpanded;	// IMP=0x00000000000591b2

@end

