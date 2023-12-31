//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DroppedPinMapItemKey, GEOServerResultScoreMetadata, NSArray;

@interface DroppedPinMapItem
{
    NSArray *_autocompletionStrings;	// 56 = 0x38
    DroppedPinMapItemKey *_droppedPinKey;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000090e8ba
- (id)leafPersonalizedAutocompleteItems;	// IMP=0x001000000090e85a
@property(readonly, nonatomic) _Bool isCompoundPersonalizedAutocompleteItem;
@property(readonly, nonatomic) unsigned long long serverItemIndexInSection;
@property(readonly, nonatomic) unsigned long long serverSectionIndex;
@property(readonly, nonatomic) _Bool hasServerItemIndex;
@property(readonly, nonatomic) NSArray *autocompletionStrings;
@property(readonly, nonatomic) id autocompleteObject;
@property(readonly, nonatomic) _Bool hidden;
@property(readonly, nonatomic) GEOServerResultScoreMetadata *serverResultScoreMetadata;
@property(readonly, nonatomic) long long priorityOverride;
@property(readonly, nonatomic) _Bool hasPriorityOverride;
@property(readonly, nonatomic) long long sourceSubtype;
@property(readonly, nonatomic) long long sourceType;
- (id)styleAttributes;	// IMP=0x001000000090e42f
- (id)title;	// IMP=0x001000000090e305
- (id)keys;	// IMP=0x001000000090e2de
- (id)initWithSearchResult:(id)arg1;	// IMP=0x001000000090e239

@end

