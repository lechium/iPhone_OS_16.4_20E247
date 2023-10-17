//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetTrack;

__attribute__((visibility("hidden")))
@interface VCPVideoTrackDecoder : NSObject
{
    AVAssetTrack *_track;	// 8 = 0x8
}

+ (CDStruct_1ef3fb1f)decodeDimensionsForTrack:(id)arg1;	// IMP=0x006000000019a032
- (void).cxx_destruct;	// IMP=0x000000000019a79b
- (struct opaqueCMSampleBuffer *)getNextCaptureSampleBuffer;	// IMP=0x000000000019a75a
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;	// IMP=0x000000000019a719
- (long long)status;	// IMP=0x000000000019a6d8
- (_Bool)validateDecodedFrame:(struct __CVBuffer *)arg1 withSettings:(id)arg2;	// IMP=0x000000000019a509
- (id)settings;	// IMP=0x000000000019a320
- (id)initWithTrack:(id)arg1;	// IMP=0x000000000019a15a
- (id)init;	// IMP=0x000000000019a14c

@end
