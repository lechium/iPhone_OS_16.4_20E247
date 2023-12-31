//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIStorePageSection.h"

@class SKUISearchBarController;

__attribute__((visibility("hidden")))
@interface SKUISearchBarPageSection : SKUIStorePageSection
{
    SKUISearchBarController *_searchBarController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000012ae5c
- (id)_searchBarController;	// IMP=0x000000000012ab5d
- (void)willAppearInContext:(id)arg1;	// IMP=0x000000000012aab9
- (struct UIEdgeInsets)sectionContentInset;	// IMP=0x000000000012aa9e
- (long long)numberOfCells;	// IMP=0x000000000012aa93
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;	// IMP=0x000000000012a99b
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;	// IMP=0x000000000012a8a3
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x000000000012a7e4
- (id)cellForIndexPath:(id)arg1;	// IMP=0x000000000012a67b
- (id)backgroundColorForIndexPath:(id)arg1;	// IMP=0x000000000012a563
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;	// IMP=0x000000000012a4d3

@end

