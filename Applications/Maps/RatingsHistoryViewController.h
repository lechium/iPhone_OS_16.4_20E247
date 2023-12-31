//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ContainerHeaderView, NSString, RatingsHistoryDataSource, UICollectionView;

@interface RatingsHistoryViewController
{
    ContainerHeaderView *_titleHeaderView;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    RatingsHistoryDataSource *_ratingsDataSource;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000abff06
- (void)didTapOnPrivacyText;	// IMP=0x0010000000abfe9f
- (void)dataSource:(id)arg1 itemTapped:(id)arg2;	// IMP=0x0010000000abfdca
- (void)dataSource:(id)arg1 itemFocused:(id)arg2;	// IMP=0x0010000000abfdc4
- (void)dataSourceUpdated:(id)arg1;	// IMP=0x0010000000abfd79
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x0010000000abfd67
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0010000000abfd26
- (void)loadDataSource;	// IMP=0x0010000000abfc6b
- (void)_updateHeaderHairline;	// IMP=0x0010000000abfc65
- (void)_createEmptyStateLayout;	// IMP=0x0010000000abf5c7
- (void)_createCollectionViewLayout;	// IMP=0x0010000000abed7e
- (void)_setupConstraints;	// IMP=0x0010000000abe7bc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000abe766
- (void)viewDidLoad;	// IMP=0x0010000000abe4bb
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000abe3c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

