//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNPersonSegmentationGeneratorInstanceBased4People
{
    struct unordered_map<NSString *, espresso_buffer_t, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, espresso_buffer_t>>> _espressoConfidencesOutputBuffer;	// 16 = 0x10
}

+ (_Bool)inputMaskRequired;	// IMP=0x00600000000233cb
+ (_Bool)rotateImageToMatchNetworkOrientation;	// IMP=0x00600000000233c3
+ (id)outputConfidenceBlobNames;	// IMP=0x00600000000233b6
+ (id)outputMaskBlobNameToRequestKey;	// IMP=0x0060000000023386
+ (id)outputMaskBlobNames;	// IMP=0x0060000000023356
+ (id)inputMaskBlobName;	// IMP=0x006000000002334e
+ (id)inputImageBlobName;	// IMP=0x006000000002332f
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;	// IMP=0x006000000002330d
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;	// IMP=0x0060000000023300
- (id).cxx_construct;	// IMP=0x0000000000023cb9
- (void).cxx_destruct;	// IMP=0x0000000000023ca8
- (void)initializeOutputConfidenceBuffers:(void *)arg1;	// IMP=0x000000000002397e
- (_Bool)bindOutputConfidenceBuffersAndReturnError:(id *)arg1;	// IMP=0x00000000000237ee
- (float)maskConfidenceForOutputMaskBlobName:(id)arg1;	// IMP=0x00000000000235d5

@end

