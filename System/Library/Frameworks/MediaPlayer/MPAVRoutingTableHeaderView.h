//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UILabel;

__attribute__((visibility("hidden")))
@interface MPAVRoutingTableHeaderView : UIView
{
    struct UIEdgeInsets _edgeInsets;	// 8 = 0x8
    UILabel *_titleLabel;	// 40 = 0x28
    UILabel *_detailLabel;	// 48 = 0x30
    CAShapeLayer *_borderLayer;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000015ba42
- (id)_mirroringCompactDescriptionTextAttributes;	// IMP=0x000000000015b900
- (id)_mirroringCompactDescription;	// IMP=0x000000000015b688
- (id)_mirroringTitleTextAttributes;	// IMP=0x000000000015b546
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000015b310
- (void)layoutSubviews;	// IMP=0x000000000015b0cf
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000015b083
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000015b026
- (void)_init;	// IMP=0x000000000015ac9b

@end

