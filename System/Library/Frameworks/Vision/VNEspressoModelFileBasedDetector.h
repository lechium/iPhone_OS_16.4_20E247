//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNEspressoResources;

__attribute__((visibility("hidden")))
@interface VNEspressoModelFileBasedDetector
{
    VNEspressoResources *_espressoResources;	// 16 = 0x10
    unsigned long long _networkRequiredInputImageWidth;	// 24 = 0x18
    unsigned long long _networkRequiredInputImageHeight;	// 32 = 0x20
    unsigned long long _inputImageAspectRatioHandling;	// 40 = 0x28
}

+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)arg1;	// IMP=0x000000000022269b
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg1;	// IMP=0x0000000000222693
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;	// IMP=0x000000000022268b
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;	// IMP=0x0000000000222683
+ (id)supportedImageSizeSetForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002224ca
+ (id)keyForDetectorWithConfigurationOptions:(id)arg1;	// IMP=0x000000000022238f
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x000000000022232c
- (void).cxx_destruct;	// IMP=0x0000000000223458
@property(readonly, nonatomic) unsigned long long inputImageAspectRatioHandling; // @synthesize inputImageAspectRatioHandling=_inputImageAspectRatioHandling;
@property(readonly, nonatomic) unsigned long long networkRequiredInputImageHeight; // @synthesize networkRequiredInputImageHeight=_networkRequiredInputImageHeight;
@property(readonly, nonatomic) unsigned long long networkRequiredInputImageWidth; // @synthesize networkRequiredInputImageWidth=_networkRequiredInputImageWidth;
@property(readonly, nonatomic) VNEspressoResources *espressoResources; // @synthesize espressoResources=_espressoResources;
- (_Bool)executePlanAndReturnError:(id *)arg1;	// IMP=0x000000000022336a
- (_Bool)bindPixelBuffer:(struct __CVBuffer *)arg1 toNetworkBlobName:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000223256
- (_Bool)bindLockedPixelBuffer:(struct __CVBuffer *)arg1 toNetworkInputBlobName:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000223137
- (_Bool)_bindBuffer:(CDStruct_0a65202a *)arg1 toNetworkBlobName:(id)arg2 bindMode:(int)arg3 error:(id *)arg4;	// IMP=0x0000000000223010
- (_Bool)bindBuffer:(CDStruct_0a65202a *)arg1 toNetworkOutputBlobName:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000222ff5
- (_Bool)bindBuffer:(CDStruct_0a65202a *)arg1 toNetworkInputBlobName:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000222fda
- (_Bool)getWidth:(unsigned long long *)arg1 height:(unsigned long long *)arg2 ofEspressoModelNetworkBlobNamed:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000222e29
- (int)espressoModelNetworkLayersStorageTypeForConfigurationOptions:(id)arg1;	// IMP=0x0000000000222daa
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000222d0f
- (_Bool)_loadEspressoModelWithConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002227b6

@end

