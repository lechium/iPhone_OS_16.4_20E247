//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSNumber, NSString, PFPosterMedia;

__attribute__((visibility("hidden")))
@interface PUPosterMediaDisplayAsset : NSObject
{
    PFPosterMedia *_posterMedia;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000004c6a62
@property(readonly, nonatomic) PFPosterMedia *posterMedia; // @synthesize posterMedia=_posterMedia;
- (long long)isContentEqualTo:(id)arg1;	// IMP=0x00000000004c6a50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004c6a45
@property(readonly, nonatomic) struct CGRect acceptableCropRect;
@property(readonly, nonatomic) float audioScore;
@property(readonly, nonatomic) _Bool isInSharedLibrary;
@property(readonly, nonatomic) struct CGRect faceAreaRect;
@property(readonly, nonatomic) _Bool representsBurst;
@property(readonly, nonatomic) struct CGRect preferredCropRect;
@property(readonly, nonatomic) unsigned long long thumbnailIndex;
@property(readonly, nonatomic) unsigned long long pixelHeight;
@property(readonly, nonatomic) unsigned long long pixelWidth;
@property(readonly, nonatomic) Class defaultImageProviderClass;
@property(readonly, nonatomic) _Bool isInCloud;
@property(readonly, nonatomic) _Bool isEligibleForAutoPlayback;
@property(readonly, nonatomic) long long mediaType;
@property(readonly, nonatomic) unsigned long long mediaSubtypes;
@property(readonly, nonatomic, getter=isFavorite) _Bool favorite;
@property(readonly, nonatomic) NSDate *localCreationDate;
@property(readonly, nonatomic) NSDate *creationDate;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004c6855
@property(readonly) unsigned long long hash;
- (id)init;	// IMP=0x00000000004c6797
- (id)initWithPosterMedia:(id)arg1;	// IMP=0x00000000004c672c

// Remaining properties
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic) unsigned long long burstSelectionTypes;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) NSData *fetchColorNormalizationData;
@property(readonly, nonatomic) NSNumber *hdrGain;
@property(readonly, nonatomic) NSDate *importDate;
@property(readonly, nonatomic) _Bool isAutoPlaybackEligibilityEstimated;
@property(readonly, nonatomic) CDStruct_1b6d18a9 livePhotoVideoDuration;
@property(readonly, nonatomic) NSString *localizedGeoDescription;
@property(readonly, nonatomic) long long originalFileSize;
@property(readonly, nonatomic) long long playbackStyle;
@property(readonly, nonatomic) long long playbackVariation;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned long long thumbnailVersion;
@property(readonly, nonatomic) NSString *uuid;

@end
