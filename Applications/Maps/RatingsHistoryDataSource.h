//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;
@protocol MKMapServiceTicket, SupplementaryElementsDataSourceDelegate;

@interface RatingsHistoryDataSource
{
    NSArray *_reviewedPlaces;	// 8 = 0x8
    NSArray *_sections;	// 16 = 0x10
    id <MKMapServiceTicket> _mapItemTicket;	// 24 = 0x18
    id <SupplementaryElementsDataSourceDelegate> _privacyDelegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000366e79
@property(nonatomic) __weak id <SupplementaryElementsDataSourceDelegate> privacyDelegate; // @synthesize privacyDelegate=_privacyDelegate;
- (void)reviewedPlaceObjectsDidChange;	// IMP=0x0010000000366e3a
- (void)_cancelMapItemTicket;	// IMP=0x0010000000366df8
- (void)_fetchMapItemsForReviewedPlaces:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000036663e
- (void)_fetchReviewedPlaces;	// IMP=0x0010000000366393
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00100000003662d0
- (void)privacyTextTapped;	// IMP=0x0010000000366293
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0010000000365b4e
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0010000000365a49
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00100000003659d8
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00100000003659bb
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x00100000003658cb
- (id)sectionAtIndex:(long long)arg1;	// IMP=0x0010000000365867
- (double)footerHeightForSection:(long long)arg1 collectionView:(id)arg2;	// IMP=0x0010000000365635
- (id)_footerLinkText;	// IMP=0x00100000003655cd
- (id)_footerText;	// IMP=0x0010000000365565
- (void)_buildContent;	// IMP=0x0010000000364e7c
- (void)_loadContent;	// IMP=0x0010000000364e23
- (void)dealloc;	// IMP=0x0010000000364de5
- (id)initWithCollectionView:(id)arg1 updateLocation:(_Bool)arg2;	// IMP=0x0010000000364d58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
