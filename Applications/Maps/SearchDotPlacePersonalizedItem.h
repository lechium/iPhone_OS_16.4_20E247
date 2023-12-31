//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AddressBookAddress, GEOEnhancedPlacement, GEOFeatureStyleAttributes, GEOLabelGeometry, MKMapItem, MapsLocationOfInterest, NSArray, NSDate, NSSet, NSString, ParkedCar, PersonalizedItemPrioritizedStringAdornment, PersonalizedItemSource, PersonalizedItemStyleAttributesAdornment, SearchDotPlaceItemKey, SearchResult, TrafficIncidentReport, VKLabelMarker;
@protocol SearchDotPlace;

@interface SearchDotPlacePersonalizedItem : NSObject
{
    _Bool _shouldBeHiddenFromMap;	// 8 = 0x8
    PersonalizedItemSource *_source;	// 16 = 0x10
    MKMapItem *_mapItem;	// 24 = 0x18
    SearchDotPlaceItemKey *_key;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    GEOFeatureStyleAttributes *_style;	// 48 = 0x30
    id <SearchDotPlace> _searchDotPlace;	// 56 = 0x38
    struct CLLocationCoordinate2D _coordinate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000090441e
@property(readonly, nonatomic) id <SearchDotPlace> searchDotPlace; // @synthesize searchDotPlace=_searchDotPlace;
@property(retain, nonatomic) GEOFeatureStyleAttributes *style; // @synthesize style=_style;
@property(nonatomic) _Bool shouldBeHiddenFromMap; // @synthesize shouldBeHiddenFromMap=_shouldBeHiddenFromMap;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) SearchDotPlaceItemKey *key; // @synthesize key=_key;
@property(readonly, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(nonatomic) __weak PersonalizedItemSource *source; // @synthesize source=_source;
@property(readonly, nonatomic) unsigned long long sortOrder;
@property(readonly, nonatomic) SearchResult *searchResult;
@property(readonly, nonatomic) NSArray *searchableStrings;
@property(readonly, nonatomic) AddressBookAddress *address;
@property(readonly, nonatomic) VKLabelMarker *sourceLabelMarker;
@property(readonly, nonatomic) _Bool mustRefineMapItem;
@property(readonly, nonatomic) _Bool showsBalloonCallout;
@property(readonly, nonatomic) _Bool shouldBeClustered;
@property(readonly, nonatomic) PersonalizedItemStyleAttributesAdornment *styleAttributes;
@property(readonly, nonatomic) PersonalizedItemPrioritizedStringAdornment *subtitle;
@property(readonly, nonatomic) PersonalizedItemPrioritizedStringAdornment *prefix;
@property(readonly, nonatomic) PersonalizedItemPrioritizedStringAdornment *title;
@property(readonly, nonatomic) unsigned long long priority;
@property(readonly, nonatomic) NSSet *keys;
@property(readonly, nonatomic) GEOLabelGeometry *labelGeometry;
@property(readonly, nonatomic) GEOEnhancedPlacement *enhancedPlacement;
- (id)initWithSearchDotPlace:(id)arg1;	// IMP=0x0010000000903f37

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDate *eventDate;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) TrafficIncidentReport *incidentReport;
@property(readonly, nonatomic) _Bool isRouteStartOrEnd;
@property(readonly, nonatomic) MapsLocationOfInterest *locationOfInterest;
@property(readonly, nonatomic) _Bool needsToPreserveSelection;
@property(readonly, nonatomic) ParkedCar *parkedCar;
@property(readonly, nonatomic) long long preferredDisplayedSearchResultType;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsDisplayedSearchResultsTypePoints;

@end

