//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreIDVRGBLiveness/NSObject-Protocol.h>

@class CIDVRGBCaptureUIConfig, NSError;

@protocol CIDVRGBCaptureUICoordinator <NSObject>
- (void)finishWithError:(NSError *)arg1 completionHandler:(void (^)(void))arg2;
- (void)finishWithError:(NSError *)arg1;
- (void)startWithConfig:(CIDVRGBCaptureUIConfig *)arg1 completionHandler:(void (^)(CIDVRGBCaptureUIResult *, NSError *))arg2;
@end
