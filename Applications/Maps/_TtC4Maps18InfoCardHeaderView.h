//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray, NSString;
@protocol _TtP4Maps26InfoCardHeaderViewDelegate_;

@interface _TtC4Maps18InfoCardHeaderView
{
    MISSING_TYPE *title;	// 8 = 0x8
    MISSING_TYPE *buttonConfigurations;	// 24 = 0x18
    MISSING_TYPE *delegate;	// 32 = 0x20
    MISSING_TYPE *hairLineAlpha;	// 40 = 0x28
    MISSING_TYPE *hideActionButtons;	// 48 = 0x30
    MISSING_TYPE *hideTitleLabel;	// 49 = 0x31
    MISSING_TYPE *blurButtons;	// 50 = 0x32
    MISSING_TYPE *titleLabel;	// 56 = 0x38
    MISSING_TYPE *actionButtons;	// 64 = 0x40
    MISSING_TYPE *actionButtonsLayoutGuide;	// 72 = 0x48
    MISSING_TYPE *bottomHairlineView;	// 80 = 0x50
    MISSING_TYPE *actionButtonConstraints;	// 88 = 0x58
    MISSING_TYPE *tapGestureRecognizer;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0040000000071b60
- (void)handleTapWithGestureRecognizer:(id)arg1;	// IMP=0x0010000000071a90
- (void)cardButtonTappedWithSender:(id)arg1;	// IMP=0x0010000000071a40
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000070d60
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000070bc0
- (void)infoCardThemeChanged;	// IMP=0x00100000000709a0
- (void)invalidateButtonMenus;	// IMP=0x0010000000070970
@property(nonatomic) _Bool blurButtons; // @synthesize blurButtons;
@property(nonatomic, readonly) double titleToEndTrailingConstant;
@property(nonatomic, readonly) double titleLabelPointSize;
@property(nonatomic) _Bool hideTitleLabel; // @synthesize hideTitleLabel;
@property(nonatomic) _Bool hideActionButtons; // @synthesize hideActionButtons;
@property(nonatomic) double hairLineAlpha; // @synthesize hairLineAlpha;
@property(nonatomic) __weak id <_TtP4Maps26InfoCardHeaderViewDelegate_> delegate; // @synthesize delegate;
@property(nonatomic, copy) NSArray *buttonConfigurations;
@property(nonatomic, copy) NSString *title;

@end

