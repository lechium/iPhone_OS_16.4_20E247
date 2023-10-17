//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewLayout.h>

@class PUCollectionViewData, UICollectionViewLayoutAttributes;
@protocol PUHorizontalTiledCollectionViewLayoutDelegate;

__attribute__((visibility("hidden")))
@interface PUHorizontalTiledCollectionViewLayout : UICollectionViewLayout
{
    PUCollectionViewData *_data;	// 8 = 0x8
    UICollectionViewLayoutAttributes *_dummyAttrs;	// 16 = 0x10
    double _interitemSpacing;	// 24 = 0x18
    id <PUHorizontalTiledCollectionViewLayoutDelegate> _delegate;	// 32 = 0x20
    struct UIEdgeInsets _itemsContentInset;	// 40 = 0x28
}

+ (Class)invalidationContextClass;	// IMP=0x00600000001cf40e
- (void).cxx_destruct;	// IMP=0x00000000001cf2b6
@property(nonatomic) __weak id <PUHorizontalTiledCollectionViewLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets itemsContentInset; // @synthesize itemsContentInset=_itemsContentInset;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x00000000001cf1d8
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x00000000001cf1c6
- (struct CGSize)collectionViewContentSize;	// IMP=0x00000000001cf11f
- (void)prepareLayout;	// IMP=0x00000000001cf096
- (void)invalidateLayoutWithContext:(id)arg1;	// IMP=0x00000000001ceffa
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;	// IMP=0x00000000001cef34
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x00000000001cef22
- (id)layoutAttributesForItemsInRect:(struct CGRect)arg1;	// IMP=0x00000000001cedaa
- (_Bool)_shouldInvalidateCachedLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x00000000001ced2d
- (void)invalidateCachedLayout;	// IMP=0x00000000001ced10
@property(readonly, nonatomic) _Bool hasReferenceIndexPath;
- (id)_layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x00000000001ceb4e
- (void)_ensureIndexPath:(id)arg1 inData:(id)arg2;	// IMP=0x00000000001ce84d
- (void)_ensureRect:(struct CGRect)arg1 inData:(id)arg2 outDeltaOriginX:(double *)arg3;	// IMP=0x00000000001ce594
- (_Bool)_updateLayoutData:(id)arg1 inDirection:(long long)arg2 outDeltaOriginX:(double *)arg3;	// IMP=0x00000000001cd7e4
- (id)init;	// IMP=0x00000000001cd761

@end
