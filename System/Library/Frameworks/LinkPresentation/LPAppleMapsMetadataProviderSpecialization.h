//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLGeocoder, LPMapCollectionMetadata, LPMapCollectionPublisherMetadata, LPMapMetadata, MKPlaceCuratedCollectionRefiner, MKPlacePublisherRefiner, _MKURLParser;

__attribute__((visibility("hidden")))
@interface LPAppleMapsMetadataProviderSpecialization
{
    _Bool _cancelled;	// 8 = 0x8
    CLGeocoder *_geocoder;	// 16 = 0x10
    _MKURLParser *_parser;	// 24 = 0x18
    LPMapMetadata *_mapMetadata;	// 32 = 0x20
    LPMapCollectionMetadata *_collectionMetadata;	// 40 = 0x28
    LPMapCollectionPublisherMetadata *_publisherMetadata;	// 48 = 0x30
    MKPlaceCuratedCollectionRefiner *_curatedCollectionRefiner;	// 56 = 0x38
    MKPlacePublisherRefiner *_publisherRefiner;	// 64 = 0x40
}

+ (id)specializedMetadataProviderForURLWithContext:(id)arg1;	// IMP=0x00600000000b930b
+ (unsigned long long)specialization;	// IMP=0x00600000000b9300
- (void).cxx_destruct;	// IMP=0x00000000000bf0be
- (void)complete;	// IMP=0x00000000000bef85
- (void)completeWithPublisher;	// IMP=0x00000000000beb8e
- (void)completeWithCuratedCollection;	// IMP=0x00000000000bdefe
- (void)completeWithCollection;	// IMP=0x00000000000bd518
- (void)completeWithDirections;	// IMP=0x00000000000bd3b4
- (void)completeWithPlacemark:(id)arg1;	// IMP=0x00000000000bd29d
- (void)completeWithMapItem:(id)arg1;	// IMP=0x00000000000bd164
- (void)completeWithSearchQuery:(id)arg1;	// IMP=0x00000000000bd102
- (void)fail;	// IMP=0x00000000000bd095
- (void)cancel;	// IMP=0x00000000000bd06d
- (void)continueWithSnapshotOfMapItems:(id)arg1 inRegion:(CDStruct_2b0c6e0b)arg2;	// IMP=0x00000000000bc602
- (void)continueWithSnapshotOfMapRegion:(CDStruct_2b0c6e0b)arg1;	// IMP=0x00000000000bbc71
- (void)continueWithLookAroundSnapshotWithOptions:(id)arg1;	// IMP=0x00000000000bb429
- (void)start;	// IMP=0x00000000000bab04
- (id)geocoder;	// IMP=0x00000000000baac3
- (void)resolveMapRegionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b942b

@end

