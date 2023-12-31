//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVMediaSelectionOption.h"

@class AVAssetTrack, AVWeakReference, NSDictionary;

__attribute__((visibility("hidden")))
@interface AVMediaSelectionTrackOption : AVMediaSelectionOption
{
    id _groupID;	// 16 = 0x10
    AVAssetTrack *_track;	// 24 = 0x18
    NSDictionary *_dictionary;	// 32 = 0x20
    AVWeakReference *_weakReferenceToGroup;	// 40 = 0x28
    _Bool _displaysNonForcedSubtitles;	// 48 = 0x30
}

- (int)trackID;	// IMP=0x000000000010c690
- (id)track;	// IMP=0x000000000010c67f
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;	// IMP=0x000000000010c510
- (id)metadataForFormat:(id)arg1;	// IMP=0x000000000010c4f3
- (id)availableMetadataFormats;	// IMP=0x000000000010c4d6
- (id)commonMetadata;	// IMP=0x000000000010c4b9
- (id)locale;	// IMP=0x000000000010c49c
- (_Bool)isPlayable;	// IMP=0x000000000010c47f
- (id)mediaSubTypes;	// IMP=0x000000000010c0c4
- (id)_track;	// IMP=0x000000000010c0b3
- (id)mediaType;	// IMP=0x000000000010c096
- (_Bool)displaysNonForcedSubtitles;	// IMP=0x000000000010c086
- (id)_groupID;	// IMP=0x000000000010c075
- (id)group;	// IMP=0x000000000010c058
- (id)dictionary;	// IMP=0x000000000010c047
- (unsigned long long)hash;	// IMP=0x000000000010c011
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010bf84
- (void)dealloc;	// IMP=0x000000000010bf10
- (id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3;	// IMP=0x000000000010bd58

@end

