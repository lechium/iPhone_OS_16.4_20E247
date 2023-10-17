//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSString, UICollectionView, UICollectionViewFlowLayout, VideosExtrasBannerController;

__attribute__((visibility("hidden")))
@interface VideosExtrasStackTemplateViewController
{
    UICollectionView *_collectionView;	// 8 = 0x8
    UICollectionViewFlowLayout *_collectionViewLayout;	// 16 = 0x10
    NSMutableDictionary *_viewControllers;	// 24 = 0x18
    NSMutableDictionary *_sizes;	// 32 = 0x20
    VideosExtrasBannerController *_bannerViewController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000231652
- (id)_viewControllerForIndexPath:(id)arg1;	// IMP=0x0000000000231269
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000000002311a8
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000023119d
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000000231108
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x0000000000230f1f
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000230db9
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000230d09
- (void)_prepareLayout;	// IMP=0x00000000002309dc
- (id)sectionStyle;	// IMP=0x000000000023095d
- (id)templateElement;	// IMP=0x0000000000230909
- (id)contentScrollView;	// IMP=0x00000000002308f4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000023073d
- (void)viewDidLoad;	// IMP=0x0000000000230143
- (void)_dynamicTypeDidChange;	// IMP=0x000000000022ff04
- (void)dealloc;	// IMP=0x000000000022fe8f
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;	// IMP=0x000000000022fdb3
- (_Bool)showsPlaceholder;	// IMP=0x000000000022fdab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
