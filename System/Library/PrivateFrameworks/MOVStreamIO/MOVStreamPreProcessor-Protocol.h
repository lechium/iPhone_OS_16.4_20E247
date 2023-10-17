//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MOVStreamIO/NSObject-Protocol.h>

@protocol MOVStreamPreProcessor <NSObject>
- (unsigned int)encodedPixelFormatFromStreamData:(struct StreamRecordingData *)arg1;
- (unsigned int)inputPixelFormatFromStreamData:(struct StreamRecordingData *)arg1;
- (const struct opaqueCMFormatDescription *)formatDescriptionForPixelBuffer:(struct __CVBuffer *)arg1 streamData:(struct StreamRecordingData *)arg2;
- (const struct opaqueCMFormatDescription *)createTrackFormatDescriptionFromStreamData:(struct StreamRecordingData *)arg1;
- (struct __CVBuffer *)processedPixelBufferCopyOf:(struct __CVBuffer *)arg1 streamData:(struct StreamRecordingData *)arg2 error:(id *)arg3;
@end
