//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class CRLiOSInspectorCheckmark, CRLiOSInspectorLabel, CRLiOSInspectorTableCellImageButton, CRLiOSInspectorTableCellImageView, CRLiOSInspectorTableViewCellBackgroundView, CRLiOSInspectorTableViewCellSelectedBackgroundView, NSArray, NSLayoutXAxisAnchor, UIButton, UIColor, UIImage, UIImageView, UILabel, UILayoutGuide, UIView;

@interface CRLiOSInspectorTableViewCell : UITableViewCell
{
    long long _cellStyle;	// 8 = 0x8
    CRLiOSInspectorLabel *_customTextLabel;	// 16 = 0x10
    UILabel *_customDetailTextLabel;	// 24 = 0x18
    CRLiOSInspectorTableCellImageView *_customImageView;	// 32 = 0x20
    CRLiOSInspectorTableCellImageButton *_customImageButton;	// 40 = 0x28
    long long _customAccessoryType;	// 48 = 0x30
    UIView *_customAccessoryView;	// 56 = 0x38
    UIView *_fullSizeControl;	// 64 = 0x40
    _Bool _fullSizeControlReplacesTextLabel;	// 72 = 0x48
    _Bool _checkable;	// 73 = 0x49
    _Bool _checked;	// 74 = 0x4a
    _Bool _showsCheckmarkOnLeadingEdge;	// 75 = 0x4b
    _Bool _showsImageOnTrailingEdge;	// 76 = 0x4c
    _Bool _showsImageButtonTrailingAdjacentToLabel;	// 77 = 0x4d
    _Bool _imageUsesStandardMargins;	// 78 = 0x4e
    _Bool _usesTitleLabelColor;	// 79 = 0x4f
    _Bool _imageUsesTitleLabelColor;	// 80 = 0x50
    _Bool _expandTextLabelToFillCell;	// 81 = 0x51
    _Bool _preventTextLabelFromCompression;	// 82 = 0x52
    _Bool _usesDisclosureDetailLabelColor;	// 83 = 0x53
    _Bool _usesSubtitleLabelColor;	// 84 = 0x54
    _Bool _usesDetailButtonColor;	// 85 = 0x55
    _Bool _disablesContentWhenNotUserInteractive;	// 86 = 0x56
    _Bool _expandAccessoryViewToFillCellHorizontally;	// 87 = 0x57
    _Bool _automaticallyResizesForContentSizeCategory;	// 88 = 0x58
    _Bool _constraintConstantsNeedUpdate;	// 89 = 0x59
    _Bool _needsPaddingOnLeadingContentAnchor;	// 90 = 0x5a
    _Bool _needsPaddingOnTrailingContentAnchor;	// 91 = 0x5b
    _Bool _titleAreaHasContent;	// 92 = 0x5c
    _Bool _firstRowHasContent;	// 93 = 0x5d
    _Bool;	// 94 = 0x5e
    _Bool _thirdRowHasContent;	// 95 = 0x5f
    _Bool _usesContentViewInsteadOfSafeAreaLayoutGuide;	// 96 = 0x60
    UIImage *_customCheckmarkImage;	// 104 = 0x68
    UIImage *_customHighlightedCheckmarkImage;	// 112 = 0x70
    CRLiOSInspectorTableViewCellBackgroundView *_customBackgroundView;	// 120 = 0x78
    CRLiOSInspectorTableViewCellSelectedBackgroundView *_customSelectedBackgroundView;	// 128 = 0x80
    UIColor *_titleLabelColor;	// 136 = 0x88
    UIColor *_detailLabelColor;	// 144 = 0x90
    UIColor *_disclosureDetailLabelColor;	// 152 = 0x98
    UIColor *_subtitleLabelColor;	// 160 = 0xa0
    UIColor *_detailButtonColor;	// 168 = 0xa8
    double _legacyFixedRowHeight;	// 176 = 0xb0
    UILayoutGuide *_firstRowCenterFreeSpaceLayoutGuide;	// 184 = 0xb8
    UILayoutGuide *_insetFirstRowCenterFreeSpaceLayoutGuide;	// 192 = 0xc0
    UIView *_customStandardAccessoryView;	// 200 = 0xc8
    CRLiOSInspectorCheckmark *_checkmarkView;	// 208 = 0xd0
    UIImageView *_disclosureView;	// 216 = 0xd8
    UILayoutGuide *_titleAreaLayoutGuide;	// 224 = 0xe0
    UILayoutGuide *_firstRowLayoutGuide;	// 232 = 0xe8
    UILayoutGuide *_secondRowLayoutGuide;	// 240 = 0xf0
    UILayoutGuide *_thirdRowLayoutGuide;	// 248 = 0xf8
    UILayoutGuide *_accessoryViewLayoutGuide;	// 256 = 0x100
    UILayoutGuide *_titleAndDetailLayoutGuide;	// 264 = 0x108
    unsigned long long _activeConstrainedElements;	// 272 = 0x110
    NSArray *_activeConstraints;	// 280 = 0x118
    double _activeAccessibilitySizeMultiplier;	// 288 = 0x120
    NSLayoutXAxisAnchor *_leadingContentTrailingEdgeAnchor;	// 296 = 0x128
    NSLayoutXAxisAnchor *_trailingContentLeadingEdgeAnchor;	// 304 = 0x130
    struct UIEdgeInsets _fullSizeControlInsets;	// 312 = 0x138
    struct UIEdgeInsets _imageInsets;	// 344 = 0x158
}

+ (id)checkableCellWithTitle:(id)arg1 detailText:(id)arg2 checkmarkOnLeadingEdge:(_Bool)arg3 checked:(_Bool)arg4 reuseIdentifier:(id)arg5;	// IMP=0x00200000004831ca
+ (id)checkableSubtitleCellWithTitle:(id)arg1 subtitle:(id)arg2 checkmarkOnLeadingEdge:(_Bool)arg3 checked:(_Bool)arg4 reuseIdentifier:(id)arg5;	// IMP=0x0010000000483081
+ (id)checkableCellWithImage:(id)arg1 checkmarkOnLeadingEdge:(_Bool)arg2 checked:(_Bool)arg3 reuseIdentifier:(id)arg4;	// IMP=0x0010000000482f81
+ (id)checkableCellWithTitle:(id)arg1 checkmarkOnLeadingEdge:(_Bool)arg2 checked:(_Bool)arg3 reuseIdentifier:(id)arg4;	// IMP=0x0010000000482e92
+ (double)minimumHeight;	// IMP=0x001000000047a1b1
+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x001000000047991b
- (void).cxx_destruct;	// IMP=0x0020000000483964
@property(nonatomic) _Bool usesContentViewInsteadOfSafeAreaLayoutGuide; // @synthesize usesContentViewInsteadOfSafeAreaLayoutGuide=_usesContentViewInsteadOfSafeAreaLayoutGuide;
@property(nonatomic) _Bool thirdRowHasContent; // @synthesize thirdRowHasContent=_thirdRowHasContent;
@property(nonatomic) _Bool secondRowHasContent; // @synthesize secondRowHasContent=_secondRowHasContent;
@property(nonatomic) _Bool firstRowHasContent; // @synthesize firstRowHasContent=_firstRowHasContent;
@property(nonatomic) _Bool titleAreaHasContent; // @synthesize titleAreaHasContent=_titleAreaHasContent;
@property(nonatomic) _Bool needsPaddingOnTrailingContentAnchor; // @synthesize needsPaddingOnTrailingContentAnchor=_needsPaddingOnTrailingContentAnchor;
@property(nonatomic) _Bool needsPaddingOnLeadingContentAnchor; // @synthesize needsPaddingOnLeadingContentAnchor=_needsPaddingOnLeadingContentAnchor;
@property(nonatomic) __weak NSLayoutXAxisAnchor *trailingContentLeadingEdgeAnchor; // @synthesize trailingContentLeadingEdgeAnchor=_trailingContentLeadingEdgeAnchor;
@property(nonatomic) __weak NSLayoutXAxisAnchor *leadingContentTrailingEdgeAnchor; // @synthesize leadingContentTrailingEdgeAnchor=_leadingContentTrailingEdgeAnchor;
@property(nonatomic) _Bool constraintConstantsNeedUpdate; // @synthesize constraintConstantsNeedUpdate=_constraintConstantsNeedUpdate;
@property(nonatomic) double activeAccessibilitySizeMultiplier; // @synthesize activeAccessibilitySizeMultiplier=_activeAccessibilitySizeMultiplier;
@property(retain, nonatomic) NSArray *activeConstraints; // @synthesize activeConstraints=_activeConstraints;
@property(nonatomic) unsigned long long activeConstrainedElements; // @synthesize activeConstrainedElements=_activeConstrainedElements;
@property(retain, nonatomic) UILayoutGuide *titleAndDetailLayoutGuide; // @synthesize titleAndDetailLayoutGuide=_titleAndDetailLayoutGuide;
@property(retain, nonatomic) UILayoutGuide *accessoryViewLayoutGuide; // @synthesize accessoryViewLayoutGuide=_accessoryViewLayoutGuide;
@property(retain, nonatomic) UILayoutGuide *thirdRowLayoutGuide; // @synthesize thirdRowLayoutGuide=_thirdRowLayoutGuide;
@property(retain, nonatomic) UILayoutGuide *secondRowLayoutGuide; // @synthesize secondRowLayoutGuide=_secondRowLayoutGuide;
@property(retain, nonatomic) UILayoutGuide *firstRowLayoutGuide; // @synthesize firstRowLayoutGuide=_firstRowLayoutGuide;
@property(retain, nonatomic) UILayoutGuide *titleAreaLayoutGuide; // @synthesize titleAreaLayoutGuide=_titleAreaLayoutGuide;
@property(retain, nonatomic) UIImageView *disclosureView; // @synthesize disclosureView=_disclosureView;
@property(retain, nonatomic) CRLiOSInspectorCheckmark *checkmarkView; // @synthesize checkmarkView=_checkmarkView;
@property(retain, nonatomic) UIView *customStandardAccessoryView; // @synthesize customStandardAccessoryView=_customStandardAccessoryView;
@property(retain, nonatomic) UIView *customAccessoryView; // @synthesize customAccessoryView=_customAccessoryView;
@property(retain, nonatomic) CRLiOSInspectorTableCellImageButton *customImageButton; // @synthesize customImageButton=_customImageButton;
@property(retain, nonatomic) CRLiOSInspectorTableCellImageView *customImageView; // @synthesize customImageView=_customImageView;
@property(retain, nonatomic) UILabel *customDetailTextLabel; // @synthesize customDetailTextLabel=_customDetailTextLabel;
@property(retain, nonatomic) CRLiOSInspectorLabel *customTextLabel; // @synthesize customTextLabel=_customTextLabel;
@property(retain, nonatomic) UILayoutGuide *insetFirstRowCenterFreeSpaceLayoutGuide; // @synthesize insetFirstRowCenterFreeSpaceLayoutGuide=_insetFirstRowCenterFreeSpaceLayoutGuide;
@property(retain, nonatomic) UILayoutGuide *firstRowCenterFreeSpaceLayoutGuide; // @synthesize firstRowCenterFreeSpaceLayoutGuide=_firstRowCenterFreeSpaceLayoutGuide;
@property(nonatomic) double legacyFixedRowHeight; // @synthesize legacyFixedRowHeight=_legacyFixedRowHeight;
@property(nonatomic) _Bool automaticallyResizesForContentSizeCategory; // @synthesize automaticallyResizesForContentSizeCategory=_automaticallyResizesForContentSizeCategory;
@property(nonatomic) _Bool expandAccessoryViewToFillCellHorizontally; // @synthesize expandAccessoryViewToFillCellHorizontally=_expandAccessoryViewToFillCellHorizontally;
@property(nonatomic) _Bool disablesContentWhenNotUserInteractive; // @synthesize disablesContentWhenNotUserInteractive=_disablesContentWhenNotUserInteractive;
@property(nonatomic) _Bool usesDetailButtonColor; // @synthesize usesDetailButtonColor=_usesDetailButtonColor;
@property(nonatomic) _Bool usesSubtitleLabelColor; // @synthesize usesSubtitleLabelColor=_usesSubtitleLabelColor;
@property(nonatomic) _Bool usesDisclosureDetailLabelColor; // @synthesize usesDisclosureDetailLabelColor=_usesDisclosureDetailLabelColor;
@property(nonatomic) _Bool preventTextLabelFromCompression; // @synthesize preventTextLabelFromCompression=_preventTextLabelFromCompression;
@property(nonatomic) _Bool expandTextLabelToFillCell; // @synthesize expandTextLabelToFillCell=_expandTextLabelToFillCell;
@property(nonatomic) _Bool imageUsesTitleLabelColor; // @synthesize imageUsesTitleLabelColor=_imageUsesTitleLabelColor;
@property(nonatomic) _Bool usesTitleLabelColor; // @synthesize usesTitleLabelColor=_usesTitleLabelColor;
@property(nonatomic) __weak UIColor *detailButtonColor; // @synthesize detailButtonColor=_detailButtonColor;
@property(nonatomic) __weak UIColor *subtitleLabelColor; // @synthesize subtitleLabelColor=_subtitleLabelColor;
@property(nonatomic) __weak UIColor *disclosureDetailLabelColor; // @synthesize disclosureDetailLabelColor=_disclosureDetailLabelColor;
@property(nonatomic) __weak UIColor *detailLabelColor; // @synthesize detailLabelColor=_detailLabelColor;
@property(nonatomic) __weak UIColor *titleLabelColor; // @synthesize titleLabelColor=_titleLabelColor;
@property(readonly, nonatomic) CRLiOSInspectorTableViewCellSelectedBackgroundView *customSelectedBackgroundView; // @synthesize customSelectedBackgroundView=_customSelectedBackgroundView;
@property(readonly, nonatomic) CRLiOSInspectorTableViewCellBackgroundView *customBackgroundView; // @synthesize customBackgroundView=_customBackgroundView;
@property(nonatomic) _Bool imageUsesStandardMargins; // @synthesize imageUsesStandardMargins=_imageUsesStandardMargins;
@property(nonatomic) struct UIEdgeInsets imageInsets; // @synthesize imageInsets=_imageInsets;
@property(nonatomic) _Bool showsImageButtonTrailingAdjacentToLabel; // @synthesize showsImageButtonTrailingAdjacentToLabel=_showsImageButtonTrailingAdjacentToLabel;
@property(nonatomic) _Bool showsImageOnTrailingEdge; // @synthesize showsImageOnTrailingEdge=_showsImageOnTrailingEdge;
@property(nonatomic) _Bool showsCheckmarkOnLeadingEdge; // @synthesize showsCheckmarkOnLeadingEdge=_showsCheckmarkOnLeadingEdge;
@property(retain, nonatomic) UIImage *customHighlightedCheckmarkImage; // @synthesize customHighlightedCheckmarkImage=_customHighlightedCheckmarkImage;
@property(retain, nonatomic) UIImage *customCheckmarkImage; // @synthesize customCheckmarkImage=_customCheckmarkImage;
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
@property(nonatomic) _Bool checkable; // @synthesize checkable=_checkable;
@property(nonatomic) _Bool fullSizeControlReplacesTextLabel; // @synthesize fullSizeControlReplacesTextLabel=_fullSizeControlReplacesTextLabel;
@property(nonatomic) struct UIEdgeInsets fullSizeControlInsets; // @synthesize fullSizeControlInsets=_fullSizeControlInsets;
@property(retain, nonatomic) UIView *fullSizeControl; // @synthesize fullSizeControl=_fullSizeControl;
- (id)accessibilityValue;	// IMP=0x0010000000482d7f
- (id)accessibilityLabel;	// IMP=0x0010000000482c6c
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000482c19
- (void)setAccessoryType:(long long)arg1;	// IMP=0x0010000000482c07
- (long long)accessoryType;	// IMP=0x0010000000482bf5
- (void)setAccessoryView:(id)arg1;	// IMP=0x0010000000482be3
- (id)accessoryView;	// IMP=0x0010000000482bd1
- (id)imageView;	// IMP=0x0010000000482bbf
- (id)detailTextLabel;	// IMP=0x0010000000482bad
- (id)textLabel;	// IMP=0x0010000000482b9b
- (id)p_mainLayoutAnchorOwner;	// IMP=0x0010000000482b39
- (id)p_safeAreaLayoutGuide;	// IMP=0x0010000000482b27
- (void)p_setNeedsUpdateConstraints;	// IMP=0x0010000000482af8
- (void)setNeedsUpdateConstraints;	// IMP=0x0010000000482adb
- (void)setUserInteractionEnabled:(_Bool)arg1;	// IMP=0x00100000004829a4
- (void)updateConstraints;	// IMP=0x0010000000482930
- (void)layoutSubviews;	// IMP=0x00100000004826b3
- (void)p_detailButtonTapped:(id)arg1;	// IMP=0x0010000000482207
- (void)p_contentSizeCategoryDidChangeNotification:(id)arg1;	// IMP=0x0010000000482163
- (void)p_willChangeStatusBarOrientation:(id)arg1;	// IMP=0x0010000000482151
- (void)p_updateImageTintColor;	// IMP=0x00100000004820e2
- (void)p_imageDidChange;	// IMP=0x00100000004820b4
- (_Bool)p_needsConstraintsUpdateForElements:(unsigned long long)arg1;	// IMP=0x0010000000482063
@property(readonly, nonatomic) double minimumRowHeight;
- (double)p_minimumVerticalTitlePadding;	// IMP=0x0010000000481f60
- (double)p_currentAccessibilitySizeRatio;	// IMP=0x0010000000481e9f
- (id)p_currentDetailLabelFont;	// IMP=0x0010000000481e65
- (id)p_currentLabelFont;	// IMP=0x0010000000481e42
- (id)p_standardLabelFont;	// IMP=0x0010000000481dd0
- (void)p_generateConstraintsForLegacyFixedRowHeightIntoArray:(id)arg1;	// IMP=0x0010000000481c8d
- (void)p_generateConstraintsForThirdRowLayoutGuide:(unsigned long long)arg1 intoArray:(id)arg2;	// IMP=0x00100000004816e4
- (void)p_generateConstraintsForSecondRowLayoutGuide:(unsigned long long)arg1 intoArray:(id)arg2;	// IMP=0x0010000000481308
- (void)p_generateConstraintsForFirstRowLayoutGuideIntoArray:(id)arg1;	// IMP=0x0010000000480b60
- (void)p_generateConstraintsForFullSizeControl:(unsigned long long)arg1 intoArray:(id)arg2;	// IMP=0x00100000004806fc
- (void)p_generateConstraintsForTitleAreaTrailingAnchor:(unsigned long long)arg1 intoArray:(id)arg2;	// IMP=0x0010000000480597
- (void)p_generateConstraintsForAccessoryAreaOnSecondLine:(unsigned long long)arg1 intoArray:(id)arg2;	// IMP=0x001000000047f270
- (void)p_generateConstraintsForAccessoryAreaOnFirstLine:(unsigned long long)arg1 intoArray:(id)arg2;	// IMP=0x001000000047daef
- (void)p_generateConstraintsForTrailingSideElements:(unsigned long long)arg1 intoArray:(id)arg2;	// IMP=0x001000000047d68d
- (void)p_generateConstraintsForTitleArea:(unsigned long long)arg1 margin:(double)arg2 intoArray:(id)arg3;	// IMP=0x001000000047ca55
- (double);	// IMP=0x001000000047c16e
- (id)p_centerYConstraintForView:(id)arg1 atAnchor:(id)arg2;	// IMP=0x001000000047bfcb
- (void)p_generateGeneralConstraintsForImages:(unsigned long long)arg1 intoArray:(id)arg2;	// IMP=0x001000000047bef2
- (void)p_generateConstraintsForImage:(id)arg1 container:(id)arg2 intoArray:(id)arg3;	// IMP=0x001000000047bc21
- (void)p_updateConstraintsForElements:(unsigned long long)arg1;	// IMP=0x001000000047ba64
- (void)p_prepareToChangeConstraintsForElements:(unsigned long long)arg1;	// IMP=0x001000000047af94
- (unsigned long long)p_elementsToConstrain;	// IMP=0x001000000047ad35
- (id)activeLayoutConstraints;	// IMP=0x001000000047ad20
@property(readonly, nonatomic) UIButton *imageButton;
@property(nonatomic) long long customAccessoryType;
- (_Bool)hasTextLabel;	// IMP=0x0010000000479a84
@property(readonly, nonatomic) _Bool currentContentSizeCategoryWrapsToNextLine;
- (void)dealloc;	// IMP=0x00100000004798a6
- (void)p_commonInitWithStyle:(long long)arg1;	// IMP=0x001000000047924f
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000479003
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000478dc4

@end

