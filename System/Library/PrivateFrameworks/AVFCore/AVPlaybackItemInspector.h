//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface AVPlaybackItemInspector
{
    struct OpaqueFigPlaybackItem *_playbackItem;	// 8 = 0x8
    NSArray *_trackIDs;	// 16 = 0x10
}

- (id)compatibleTrackForCompositionTrack:(id)arg1;	// IMP=0x00000000000e38f6
- (id)metadataForFormat:(id)arg1;	// IMP=0x00000000000e38dd
- (id)availableMetadataFormats;	// IMP=0x00000000000e38c4
- (id)commonMetadata;	// IMP=0x00000000000e38ab
- (id)lyrics;	// IMP=0x00000000000e388f
- (id)trackIDs;	// IMP=0x00000000000e387e
- (long long)trackCount;	// IMP=0x00000000000e3823
- (_Bool)providesPreciseDurationAndTiming;	// IMP=0x00000000000e381b
- (struct CGSize)naturalSize;	// IMP=0x00000000000e37a3
- (CDStruct_1b6d18a9)duration;	// IMP=0x00000000000e3744
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;	// IMP=0x00000000000e36cb
@property(retain, nonatomic, getter=_playbackItem, setter=_setPlaybackItem:) struct OpaqueFigPlaybackItem *playbackItem;
- (unsigned long long)hash;	// IMP=0x00000000000e3628
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e35a5
- (void)dealloc;	// IMP=0x00000000000e3551
- (id)initWithPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 trackIDs:(id)arg2;	// IMP=0x00000000000e34ce

@end
