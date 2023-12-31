//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVDispatchOnce, AVDisplayCriteria, NSArray, NSURL;

__attribute__((visibility("hidden")))
@interface AVFigAssetInspector
{
    struct OpaqueFigAsset *_figAsset;	// 8 = 0x8
    struct OpaqueFigFormatReader *_formatReader;	// 16 = 0x10
    AVDispatchOnce *_formatReaderOnce;	// 24 = 0x18
    AVDispatchOnce *_checkIsStreamingOnce;	// 32 = 0x20
    AVDispatchOnce *_makeDisplayCriteriaOnce;	// 40 = 0x28
    AVDisplayCriteria *_displayCriteria;	// 48 = 0x30
    _Bool _isStreaming;	// 56 = 0x38
    _Bool didCheckForSaveRestriction;	// 57 = 0x39
    _Bool hasSaveRestriction;	// 58 = 0x3a
}

- (id)preferredDisplayCriteria;	// IMP=0x00000000000e5743
- (id)availableVideoDynamicRanges;	// IMP=0x00000000000e5727
- (struct CGSize)maximumVideoResolution;	// IMP=0x00000000000e570b
- (id)makePropertyListForProxyWithOptions:(id)arg1;	// IMP=0x00000000000e4dee
- (id)propertyListForProxy;	// IMP=0x00000000000e4d91
- (id)_nameForProxy;	// IMP=0x00000000000e4cd4
- (id)_assetAnalysisMessages;	// IMP=0x00000000000e4cb8
- (_Bool)supportsAnalysisReporting;	// IMP=0x00000000000e4c96
- (CDStruct_1b6d18a9)overallDurationHint;	// IMP=0x00000000000e4c55
- (long long)fragmentCount;	// IMP=0x00000000000e4c36
- (long long)firstFragmentSequenceNumber;	// IMP=0x00000000000e4c17
- (_Bool)containsFragments;	// IMP=0x00000000000e4bf5
- (_Bool)canContainFragments;	// IMP=0x00000000000e4bd3
- (id)SHA1Digest;	// IMP=0x00000000000e4bb7
- (_Bool)isCompatibleWithAirPlayVideo;	// IMP=0x00000000000e4b95
- (_Bool)isCompatibleWithSavedPhotosAlbum;	// IMP=0x00000000000e4b45
- (_Bool)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)arg1;	// IMP=0x00000000000e4b23
- (_Bool)isPlayable;	// IMP=0x00000000000e4abb
@property(readonly, nonatomic, getter=_isStreaming) _Bool streaming;
@property(readonly, nonatomic) _Bool hasProtectedContent;
@property(readonly, nonatomic) NSArray *contentKeySpecifiersEligibleForPreloading;
@property(readonly, nonatomic) unsigned long long downloadToken;
@property(readonly, nonatomic) NSURL *originalNetworkContentURL;
@property(readonly, nonatomic) NSURL *resolvedURL;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) NSArray *figChapters;
@property(readonly, nonatomic) NSArray *figChapterGroupInfo;
- (_Bool)isComposable;	// IMP=0x00000000000e47c1
- (_Bool)isReadable;	// IMP=0x00000000000e4783
- (_Bool)isExportable;	// IMP=0x00000000000e4745
- (_Bool)_hasQTSaveRestriction;	// IMP=0x00000000000e4646
- (id)metadataForFormat:(id)arg1;	// IMP=0x00000000000e43a7
- (id)availableMetadataFormats;	// IMP=0x00000000000e438b
- (id)commonMetadata;	// IMP=0x00000000000e4204
- (id)lyrics;	// IMP=0x00000000000e41e8
- (id)creationDate;	// IMP=0x00000000000e410f
- (id)_mediaSelectionGroupDictionaries;	// IMP=0x00000000000e40f3
- (id)trackReferences;	// IMP=0x00000000000e40d7
- (id)alternateTrackGroups;	// IMP=0x00000000000e40bb
- (long long)trackCount;	// IMP=0x00000000000e4086
- (_Bool)providesPreciseDurationAndTiming;	// IMP=0x00000000000e4064
- (CDStruct_1b6d18a9)minimumTimeOffsetFromLive;	// IMP=0x00000000000e3ff9
- (int)naturalTimeScale;	// IMP=0x00000000000e3f5d
- (struct CGSize)naturalSize;	// IMP=0x00000000000e3f2e
- (struct CGAffineTransform)preferredTransform;	// IMP=0x00000000000e3eed
- (float)preferredSoundCheckVolumeNormalization;	// IMP=0x00000000000e3ece
- (float)preferredVolume;	// IMP=0x00000000000e3eaa
- (float)preferredRate;	// IMP=0x00000000000e3e86
@property(readonly, nonatomic) NSArray *variants;
- (CDStruct_1b6d18a9)duration;	// IMP=0x00000000000e3d50
- (id)httpSessionIdentifier;	// IMP=0x00000000000e3cf5
- (id)identifyingTag;	// IMP=0x00000000000e3cd9
- (id)identifyingTagClass;	// IMP=0x00000000000e3c9c
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;	// IMP=0x00000000000e3c23
@property(readonly, nonatomic, getter=_formatReader) struct OpaqueFigFormatReader *formatReader;
@property(readonly, nonatomic, getter=_figAsset) struct OpaqueFigAsset *figAsset;
- (unsigned long long)hash;	// IMP=0x00000000000e3af6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e3a73
- (void)dealloc;	// IMP=0x00000000000e39c9
- (id)initWithFigAsset:(struct OpaqueFigAsset *)arg1;	// IMP=0x00000000000e391c

@end

