//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class NSIndexPath, PUHorizontalTiledCollectionViewLayout, UICollectionView;

@protocol PUHorizontalTiledCollectionViewLayoutDelegate <NSObject>
- (struct CGSize)layout:(PUHorizontalTiledCollectionViewLayout *)arg1 collectionView:(UICollectionView *)arg2 sizeForItemAtIndexPath:(NSIndexPath *)arg3;
- (NSIndexPath *)layout:(PUHorizontalTiledCollectionViewLayout *)arg1 collectionView:(UICollectionView *)arg2 referenceIndexPathWithOffsetX:(double *)arg3;
@end

