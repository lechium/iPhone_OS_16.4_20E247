//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreIDVRGBLiveness/PADFrameQualityMonitor-Protocol.h>

@class NSDictionary, PADFrame;

@protocol CIDVRGBImageQualityAnalyzer <PADFrameQualityMonitor>
- (void)verifyLightweightQualityForFrame:(PADFrame *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
@end

