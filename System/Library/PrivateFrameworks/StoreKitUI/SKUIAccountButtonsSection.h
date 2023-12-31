//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIStorePageSection.h"

@class NSString, SKUIAccountButtonsComponent, SKUIAccountButtonsViewController;

__attribute__((visibility("hidden")))
@interface SKUIAccountButtonsSection : SKUIStorePageSection
{
    SKUIAccountButtonsViewController *_accountButtonsViewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002a0ab1
- (id)_accountButtonsViewController;	// IMP=0x00000000002a06ac
- (void)accountButtonsViewControllerDidTapECommerceLink:(id)arg1;	// IMP=0x00000000002a05a8
- (void)accountButtonsViewControllerDidSignOut:(id)arg1;	// IMP=0x00000000002a050f
- (void)accountButtonsViewControllerDidSignIn:(id)arg1;	// IMP=0x00000000002a0479
- (void)willAppearInContext:(id)arg1;	// IMP=0x00000000002a03d5
- (long long)numberOfCells;	// IMP=0x00000000002a03ca
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000002a02d2
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000002a01da
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x00000000002a0120
- (id)cellForIndexPath:(id)arg1;	// IMP=0x000000000029ff99
- (id)backgroundColorForIndexPath:(id)arg1;	// IMP=0x000000000029fe81
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;	// IMP=0x000000000029fdf1
- (void)dealloc;	// IMP=0x000000000029fda6
- (id)initWithPageComponent:(id)arg1;	// IMP=0x000000000029fd77

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SKUIAccountButtonsComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end

