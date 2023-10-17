//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface AllRAPHistoryDataSource
{
    NSArray *_reports;	// 8 = 0x8
    unsigned long long _reportSection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000009b4a36
- (void)reportHistoryManagerDidUpdate:(id)arg1;	// IMP=0x00100000009b4a24
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00100000009b4932
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x00100000009b491d
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00100000009b480b
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00100000009b47ee
- (id)_reportHistoryContentForReportSection:(unsigned long long)arg1;	// IMP=0x00100000009b44c5
- (void)_loadReports;	// IMP=0x00100000009b4442
- (id)initWithCollectionView:(id)arg1 reportSection:(unsigned long long)arg2;	// IMP=0x00100000009b4348

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
