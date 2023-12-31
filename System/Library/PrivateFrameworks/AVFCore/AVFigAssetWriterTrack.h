//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVMediaFileType, AVWeakReference, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVFigAssetWriterTrack : NSObject
{
    AVWeakReference *_weakReference;	// 8 = 0x8
    struct OpaqueFigAssetWriter *_figAssetWriter;	// 16 = 0x10
    int _trackID;	// 24 = 0x18
    NSString *_mediaType;	// 32 = 0x20
    AVMediaFileType *_mediaFileType;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_aboveHighWaterLevelQueue;	// 48 = 0x30
    _Bool _aboveHighWaterLevel;	// 56 = 0x38
    CDStruct_1b6d18a9 _sampleBufferCoalescingInterval;	// 60 = 0x3c
    NSOperationQueue *_operationQueue;	// 88 = 0x58
}

+ (id)assetWriterTrackWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 formatSpecification:(id)arg4 sourcePixelBufferAttributes:(id)arg5 multiPass:(_Bool)arg6 attachedAdaptor:(id)arg7 error:(id *)arg8;	// IMP=0x00600000000ae3bb
@property(readonly, nonatomic) AVMediaFileType *mediaFileType; // @synthesize mediaFileType=_mediaFileType;
@property(readonly, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) int trackID; // @synthesize trackID=_trackID;
@property(readonly, nonatomic) struct OpaqueFigAssetWriter *figAssetWriter; // @synthesize figAssetWriter=_figAssetWriter;
@property(nonatomic) CDStruct_1b6d18a9 sampleBufferCoalescingInterval; // @synthesize sampleBufferCoalescingInterval=_sampleBufferCoalescingInterval;
- (int)_attachToFigAssetWriterUsingFormatSpecification:(id)arg1 sourcePixelBufferAttributes:(id)arg2 multiPass:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000000afc09
- (void)setFormatDescriptions:(id)arg1;	// IMP=0x00000000000afb99
- (void)setSampleReferenceBaseURL:(id)arg1;	// IMP=0x00000000000afb29
- (void)setMediaDataLocation:(id)arg1;	// IMP=0x00000000000af928
- (void)setPreferredChunkSize:(long long)arg1;	// IMP=0x00000000000af892
- (void)setPreferredChunkAlignment:(long long)arg1;	// IMP=0x00000000000af7fc
- (void)setPreferredChunkDuration:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000af750
- (void)setExcludeFromAutoSelection:(_Bool)arg1;	// IMP=0x00000000000af6cb
- (void)setProvisionalAlternateGroupID:(short)arg1;	// IMP=0x00000000000af635
- (void)setAlternateGroupID:(short)arg1;	// IMP=0x00000000000af59f
- (void)setLayer:(long long)arg1;	// IMP=0x00000000000af51b
- (void)setTrackVolume:(float)arg1;	// IMP=0x00000000000af481
- (void)setMarksOutputTrackAsEnabled:(_Bool)arg1;	// IMP=0x00000000000af3fc
- (void)setExtendedLanguageTag:(id)arg1;	// IMP=0x00000000000af38c
- (void)setLanguageCode:(id)arg1;	// IMP=0x00000000000af31c
- (void)setFigDimensions:(id)arg1;	// IMP=0x00000000000af2ac
- (void)setMediaTimeScale:(int)arg1;	// IMP=0x00000000000af216
- (void)setFigTrackMatrix:(id)arg1;	// IMP=0x00000000000af1a6
- (void)setFigMetadata:(id)arg1;	// IMP=0x00000000000af136
- (_Bool)markEndOfDataReturningError:(id *)arg1;	// IMP=0x00000000000af0af
- (void)prepareToEndSession;	// IMP=0x00000000000af0a9
- (void)endPassWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000aef56
- (_Bool)addPixelBuffer:(struct __CVBuffer *)arg1 atPresentationTime:(CDStruct_1b6d18a9)arg2 error:(id *)arg3;	// IMP=0x00000000000aee3e
- (_Bool)addSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(id *)arg2;	// IMP=0x00000000000aecef
- (_Bool)beginPassReturningError:(id *)arg1;	// IMP=0x00000000000aec6c
@property(readonly, getter=isAboveHighWaterLevel) _Bool aboveHighWaterLevel;
@property(readonly, nonatomic) _Bool encoderSupportsMultiPass;
- (void)_refreshAboveHighWaterLevel;	// IMP=0x00000000000ae9ca
- (void)_figAssetWriterDidDropBelowLowWaterLevelForTrackID:(int)arg1;	// IMP=0x00000000000ae992
@property(readonly, nonatomic) struct __CVPixelBufferPool *pixelBufferPool;
- (void)dealloc;	// IMP=0x00000000000ae832
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 formatSpecification:(id)arg4 sourcePixelBufferAttributes:(id)arg5 multiPass:(_Bool)arg6 error:(id *)arg7;	// IMP=0x00000000000ae4e7
- (id)init;	// IMP=0x00000000000ae4bc

@end

