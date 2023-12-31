//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputUnknownHelper
{
}

+ (id)keyPathsForValuesAffectingCanPerformMultiplePasses;	// IMP=0x00800000000a9bce
- (_Bool)canStartRespondingToEachPassDescriptionReturningReason:(id *)arg1;	// IMP=0x00000000000aa217
- (void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;	// IMP=0x00000000000aa0c0
- (_Bool)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;	// IMP=0x00000000000aa0ab
- (_Bool)_canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 exceptionReason:(id *)arg3;	// IMP=0x00000000000a9d20
- (void)setSampleReferenceBaseURL:(id)arg1;	// IMP=0x00000000000a9cef
- (void)setMediaDataLocation:(id)arg1;	// IMP=0x00000000000a9cbe
- (void)setPreferredMediaChunkSize:(long long)arg1;	// IMP=0x00000000000a9c8d
- (void)setPreferredMediaChunkAlignment:(long long)arg1;	// IMP=0x00000000000a9c5c
- (void)setPreferredMediaChunkDuration:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000a9c31
- (void)setSourcePixelBufferAttributes:(id)arg1;	// IMP=0x00000000000a9c00
- (_Bool)canPerformMultiplePasses;	// IMP=0x00000000000a9bee
- (void)setPerformsMultiPassEncodingIfSupported:(_Bool)arg1;	// IMP=0x00000000000a9b9f
- (void)setProvisionalAlternateGroupID:(short)arg1;	// IMP=0x00000000000a9b70
- (void)setAlternateGroupID:(short)arg1;	// IMP=0x00000000000a9b41
- (void)setLayer:(long long)arg1;	// IMP=0x00000000000a9b10
- (void)setPreferredVolume:(float)arg1;	// IMP=0x00000000000a9adb
- (void)setMarksOutputTrackAsEnabled:(_Bool)arg1;	// IMP=0x00000000000a9aac
- (void)setExtendedLanguageTag:(id)arg1;	// IMP=0x00000000000a99e4
- (void)setLanguageCode:(id)arg1;	// IMP=0x00000000000a991c
- (_Bool)_validateLanguageCode:(id)arg1;	// IMP=0x00000000000a98a7
- (void)setNaturalSize:(struct CGSize)arg1;	// IMP=0x00000000000a9865
- (void)setMaximizePowerEfficiency:(_Bool)arg1;	// IMP=0x00000000000a9836
- (void)setExpectsMediaDataInRealTime:(_Bool)arg1;	// IMP=0x00000000000a9807
- (void)setMediaTimeScale:(int)arg1;	// IMP=0x00000000000a973d
- (void)setMetadata:(id)arg1;	// IMP=0x00000000000a970c
- (void)setTransform:(struct CGAffineTransform)arg1;	// IMP=0x00000000000a96e1
- (long long)status;	// IMP=0x00000000000a96d9
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(struct opaqueCMFormatDescription *)arg3;	// IMP=0x00000000000a94a8
- (id)initWithConfigurationState:(id)arg1;	// IMP=0x00000000000a9361

@end

