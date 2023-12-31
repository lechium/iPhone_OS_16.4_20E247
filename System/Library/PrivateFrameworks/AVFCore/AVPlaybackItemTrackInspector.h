//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVWeakReference;

__attribute__((visibility("hidden")))
@interface AVPlaybackItemTrackInspector
{
    struct OpaqueFigPlaybackItem *_playbackItem;	// 32 = 0x20
    int _trackID;	// 40 = 0x28
    unsigned int _mediaType;	// 44 = 0x2c
    AVWeakReference *_weakReferenceToAsset;	// 48 = 0x30
}

- (unsigned long long)hash;	// IMP=0x00000000000f5f89
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f5eeb
- (CDStruct_1b6d18a9)samplePresentationTimeForTrackTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000f5ed3
- (struct CGAffineTransform)preferredTransform;	// IMP=0x00000000000f5e92
- (struct CGSize)dimensions;	// IMP=0x00000000000f5e76
- (struct CGSize)naturalSize;	// IMP=0x00000000000f5e5a
- (float)peakDataRate;	// IMP=0x00000000000f5e51
- (float)estimatedDataRate;	// IMP=0x00000000000f5e2c
- (CDStruct_e83c9415)timeRange;	// IMP=0x00000000000f5dd0
- (_Bool)isEnabled;	// IMP=0x00000000000f5dae
- (id)formatDescriptions;	// IMP=0x00000000000f5d92
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;	// IMP=0x00000000000f5d1b
- (struct OpaqueFigPlaybackItem *)_playbackItem;	// IMP=0x00000000000f5d0a
- (id)mediaType;	// IMP=0x00000000000f5cb8
- (unsigned int)_figMediaType;	// IMP=0x00000000000f5ca8
- (int)trackID;	// IMP=0x00000000000f5c98
- (id)asset;	// IMP=0x00000000000f5c7b
- (void)dealloc;	// IMP=0x00000000000f5c24
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;	// IMP=0x00000000000f5a5f

@end

