//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVMomentCaptureMovieRecordingResolvedSettings, NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AVMomentCaptureMovieFileOutputDelegateWrapper
{
    NSString *_videoCodecType;	// 64 = 0x40
    NSURL *_spatialOverCaptureMovieFileURL;	// 72 = 0x48
    NSArray *_spatialOverCaptureMovieMetadata;	// 80 = 0x50
    AVMomentCaptureMovieRecordingResolvedSettings *_resolvedSettings;	// 88 = 0x58
    _Bool _didFinishWritingMovieCallbackFired;	// 96 = 0x60
    _Bool _didFinishWritingSpatialOverCaptureMovieCallbackFired;	// 97 = 0x61
}

+ (id)wrapperWithSettings:(id)arg1 delegate:(id)arg2 connections:(id)arg3;	// IMP=0x006000000000336b
@property(nonatomic) _Bool didFinishWritingSpatialOverCaptureMovieCallbackFired; // @synthesize didFinishWritingSpatialOverCaptureMovieCallbackFired=_didFinishWritingSpatialOverCaptureMovieCallbackFired;
@property(nonatomic) _Bool didFinishWritingMovieCallbackFired; // @synthesize didFinishWritingMovieCallbackFired=_didFinishWritingMovieCallbackFired;
@property(retain, nonatomic) AVMomentCaptureMovieRecordingResolvedSettings *resolvedSettings; // @synthesize resolvedSettings=_resolvedSettings;
@property(readonly) NSArray *spatialOverCaptureMovieMetadata; // @synthesize spatialOverCaptureMovieMetadata=_spatialOverCaptureMovieMetadata;
@property(readonly) NSURL *spatialOverCaptureMovieFileURL; // @synthesize spatialOverCaptureMovieFileURL=_spatialOverCaptureMovieFileURL;
@property(readonly) NSString *videoCodecType; // @synthesize videoCodecType=_videoCodecType;
- (void)dealloc;	// IMP=0x0000000000003511
- (id)initWithSettings:(id)arg1 delegate:(id)arg2 connections:(id)arg3;	// IMP=0x00000000000033b6

@end

