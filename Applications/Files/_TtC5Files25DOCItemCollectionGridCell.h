//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC5Files25DOCItemCollectionGridCell
{
    MISSING_TYPE *stackView;	// 160 = 0xa0
    MISSING_TYPE *gridTitleLabel;	// 168 = 0xa8
    MISSING_TYPE *subtitleLabel;	// 176 = 0xb0
    MISSING_TYPE *secondSubtitleLabel;	// 184 = 0xb8
    MISSING_TYPE *thumbnailContainerView;	// 192 = 0xc0
    MISSING_TYPE *$__lazy_storage_$_selectionView;	// 200 = 0xc8
    MISSING_TYPE *textFocusBackgroundView;	// 208 = 0xd0
    MISSING_TYPE *imageFocusBackgroundView;	// 216 = 0xd8
    MISSING_TYPE *circularProgressView;	// 224 = 0xe0
    MISSING_TYPE *horizontalProgressView;	// 232 = 0xe8
    MISSING_TYPE *infoWidth;	// 240 = 0xf0
    MISSING_TYPE *gridCircularProgressVerticalConstraintFolder;	// 248 = 0xf8
    MISSING_TYPE *gridCircularProgressVerticalConstraintFile;	// 256 = 0x100
    MISSING_TYPE *gridHorizontalProgressBottomConstraint;	// 264 = 0x108
    MISSING_TYPE *gridHorizontalProgressLeadingConstraint;	// 272 = 0x110
    MISSING_TYPE *gridHorizontalProgressTrailingConstraint;	// 280 = 0x118
    MISSING_TYPE *gridHorizontalProgressHeightConstraint;	// 288 = 0x120
    MISSING_TYPE *gridHorizontalStopButtonCenterXConstraint;	// 296 = 0x128
    MISSING_TYPE *gridHorizontalStopButtonCenterYConstraint;	// 304 = 0x130
    MISSING_TYPE *gridCircularProgressVerticalConstraintFolderConstant;	// 312 = 0x138
    MISSING_TYPE *isGridCircularProgressVerticalConstraintFolderActivated;	// 320 = 0x140
    MISSING_TYPE *isGridCircularProgressVerticalConstraintFileActivated;	// 321 = 0x141
    MISSING_TYPE *renameTextViewAdditionalPadding;	// 328 = 0x148
    MISSING_TYPE *renameTextViewConstraints;	// 336 = 0x150
}

- (void).cxx_destruct;	// IMP=0x004000000009d180
- (id)accessibilitySecondSubtitleLabel;	// IMP=0x001000000009d010
- (id)accessibilitySubtitleLabel;	// IMP=0x001000000009cff0
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0010000000096340
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;	// IMP=0x0010000000096160
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000096110
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000096040
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000094f60
- (void)tintColorDidChange;	// IMP=0x0010000000093860
- (void)layoutSubviews;	// IMP=0x0010000000093840
- (void)prepareForReuse;	// IMP=0x00100000000937d0
- (void)_bridgedUpdateConfigurationUsingState:(id)arg1;	// IMP=0x0010000000092750
@property(nonatomic) _Bool selected;
- (_Bool)isSelected;	// IMP=0x0010000000091e70

@end
