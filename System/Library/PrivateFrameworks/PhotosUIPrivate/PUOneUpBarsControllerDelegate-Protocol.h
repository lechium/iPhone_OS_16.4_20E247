//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/PUBarsControllerDelegate-Protocol.h>

@class NSString, PUAssetActionPerformer, PUAssetReference, PUMenuActionController, PUOneUpBarsController, PXActionManager;
@protocol PUDisplayAsset, PUDisplayLocationProvider;

@protocol PUOneUpBarsControllerDelegate <PUBarsControllerDelegate>
- (NSString *)backItemTitleForOneUpBarsController:(PUOneUpBarsController *)arg1;
- (PUMenuActionController *)oneUpBarsController:(PUOneUpBarsController *)arg1 createMenuActionControllerForManagerIfNeeded:(PXActionManager *)arg2;
- (_Bool)oneUpBarsControllerWantsActionsMenu:(PUOneUpBarsController *)arg1;
- (_Bool)oneUpBarsControllerWantsDocumentMenu:(PUOneUpBarsController *)arg1;

@optional
- (void)oneUpBarsControllerWillPresentActionsMenu:(PUOneUpBarsController *)arg1;
- (_Bool)oneUpBarsControllerDismissPresentedViewController:(PUOneUpBarsController *)arg1;
- (_Bool)oneUpBarsControllerShouldAnimateViewControllerPresentation:(PUOneUpBarsController *)arg1;
- (void)oneUpBarsController:(PUOneUpBarsController *)arg1 willExecuteActionPerformer:(PUAssetActionPerformer *)arg2;
- (_Bool)oneUpBarsController:(PUOneUpBarsController *)arg1 shouldHideStatusBarWhenShowingAccessoryViewForAssetReference:(PUAssetReference *)arg2;
- (_Bool)oneUpBarsController:(PUOneUpBarsController *)arg1 shouldHideNavigationBarWhenShowingAccessoryViewForAssetReference:(PUAssetReference *)arg2;
- (_Bool)oneUpBarsController:(PUOneUpBarsController *)arg1 shouldHideToolbarWhenShowingAccessoryViewForAssetReference:(PUAssetReference *)arg2;
- (_Bool)oneUpBarsController:(PUOneUpBarsController *)arg1 shouldTapBeginAtLocationFromProvider:(id <PUDisplayLocationProvider>)arg2;
- (_Bool)oneUpBarsController:(PUOneUpBarsController *)arg1 canShowCommentsForAsset:(id <PUDisplayAsset>)arg2;
- (void)oneUpBarsControllerToggleCommentsVisibility:(PUOneUpBarsController *)arg1;
- (void)oneUpBarsControllerToggleDetailsVisibility:(PUOneUpBarsController *)arg1;
- (_Bool)oneUpBarsController:(PUOneUpBarsController *)arg1 isDetailsAccessoryAvailableForAssetReference:(PUAssetReference *)arg2;
- (void)oneUpBarsControllerDidTapTitle:(PUOneUpBarsController *)arg1;
- (void)oneUpBarsController:(PUOneUpBarsController *)arg1 didTapPlayPauseButton:(_Bool)arg2;
- (void)oneUpBarsControllerDidChangeShowingPlayPauseButton:(PUOneUpBarsController *)arg1;
@end

