//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIControl.h"

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIColor, UIImageView, UILongPressGestureRecognizer;
@protocol UITableConstants, _UICollectionViewListCellReorderControlDelegate;

__attribute__((visibility("hidden")))
@interface _UICollectionViewListCellReorderControl : UIControl <UIGestureRecognizerDelegate>
{
    UIImageView *_imageView;	// 8 = 0x8
    UILongPressGestureRecognizer *_reorderRecognizer;	// 16 = 0x10
    _Bool _tracking;	// 24 = 0x18
    _Bool _needsImageViewUpdate;	// 25 = 0x19
    id <_UICollectionViewListCellReorderControlDelegate> _delegate;	// 32 = 0x20
    id <UITableConstants> _constants;	// 40 = 0x28
    UIColor *_accessoryTintColor;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000030ee25
@property(retain, nonatomic) UIColor *accessoryTintColor; // @synthesize accessoryTintColor=_accessoryTintColor;
@property(retain, nonatomic) id <UITableConstants> constants; // @synthesize constants=_constants;
@property(nonatomic) __weak id <_UICollectionViewListCellReorderControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void)endReordering:(_Bool)arg1;	// IMP=0x000000000030ed85
- (void)gestureMovedToPoint:(struct CGPoint)arg1;	// IMP=0x000000000030ecb0
- (void)beginReordering;	// IMP=0x000000000030ec64
- (void)pan:(id)arg1;	// IMP=0x000000000030e8a6
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000030e853
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000030e812
- (void)layoutSubviews;	// IMP=0x000000000030e6fe
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000030e67f
- (struct CGSize)_minimumSizeForHitTesting;	// IMP=0x000000000030e64b
- (void)_updateImageViewIfNeeded;	// IMP=0x000000000030e59e
- (void)_setNeedsImageViewUpdate;	// IMP=0x000000000030e581
- (id)initWithDelegate:(id)arg1 constants:(id)arg2;	// IMP=0x000000000030e348

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

