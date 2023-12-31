//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FeatureDiscoveryDataProvider, NSArray, NSString, SuggestionsDataProvider;
@protocol MapsUIDiffableDataSourceViewModel;

@interface HomeOutlineFeatureDiscoverySectionController
{
    FeatureDiscoveryDataProvider *_featureDiscoveryDataProvider;	// 8 = 0x8
    SuggestionsDataProvider *_suggestionsDataProvider;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000088d5f4
@property(readonly, nonatomic) SuggestionsDataProvider *suggestionsDataProvider; // @synthesize suggestionsDataProvider=_suggestionsDataProvider;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x001000000088d4eb
@property(readonly, nonatomic) _Bool persistsExpansions;
- (id)contextMenuForSnapshot:(id)arg1;	// IMP=0x001000000088d4db
@property(readonly, nonatomic) NSArray *itemSnapshots;
@property(readonly, nonatomic) id <MapsUIDiffableDataSourceViewModel> sectionHeaderViewModel;
@property(readonly, nonatomic) NSArray *dataProviders;
- (id)initWithConfiguration:(id)arg1 suggestionsDataProvider:(id)arg2;	// IMP=0x001000000088d1cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

