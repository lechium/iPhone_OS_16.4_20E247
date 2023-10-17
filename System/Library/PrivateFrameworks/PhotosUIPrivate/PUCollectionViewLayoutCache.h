//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableDictionary;
@protocol PUCollectionViewLayoutProvider;

__attribute__((visibility("hidden")))
@interface PUCollectionViewLayoutCache : UICollectionViewLayout
{
    NSMutableDictionary *_itemLayoutAttributesByIndexPath;	// 8 = 0x8
    NSMutableDictionary *_supplementaryViewLayoutAttributesByKind;	// 16 = 0x10
    NSMutableDictionary *_decorationViewLayoutAttributesByKind;	// 24 = 0x18
    id <PUCollectionViewLayoutProvider> _layoutProvider;	// 32 = 0x20
    struct {
        unsigned int hasSupplementaryLayoutAttributes:1;
        unsigned int hasDecorationLayoutAttributes:1;
    } _layoutProviderFlags;	// 40 = 0x28
    _Bool _cachesResults;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x000000000011c361
@property(nonatomic) _Bool cachesResults; // @synthesize cachesResults=_cachesResults;
@property(readonly, nonatomic) __weak id <PUCollectionViewLayoutProvider> layoutProvider; // @synthesize layoutProvider=_layoutProvider;
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;	// IMP=0x000000000011c320
- (void)invalidateLayoutCache;	// IMP=0x000000000011c2c6
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000011c0ff
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000011bf38
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x000000000011be19
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x000000000011bdb0
- (struct CGSize)collectionViewContentSize;	// IMP=0x000000000011bd56
- (id)init;	// IMP=0x000000000011bd42
- (id)initWithProvider:(id)arg1;	// IMP=0x000000000011bc87

@end
