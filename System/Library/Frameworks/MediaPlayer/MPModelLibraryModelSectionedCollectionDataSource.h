//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPMediaLibraryEntityTranslationContext, MPModelLibraryRequest, NSString;

__attribute__((visibility("hidden")))
@interface MPModelLibraryModelSectionedCollectionDataSource : NSObject
{
    MPMediaLibraryEntityTranslationContext *_itemTranslationContext;	// 8 = 0x8
    MPMediaLibraryEntityTranslationContext *_sectionTranslationContext;	// 16 = 0x10
    vector_1ee95920 _allowedSectionPersistentIDs;	// 24 = 0x18
    struct map<long long, unsigned long, std::less<long long>, std::allocator<std::pair<const long long, unsigned long>>> _allowedSectionPersistentIDToSectionQueryResultsIndexMap;	// 48 = 0x30
    MPModelLibraryRequest *_request;	// 72 = 0x48
    shared_ptr_e975541e _itemEntityQueryResults;	// 80 = 0x50
    shared_ptr_274c5e8b _sectionEntityQueryResult;	// 96 = 0x60
}

- (id).cxx_construct;	// IMP=0x0000000000137de9
- (void).cxx_destruct;	// IMP=0x0000000000137d63
@property(readonly, nonatomic) MPModelLibraryRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) shared_ptr_274c5e8b sectionEntityQueryResult; // @synthesize sectionEntityQueryResult=_sectionEntityQueryResult;
@property(readonly, nonatomic) shared_ptr_e975541e itemEntityQueryResults; // @synthesize itemEntityQueryResults=_itemEntityQueryResults;
- (_Bool)_allowedEntityIdentifiersContainsAllPersistentIDs;	// IMP=0x0000000000137b64
- (unsigned long long)_adjustedIndexForSectionIndex:(long long)arg1;	// IMP=0x00000000001378da
- (void)_populateIndexMap;	// IMP=0x000000000013734e
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;	// IMP=0x0000000000136f01
- (id)identifiersForSectionAtIndex:(long long)arg1;	// IMP=0x0000000000136b7a
- (id)identifiersForItemAtIndexPath:(id)arg1;	// IMP=0x00000000001366b1
- (id)itemAtIndexPath:(id)arg1;	// IMP=0x0000000000136207
- (_Bool)hasSameContentAsDataSource:(id)arg1;	// IMP=0x0000000000135d73
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;	// IMP=0x0000000000135a59
- (id)sectionAtIndex:(unsigned long long)arg1;	// IMP=0x000000000013567a
- (unsigned long long)numberOfSections;	// IMP=0x0000000000135663
- (id)initWithRequest:(id)arg1 sectionQueryResults:(shared_ptr_274c5e8b)arg2 itemQueryResults:(void *)arg3;	// IMP=0x0000000000135276

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

