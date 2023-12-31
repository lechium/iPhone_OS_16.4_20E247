//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface VNSmartCam5CompoundRequestGroupingConfiguration : NSObject
{
    unsigned long long _imageCropAndScaleOption;	// 8 = 0x8
    NSMutableSet *_originalRequests;	// 16 = 0x10
    NSMutableDictionary *_detectorConfigurationOptions;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001ba953
- (_Bool)preferBackgroundProcessing;	// IMP=0x00000000001ba802
- (id)processingDevice;	// IMP=0x00000000001ba79a
- (id)detectorConfigurationOptions;	// IMP=0x00000000001ba77c
- (void)setDetectorConfigurationOption:(id)arg1 value:(id)arg2;	// IMP=0x00000000001ba75d
- (id)originalRequests;	// IMP=0x00000000001ba747
- (void)addOriginalRequest:(id)arg1;	// IMP=0x00000000001ba731
- (unsigned long long)imageCropAndScaleOption;	// IMP=0x00000000001ba727
- (id)initWithImageCropAndScaleOption:(unsigned long long)arg1;	// IMP=0x00000000001ba68b

@end

