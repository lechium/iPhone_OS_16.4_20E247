//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreIDVRGBLiveness/NSObject-Protocol.h>

@class CIDVRGBAVCaptureFileOutput, NSError, NSURL;

@protocol CIDVRGBAVCaptureFileOutputDelegate <NSObject>
- (void)captureOutput:(CIDVRGBAVCaptureFileOutput *)arg1 didFinishRecordingAtURL:(NSURL *)arg2 error:(NSError *)arg3;
@end

