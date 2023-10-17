//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _TtC4Maps36PlaceSummaryViewModelTemplateFactory : NSObject
{
}

+ (id)addAPlaceSearchViewModel;	// IMP=0x002000000007eec0
+ (id)addAPlaceAutocompleteViewModel;	// IMP=0x001000000007eeb0
+ (id)viewModelWithMapsSuggestionsEntry:(id)arg1 highlightConfiguration:(id)arg2 searchAlongRoute:(_Bool)arg3;	// IMP=0x001000000007ee10
+ (id)viewModelWithSearchResult:(id)arg1 highlightConfiguration:(id)arg2 currentLocation:(id)arg3 availableWidth:(double)arg4 searchAlongRoute:(_Bool)arg5;	// IMP=0x001000000007e9e0
+ (id)viewModelWithCoreRecentContact:(id)arg1 highlightConfiguration:(id)arg2 searchAlongRoute:(_Bool)arg3;	// IMP=0x001000000007e390
+ (id)viewModelWithAddressBookAddress:(id)arg1 highlightConfiguration:(id)arg2 searchAlongRoute:(_Bool)arg3;	// IMP=0x001000000007dc80
+ (id)viewModelWithHistoryEntryPlaceDisplay:(id)arg1 highlightConfiguration:(id)arg2 availableWidth:(double)arg3 currentLocation:(id)arg4 searchAlongRoute:(_Bool)arg5;	// IMP=0x001000000007d840
+ (id)viewModelWithHistoryEntrySearch:(id)arg1 highlightConfiguration:(id)arg2 searchAlongRoute:(_Bool)arg3;	// IMP=0x001000000007d160
+ (id)viewModelWithCompletion:(id)arg1 metadata:(id)arg2 currentLocation:(id)arg3 userLocationSearchResult:(id)arg4 highlightType:(id)arg5 availableWidth:(double)arg6 clientSourceType:(long long)arg7 allowsTappableUnits:(_Bool)arg8 searchAlongRoute:(_Bool)arg9;	// IMP=0x001000000007cd60
+ (id)viewModelWithSearchResult:(id)arg1 metadata:(id)arg2 currentLocation:(id)arg3;	// IMP=0x001000000007c6c0
+ (long long)kSearchMinimumRegularLinesCount;	// IMP=0x001000000007b960
- (id)init;	// IMP=0x004000000007f950

@end
