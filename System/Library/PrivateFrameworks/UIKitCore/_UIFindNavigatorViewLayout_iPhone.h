//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, UIStackView, UIView;

__attribute__((visibility("hidden")))
@interface _UIFindNavigatorViewLayout_iPhone
{
    UIStackView *_verticalStackView;	// 72 = 0x48
    UIStackView *_findStackView;	// 80 = 0x50
    UIStackView *_replaceStackView;	// 88 = 0x58
    UIStackView *_nextPrevStackView;	// 96 = 0x60
    UIView *_nextPrevSpacerView;	// 104 = 0x68
    NSLayoutConstraint *_doneSpaceConstraint;	// 112 = 0x70
    NSLayoutConstraint *_replaceButtonWidthConstraint;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000019fca
- (void)layoutSubviews;	// IMP=0x0000000000019ee7
- (void)prepareForLayout;	// IMP=0x0000000000019892
- (void)setReplaceFieldVisible:(_Bool)arg1;	// IMP=0x00000000000197a5
- (struct CGSize)preferredContentSize;	// IMP=0x00000000000196d4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001938a

@end
