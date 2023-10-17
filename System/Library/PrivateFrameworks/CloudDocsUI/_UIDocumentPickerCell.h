//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewTableCell.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, UIImageView, UILabel, UILongPressGestureRecognizer, UIProgressView, UIView, _UIDocumentPickerContainerItem, _UIDocumentPickerDocumentCollectionViewController;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerCell : UICollectionViewTableCell
{
    _Bool _transitioningLayout;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_subtitleLabel;	// 24 = 0x18
    UILabel *_subtitle2Label;	// 32 = 0x20
    UILabel *_subtitleJoiner;	// 40 = 0x28
    UIImageView *_tagView;	// 48 = 0x30
    UIImageView *_thumbnailView;	// 56 = 0x38
    UIProgressView *_progressView;	// 64 = 0x40
    long long _cellStyle;	// 72 = 0x48
    NSArray *_actions;	// 80 = 0x50
    _UIDocumentPickerDocumentCollectionViewController *_collectionView;	// 88 = 0x58
    _UIDocumentPickerContainerItem *_item;	// 96 = 0x60
    NSLayoutConstraint *_thumbnailCenterWidthConstraint;	// 104 = 0x68
    NSLayoutConstraint *_thumbnailCenterHeightConstraint;	// 112 = 0x70
    NSArray *_gridConstraints;	// 120 = 0x78
    NSArray *_tableConstraints;	// 128 = 0x80
    NSArray *_indentedConstraints;	// 136 = 0x88
    NSArray *_activeConstraints;	// 144 = 0x90
    UIView *_indentationHelperView;	// 152 = 0x98
    NSLayoutConstraint *_indentationConstraint;	// 160 = 0xa0
    UIImageView *_selectionView;	// 168 = 0xa8
    UIView *_selectionViewsThumbnailView;	// 176 = 0xb0
    NSMutableArray *_selectionViewConstraints;	// 184 = 0xb8
    UILongPressGestureRecognizer *_pickableDiagnosticGestureRecognizer;	// 192 = 0xc0
    UILongPressGestureRecognizer *_actionGestureRecognizer;	// 200 = 0xc8
    NSArray *_availableActions;	// 208 = 0xd0
    UIView *_cachedSelectedBackgroundView;	// 216 = 0xd8
}

+ (struct CGSize)thumbnailSizeForTraits:(id)arg1 cellStyle:(long long)arg2;	// IMP=0x006000000000254f
+ (id)_subtitleFontForTable:(_Bool)arg1;	// IMP=0x00600000000024c3
+ (id)_titleFontForTable:(_Bool)arg1;	// IMP=0x0060000000002437
+ (struct CGSize)defaultSizeForCellStyle:(long long)arg1 traitCollection:(id)arg2;	// IMP=0x0060000000002227
- (void).cxx_destruct;	// IMP=0x0000000000008c0a
@property(retain, nonatomic) UIView *cachedSelectedBackgroundView; // @synthesize cachedSelectedBackgroundView=_cachedSelectedBackgroundView;
@property(retain, nonatomic) NSArray *availableActions; // @synthesize availableActions=_availableActions;
@property(retain, nonatomic) UILongPressGestureRecognizer *actionGestureRecognizer; // @synthesize actionGestureRecognizer=_actionGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *pickableDiagnosticGestureRecognizer; // @synthesize pickableDiagnosticGestureRecognizer=_pickableDiagnosticGestureRecognizer;
@property(retain, nonatomic) NSMutableArray *selectionViewConstraints; // @synthesize selectionViewConstraints=_selectionViewConstraints;
@property(retain, nonatomic) UIView *selectionViewsThumbnailView; // @synthesize selectionViewsThumbnailView=_selectionViewsThumbnailView;
@property(retain, nonatomic) UIImageView *selectionView; // @synthesize selectionView=_selectionView;
@property(retain, nonatomic) NSLayoutConstraint *indentationConstraint; // @synthesize indentationConstraint=_indentationConstraint;
@property(retain, nonatomic) UIView *indentationHelperView; // @synthesize indentationHelperView=_indentationHelperView;
@property(nonatomic, getter=isTransitioningLayout) _Bool transitioningLayout; // @synthesize transitioningLayout=_transitioningLayout;
@property(retain, nonatomic) NSArray *activeConstraints; // @synthesize activeConstraints=_activeConstraints;
@property(retain, nonatomic) NSArray *indentedConstraints; // @synthesize indentedConstraints=_indentedConstraints;
@property(retain, nonatomic) NSArray *tableConstraints; // @synthesize tableConstraints=_tableConstraints;
@property(retain, nonatomic) NSArray *gridConstraints; // @synthesize gridConstraints=_gridConstraints;
@property(retain, nonatomic) NSLayoutConstraint *thumbnailCenterHeightConstraint; // @synthesize thumbnailCenterHeightConstraint=_thumbnailCenterHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *thumbnailCenterWidthConstraint; // @synthesize thumbnailCenterWidthConstraint=_thumbnailCenterWidthConstraint;
@property(retain, nonatomic) _UIDocumentPickerContainerItem *item; // @synthesize item=_item;
@property(nonatomic) __weak _UIDocumentPickerDocumentCollectionViewController *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) UIImageView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UILabel *subtitleJoiner; // @synthesize subtitleJoiner=_subtitleJoiner;
@property(retain, nonatomic) UILabel *subtitle2Label; // @synthesize subtitle2Label=_subtitle2Label;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)_showPickableDiagnostic;	// IMP=0x0000000000008856
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000000000884e
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0000000000008762
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0000000000008752
- (void)_showActions:(id)arg1;	// IMP=0x00000000000085dc
- (void)updateActionGestureRecognizer;	// IMP=0x0000000000008413
- (void)_moveAction:(id)arg1;	// IMP=0x000000000000834a
- (void)_activityAction:(id)arg1;	// IMP=0x0000000000008281
- (void)_renameAction:(id)arg1;	// IMP=0x00000000000081b8
- (void)_moreAction:(id)arg1;	// IMP=0x00000000000080ef
- (void)_infoAction:(id)arg1;	// IMP=0x0000000000008026
- (void)_deleteAction:(id)arg1;	// IMP=0x0000000000007f60
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000000079f2
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000000007992
- (void)_udpateLabelAlpha;	// IMP=0x0000000000007707
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x0000000000007499
- (void)updateForEditingState:(_Bool)arg1;	// IMP=0x00000000000073a7
- (void)_updateConstraintsForCellStyle;	// IMP=0x0000000000004654
- (void)setEditing:(_Bool)arg1;	// IMP=0x00000000000045f1
- (void)_updateSeparatorInset;	// IMP=0x0000000000004575
- (void)_updateAccessoryType;	// IMP=0x00000000000043e5
- (void)_updateFonts;	// IMP=0x0000000000004257
- (void)_updateSelectionState:(_Bool)arg1;	// IMP=0x0000000000003643
- (void)_updateIconSize;	// IMP=0x000000000000355f
- (void)reloadItem:(_Bool)arg1;	// IMP=0x0000000000003559
- (void)dealloc;	// IMP=0x0000000000003510
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;	// IMP=0x00000000000034cd
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;	// IMP=0x0000000000003441
- (void)prepareForReuse;	// IMP=0x00000000000032a8
- (void)_dynamicTypeSizeChanged:(id)arg1;	// IMP=0x0000000000003174
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000003133
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000002602

@end
