//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/TabCollectionViewDelegate-Protocol.h>

@class NSString, NSUndoManager, UIImage, UIView, WBSCloudTab, WBSCloudTabDevice;
@protocol TabCollectionItem, TabThumbnailCollectionView;

@protocol TabThumbnailCollectionViewDelegate <TabCollectionViewDelegate>
- (NSUndoManager *)undoManagerForTabCollectionView:(id <TabThumbnailCollectionView>)arg1;
- (_Bool)tabCollectionView:(id <TabThumbnailCollectionView>)arg1 cloudTab:(WBSCloudTab *)arg2 matchesSearchText:(NSString *)arg3;
- (_Bool)tabCollectionView:(id <TabThumbnailCollectionView>)arg1 item:(id <TabCollectionItem>)arg2 matchesSearchText:(NSString *)arg3;
- (void)tabCollectionView:(id <TabThumbnailCollectionView>)arg1 closeCloudTab:(WBSCloudTab *)arg2 onDevice:(WBSCloudTabDevice *)arg3;
- (void)tabCollectionView:(id <TabThumbnailCollectionView>)arg1 relinquishBorrowedContentView:(UIView *)arg2 forItem:(id <TabCollectionItem>)arg3;
- (UIView *)tabCollectionView:(id <TabThumbnailCollectionView>)arg1 borrowContentViewForItem:(id <TabCollectionItem>)arg2 withTopBackdropView:(id *)arg3 ofHeight:(double)arg4;
- (struct UIEdgeInsets)effectiveSafeAreaInsetsForTabCollectionView:(id <TabThumbnailCollectionView>)arg1;
- (double)tabCollectionViewItemHeaderHeight:(id <TabThumbnailCollectionView>)arg1;
- (void)tabCollectionViewDidUpdateItemVisibilityOrder:(id <TabThumbnailCollectionView>)arg1;
- (UIImage *)tabCollectionView:(id <TabThumbnailCollectionView>)arg1 snapshotForItem:(id <TabCollectionItem>)arg2;
- (_Bool)tabCollectionView:(id <TabThumbnailCollectionView>)arg1 validSnapshotExistsForItem:(id <TabCollectionItem>)arg2;
- (void)tabCollectionViewEndIgnoringUserInteraction:(id <TabThumbnailCollectionView>)arg1 reason:(NSString *)arg2;
- (void)tabCollectionViewBeginIgnoringUserInteraction:(id <TabThumbnailCollectionView>)arg1 reason:(NSString *)arg2;
- (void)tabCollectionViewDidDismiss:(id <TabThumbnailCollectionView>)arg1;
- (void)tabCollectionViewWillDismiss:(id <TabThumbnailCollectionView>)arg1;
- (void)tabCollectionViewDidPresent:(id <TabThumbnailCollectionView>)arg1;
- (void)tabCollectionViewWillPresent:(id <TabThumbnailCollectionView>)arg1;

@optional
- (void)tabCollectionViewDidCancelDismissal:(id <TabThumbnailCollectionView>)arg1;
@end
