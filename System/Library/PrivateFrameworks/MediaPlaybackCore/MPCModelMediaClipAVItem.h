//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPAVItem.h>

@class MPModelGenericObject, MPModelMediaClip, NSString;

__attribute__((visibility("hidden")))
@interface MPCModelMediaClipAVItem : MPAVItem
{
    MPModelGenericObject *_modelGenericObject;	// 112 = 0x70
    MPModelMediaClip *_mediaClip;	// 120 = 0x78
}

+ (id)requiredMediaClipProperties;	// IMP=0x00100000001be97a
- (void).cxx_destruct;	// IMP=0x00000000001be90c
@property(readonly, nonatomic) MPModelMediaClip *mediaClip; // @synthesize mediaClip=_mediaClip;
- (_Bool)_isVideoAsset;	// IMP=0x00000000001be79c
- (id)_currentPreferredStaticAsset;	// IMP=0x00000000001be1f4
- (void)_applyLoudnessInfo;	// IMP=0x00000000001bdfef
- (_Bool)_allowsCellularPlayback;	// IMP=0x00000000001bdf7a
@property(readonly, nonatomic) long long rtcReportingAssetType;
- (id)rtcReportingServiceIdentifier;	// IMP=0x00000000001bdf62
- (CDUnknownBlockType)artworkCatalogBlock;	// IMP=0x00000000001bded7
- (_Bool)allowsExternalPlayback;	// IMP=0x00000000001bdecf
- (_Bool)allowsAirPlayFromCloud;	// IMP=0x00000000001bdec7
- (_Bool)supportsRateChange;	// IMP=0x00000000001bdebf
- (void)reevaluateType;	// IMP=0x00000000001bde7e
- (_Bool)prefersSeekOverSkip;	// IMP=0x00000000001bde76
- (id)modelGenericObject;	// IMP=0x00000000001bddac
- (id)mainTitle;	// IMP=0x00000000001bdd8f
- (void)loadAssetAndPlayerItem;	// IMP=0x00000000001bdacd
- (_Bool)isValidPlayerSubstituteForItem:(id)arg1;	// IMP=0x00000000001bda47
- (_Bool)isStreamable;	// IMP=0x00000000001bda3f
- (_Bool)isAssetURLValid;	// IMP=0x00000000001bd9a7
- (double)durationFromExternalMetadata;	// IMP=0x00000000001bd929
@property(readonly, copy) NSString *description;
- (id)initWithMediaClip:(id)arg1;	// IMP=0x00000000001bd81d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
