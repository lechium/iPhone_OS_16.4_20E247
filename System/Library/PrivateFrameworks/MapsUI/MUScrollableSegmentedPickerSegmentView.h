//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class MUEdgeLayout, MUScrollableSegmentedPickerCategory, UILabel;

__attribute__((visibility("hidden")))
@interface MUScrollableSegmentedPickerSegmentView : UIControl
{
    UILabel *_label;	// 8 = 0x8
    MUEdgeLayout *_edgeLayout;	// 16 = 0x10
    MUScrollableSegmentedPickerCategory *_viewModel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000717a8
@property(retain, nonatomic) MUScrollableSegmentedPickerCategory *viewModel; // @synthesize viewModel=_viewModel;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000716ac
- (void)_updateSelectionAppearance;	// IMP=0x00000000000715ed
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000000715ac
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000000007156b
- (void)_updateFont;	// IMP=0x00000000000714ee
- (void)_updateAppearance;	// IMP=0x0000000000071452
- (void)_setupLabel;	// IMP=0x00000000000712dc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000007126a

@end
