//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class NSArray, NSString, UICollectionView, UICollectionViewFlowLayout;
@protocol AllCollectinsFilterRoutingDelegate, CollectionsFilterFetcher><CollectionsFilterDataProvider><CollectionsFilterRouting, CollectionsFilterRoutingDelegate, CollectionsFilterSizeProvider, GuidesHomeFilterRoutingDelegate;

@interface CollectionsFilterCarouselView : UICollectionReusableView
{
    long long _context;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    UICollectionViewFlowLayout *_flowLayout;	// 24 = 0x18
    id <CollectionsFilterSizeProvider> _sizeController;	// 32 = 0x20
    id <CollectionsFilterFetcher><CollectionsFilterDataProvider><CollectionsFilterRouting> _logicController;	// 40 = 0x28
    id <CollectionsFilterRoutingDelegate> _routingDelegate;	// 48 = 0x30
    NSArray *_resultFilters;	// 56 = 0x38
    id <AllCollectinsFilterRoutingDelegate> _allCollectionsRoutingDelegate;	// 64 = 0x40
    NSArray *_allCollectionsResultFilter;	// 72 = 0x48
    id <GuidesHomeFilterRoutingDelegate> _guidesHomeRoutingDelegate;	// 80 = 0x50
    NSArray *_guidesHomeResultFilter;	// 88 = 0x58
}

+ (double)defaultHeightForDisplayStyle:(long long)arg1 inContext:(long long)arg2;	// IMP=0x002000000027e919
+ (id)reuseIdentifier;	// IMP=0x001000000027e90f
- (void).cxx_destruct;	// IMP=0x002000000027f8a3
@property(retain, nonatomic) NSArray *guidesHomeResultFilter; // @synthesize guidesHomeResultFilter=_guidesHomeResultFilter;
@property(nonatomic) __weak id <GuidesHomeFilterRoutingDelegate> guidesHomeRoutingDelegate; // @synthesize guidesHomeRoutingDelegate=_guidesHomeRoutingDelegate;
@property(retain, nonatomic) NSArray *allCollectionsResultFilter; // @synthesize allCollectionsResultFilter=_allCollectionsResultFilter;
@property(nonatomic) __weak id <AllCollectinsFilterRoutingDelegate> allCollectionsRoutingDelegate; // @synthesize allCollectionsRoutingDelegate=_allCollectionsRoutingDelegate;
@property(retain, nonatomic) NSArray *resultFilters; // @synthesize resultFilters=_resultFilters;
@property(nonatomic) __weak id <CollectionsFilterRoutingDelegate> routingDelegate; // @synthesize routingDelegate=_routingDelegate;
@property(retain, nonatomic) id <CollectionsFilterFetcher><CollectionsFilterDataProvider><CollectionsFilterRouting> logicController; // @synthesize logicController=_logicController;
@property(retain, nonatomic) id <CollectionsFilterSizeProvider> sizeController; // @synthesize sizeController=_sizeController;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)titleForFilterAtIndexPath:(id)arg1;	// IMP=0x000000000027f677
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x001000000027f620
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x001000000027f5a3
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x001000000027f536
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x001000000027f46c
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x001000000027f153
- (void)configureCarouselFilterView;	// IMP=0x001000000027ed8a
- (void)configureFiltersCarouselMetadata:(long long)arg1;	// IMP=0x001000000027ed3d
- (void)setUpCarouselDependenciesUsingSelectedFilterIndexPath:(id)arg1;	// IMP=0x001000000027eb6c
- (void)setupSubviews;	// IMP=0x001000000027e9ba
- (void)scrollToSelectedFilter;	// IMP=0x001000000027e97d
- (void)didSelectFilterAtIndex:(long long)arg1;	// IMP=0x001000000027e909
- (void)displayFilters;	// IMP=0x001000000027e84a
- (void)configureWithContext:(long long)arg1 routingDelegate:(id)arg2 guidesHomeFilters:(id)arg3 selectedFilterIndex:(id)arg4;	// IMP=0x001000000027e785
- (void)configureWithContext:(long long)arg1 withRoutingDelegate:(id)arg2 withPublishersResultFilters:(id)arg3 withSelectedFilterIndex:(id)arg4;	// IMP=0x001000000027e6d8
- (void)configureWithContext:(long long)arg1 withRoutingDelegate:(id)arg2 withAllCollectionsResultFilters:(id)arg3 withSelectedFilterIndex:(id)arg4;	// IMP=0x001000000027e62b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000027e581

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

