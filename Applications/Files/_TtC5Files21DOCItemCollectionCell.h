//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewListCell.h>

@class MISSING_TYPE, _TtC5Files28DOCItemCollectionCellContent;

@interface _TtC5Files21DOCItemCollectionCell : UICollectionViewListCell
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *thumbnailView;	// 24 = 0x18
    MISSING_TYPE *itemStatusBadgeConstraintX;	// 32 = 0x20
    MISSING_TYPE *itemStatusBadgeConstraintY;	// 40 = 0x28
    MISSING_TYPE *itemAccessStatusBadgeConstraintX;	// 48 = 0x30
    MISSING_TYPE *itemAccessStatusBadgeConstraintY;	// 56 = 0x38
    MISSING_TYPE *$__lazy_storage_$_itemStatusBadge;	// 64 = 0x40
    MISSING_TYPE *$__lazy_storage_$_itemAccessStatusBadge;	// 72 = 0x48
    MISSING_TYPE *$__lazy_storage_$_renameGestureRecognizer;	// 80 = 0x50
    MISSING_TYPE *cellContent;	// 88 = 0x58
    MISSING_TYPE *isDummyCell;	// 96 = 0x60
    MISSING_TYPE *fileEntityInteraction;	// 104 = 0x68
    MISSING_TYPE *actions;	// 112 = 0x70
    MISSING_TYPE *canShowBackgroundView;	// 120 = 0x78
    MISSING_TYPE *horizontalStopButton;	// 128 = 0x80
    MISSING_TYPE *renameController;	// 136 = 0x88
    MISSING_TYPE *renameTextView;	// 144 = 0x90
    MISSING_TYPE *isRenaming;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00400000001e6f60
@property(nonatomic, readonly) _Bool accessibilityIsRenaming;
- (id)accessibilityThumbnailView;	// IMP=0x00100000001e6ee0
- (id)accessibilityCellManager;	// IMP=0x00100000001e6ec0
- (id)accessibilityTitleString;	// IMP=0x00100000001e6e80
- (id)accessibilityTitleLabel;	// IMP=0x00100000001e6e50
- (void)_bridgedUpdateConfigurationUsingState:(id)arg1;	// IMP=0x00100000001e6d30
- (void)didMoveToSuperview;	// IMP=0x00100000001e6b50
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00100000001e6aa0
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x00100000001e69a0
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00100000001e6940
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00100000001e66b0
- (void)renameGesture:(id)arg1;	// IMP=0x00100000001e6660
- (void)dragStateDidChange:(long long)arg1;	// IMP=0x00100000001e64c0
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001e6290
@property(nonatomic, readonly) _Bool _allowsHorizontalFocusMovement;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000001e6120
- (void)prepareForReuse;	// IMP=0x00100000001e6050
@property(nonatomic, retain) _TtC5Files28DOCItemCollectionCellContent *cellContent; // @synthesize cellContent;

@end
