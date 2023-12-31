//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, LPImage, NSURL;

__attribute__((visibility("hidden")))
@interface LPAnimatedImageTranscoder : NSObject
{
    LPImage *_sourceImage;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    struct CGImageSource *_imageSource;	// 24 = 0x18
    NSURL *_outputURL;	// 32 = 0x20
    unsigned long long _frameCount;	// 40 = 0x28
    unsigned long long _currentFrame;	// 48 = 0x30
    double _nextFrameTime;	// 56 = 0x38
    AVAssetWriterInputPixelBufferAdaptor *_adaptor;	// 64 = 0x40
    AVAssetWriter *_writer;	// 72 = 0x48
    AVAssetWriterInput *_input;	// 80 = 0x50
    _Bool _stopEncoding;	// 88 = 0x58
    _Bool _hasReadyForDataObserver;	// 89 = 0x59
    unsigned int _loggingID;	// 92 = 0x5c
}

+ (id)encodeQueue;	// IMP=0x00600000000b29bd
- (void).cxx_destruct;	// IMP=0x00000000000b3d44
- (void)cancel;	// IMP=0x00000000000b3cb3
- (void)encodeNextFrame;	// IMP=0x00000000000b35fd
- (void)encodeUntilNotReadyForMoreMediaData;	// IMP=0x00000000000b357a
- (void)removeReadyForDataObserverIfNeeded;	// IMP=0x00000000000b3511
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000b345a
- (void)failed;	// IMP=0x00000000000b33ce
- (void)_transcodeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b2b12
- (void)transcodeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b2a40
- (id)initWithAnimatedImage:(id)arg1;	// IMP=0x00000000000b292e

@end

