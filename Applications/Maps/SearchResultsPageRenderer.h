//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface SearchResultsPageRenderer
{
    NSArray *_searchResults;	// 104 = 0x68
    CDStruct_34734122 _topLeftCorner;	// 112 = 0x70
    CDStruct_34734122 _mlMapPoint;	// 128 = 0x80
    CDStruct_34734122 _mrMapPoint;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00100000002c9736
- (void)drawContentForPageAtIndex:(long long)arg1 inRect:(struct CGRect)arg2;	// IMP=0x00100000002c9029
- (void)_drawPinsInRect:(struct CGRect)arg1 zoomLevel:(double)arg2;	// IMP=0x00100000002c89a1
- (void)drawTopContentInRect:(struct CGRect)arg1 forPageAtIndex:(long long)arg2;	// IMP=0x00100000002c8953
- (long long)searchResultsPerPage;	// IMP=0x00100000002c88fa
- (void)prepareForDrawingPages:(struct _NSRange)arg1;	// IMP=0x00100000002c8636
- (struct CGRect)overviewRect;	// IMP=0x00100000002c8539
- (long long)numberOfPages;	// IMP=0x00100000002c84f5
- (id)computeCurrentPrintInfo;	// IMP=0x00100000002c7e7a
- (id)initWithSearchResults:(id)arg1 title:(id)arg2 subTitle:(id)arg3 mapView:(id)arg4;	// IMP=0x00100000002c7d88
- (double)_zoomLevelForCoordinateRegion:(CDStruct_b7cb895d)arg1 clampTo:(double)arg2;	// IMP=0x00100000002c9749

@end

