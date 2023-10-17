//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FigMetalExecutionStatus, InterceptConfig, MTLArchitecture, MTLGPUBVHBuilder, MTLTargetDeviceArchitecture, NSArray, NSDictionary, NSString;
@protocol MTLDeviceSPI;

__attribute__((visibility("hidden")))
@interface CMMTLDevice : NSObject
{
    id <MTLDeviceSPI> _device;	// 8 = 0x8
    InterceptConfig *_interceptConfig;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000007c39
@property(retain, nonatomic) InterceptConfig *interceptConfig; // @synthesize interceptConfig=_interceptConfig;
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000007b8d
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000007b3d
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000007b08
- (id)newCommandQueueWithDescriptor:(id)arg1;	// IMP=0x0000000000007ab0
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;	// IMP=0x0000000000007a7d
- (id)newCommandQueue;	// IMP=0x0000000000007a4f
@property(retain, nonatomic) FigMetalExecutionStatus *executionStatus;
- (id)initWithLevel:(int)arg1;	// IMP=0x00000000000078f8

// Remaining properties
@property(readonly, getter=isAnisoSampleFixSupported) _Bool AnisoSampleFixSupported;
@property(readonly, getter=isBCTextureCompressionSupported) _Bool BCTextureCompressionSupported;
@property(readonly, getter=isClampToHalfBorderSupported) _Bool ClampToHalfBorderSupported;
@property(readonly, getter=isCustomBorderColorSupported) _Bool CustomBorderColorSupported;
@property(readonly, getter=isFixedLinePointFillDepthGradientSupported) _Bool FixedLinePointFillDepthGradientSupported;
@property(readonly) MTLGPUBVHBuilder *GPUBVHBuilder;
@property(readonly, getter=isRGB10A2GammaSupported) _Bool RGB10A2GammaSupported;
@property(readonly, getter=isRTZRoundingSupported) _Bool RTZRoundingSupported;
@property(readonly) MTLArchitecture *architecture;
@property(readonly) unsigned long long argumentBuffersSupport;
@property(readonly, getter=areBarycentricCoordsSupported) _Bool barycentricCoordsSupported;
@property(readonly) unsigned long long bufferRobustnessSupport;
@property(nonatomic) unsigned long long commandBufferErrorOptions;
@property(readonly) NSArray *counterSets;
@property(readonly) unsigned long long currentAllocatedSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long dedicatedMemorySize;
@property(readonly) long long defaultTextureWriteRoundingMode;
@property(readonly, getter=isDepth24Stencil8PixelFormatSupported) _Bool depth24Stencil8PixelFormatSupported;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long deviceCreationFlags;
@property(readonly) unsigned long long deviceLinearReadOnlyTextureAlignmentBytes;
@property(readonly) unsigned long long deviceLinearTextureAlignmentBytes;
@property(readonly) unsigned long long doubleFPConfig;
@property(readonly) unsigned long long featureProfile;
@property(readonly, getter=isFloat32FilteringSupported) _Bool float32FilteringSupported;
@property(getter=areGPUAssertionsEnabled, setter=setGPUAssertionsEnabled:) _Bool gpuAssertionsEnabled;
@property(readonly) unsigned long long halfFPConfig;
@property(readonly) _Bool hasUnifiedMemory;
@property(readonly) unsigned long long hash;
@property(readonly, getter=isHeadless) _Bool headless;
@property(readonly) struct IndirectArgumentBufferCapabilities indirectArgumentBufferCapabilities;
@property(readonly) unsigned long long iosurfaceReadOnlyTextureAlignmentBytes;
@property(readonly) unsigned long long iosurfaceTextureAlignmentBytes;
@property(readonly, getter=isLargeMRTSupported) _Bool largeMRTSupported;
@property(readonly) const CDStruct_1825b841 *limits;
@property(readonly) unsigned long long linearTextureAlignmentBytes;
@property(readonly) unsigned long long linearTextureArrayAlignmentBytes;
@property(readonly) unsigned long long linearTextureArrayAlignmentSlice;
@property(readonly, getter=isLowPower) _Bool lowPower;
@property(readonly) unsigned long long maxArgumentBufferSamplerCount;
@property(readonly) unsigned long long maxBufferLength;
@property(readonly) unsigned long long maxColorAttachments;
@property(readonly) unsigned long long maxComputeAttributes;
@property(readonly) unsigned long long maxComputeBuffers;
@property(readonly) unsigned long long maxComputeInlineDataSize;
@property(readonly) unsigned long long maxComputeLocalMemorySizes;
@property(readonly) unsigned long long maxComputeSamplers;
@property(readonly) unsigned long long maxComputeTextures;
@property(readonly) unsigned long long maxComputeThreadgroupMemory;
@property(readonly) unsigned long long maxComputeThreadgroupMemoryAlignmentBytes;
@property(readonly) unsigned long long maxConcurrentExecutingCompilationTasks;
@property(readonly) unsigned long long maxConstantBufferArguments;
@property(readonly) unsigned long long maxCustomSamplePositions;
@property(readonly) unsigned long long maxFenceInstances;
@property(readonly) unsigned long long maxFragmentBuffers;
@property(readonly) unsigned long long maxFragmentInlineDataSize;
@property(readonly) unsigned long long maxFragmentSamplers;
@property(readonly) unsigned long long maxFragmentTextures;
@property(readonly) unsigned long long maxFramebufferStorageBits;
@property(readonly) unsigned long long maxFunctionConstantIndices;
@property(readonly) unsigned long long maxIndirectBuffers;
@property(readonly) unsigned long long maxIndirectSamplers;
@property(readonly) unsigned long long maxIndirectSamplersPerDevice;
@property(readonly) unsigned long long maxIndirectTextures;
@property(readonly) unsigned long long maxInterpolants;
@property(readonly) unsigned long long maxInterpolatedComponents;
@property(readonly) float maxLineWidth;
@property(readonly) float maxPointSize;
@property(readonly) unsigned long long maxPredicatedNestingDepth;
@property(readonly) unsigned long long maxRasterizationRateLayerCount;
@property(readonly) unsigned long long maxTessellationFactor;
@property(readonly) unsigned long long maxTextureBufferWidth;
@property(readonly) unsigned long long maxTextureDepth3D;
@property(readonly) unsigned long long maxTextureDimensionCube;
@property(readonly) unsigned long long maxTextureHeight2D;
@property(readonly) unsigned long long maxTextureHeight3D;
@property(readonly) unsigned long long maxTextureLayers;
@property(readonly) unsigned long long maxTextureWidth1D;
@property(readonly) unsigned long long maxTextureWidth2D;
@property(readonly) unsigned long long maxTextureWidth3D;
@property(readonly) unsigned long long maxThreadgroupMemoryLength;
@property(readonly) CDStruct_14f26992 maxThreadsPerThreadgroup;
@property(readonly) unsigned long long maxTileBuffers;
@property(readonly) unsigned long long maxTileInlineDataSize;
@property(readonly) unsigned long long maxTileSamplers;
@property(readonly) unsigned long long maxTileTextures;
@property(readonly) unsigned long long maxTotalComputeThreadsPerThreadgroup;
@property(readonly) unsigned long long maxVertexAmplificationCount;
@property(readonly) unsigned long long maxVertexAmplificationFactor;
@property(readonly) unsigned long long maxVertexAttributes;
@property(readonly) unsigned long long maxVertexBuffers;
@property(readonly) unsigned long long maxVertexInlineDataSize;
@property(readonly) unsigned long long maxVertexSamplers;
@property(readonly) unsigned long long maxVertexTextures;
@property(readonly) unsigned long long maxViewportCount;
@property(readonly) unsigned long long maxVisibilityQueryOffset;
@property(nonatomic) _Bool metalAssertionsEnabled;
@property(readonly) unsigned long long minBufferNoCopyAlignmentBytes;
@property(readonly) unsigned long long minConstantBufferAlignmentBytes;
@property(readonly) unsigned long long minTilePixels;
@property(readonly, getter=isMsaa32bSupported) _Bool msaa32bSupported;
@property(readonly) NSString *name;
@property(readonly, getter=isPlacementHeapSupported) _Bool placementHeapSupported;
@property(copy, nonatomic) NSDictionary *pluginData;
@property(readonly, getter=areProgrammableSamplePositionsSupported) _Bool programmableSamplePositionsSupported;
@property(readonly, getter=isQuadDataSharingSupported) _Bool quadDataSharingSupported;
@property(readonly, getter=areRasterOrderGroupsSupported) _Bool rasterOrderGroupsSupported;
@property(readonly) unsigned long long readWriteTextureSupport;
@property(readonly) unsigned long long recommendedMaxWorkingSetSize;
@property(readonly) unsigned long long registryID;
@property(readonly, getter=isRemovable) _Bool removable;
@property(readonly) _Bool requiresRaytracingEmulation;
@property _Bool shaderDebugInfoCaching;
@property(readonly) unsigned long long sharedMemorySize;
@property(readonly) unsigned long long simulatorHostFeatureProfile;
@property(readonly) unsigned long long singleFPConfig;
@property(readonly) unsigned long long sparseTexturesSupport;
@property(readonly) unsigned long long sparseTileSizeInBytes;
@property(readonly) Class superclass;
@property(readonly) _Bool supportPriorityBand;
@property(readonly, nonatomic) _Bool supports2DLinearTexArraySPI;
@property(readonly, nonatomic) _Bool supports32BitFloatFiltering;
@property(readonly, nonatomic) _Bool supports32BitMSAA;
@property(readonly, nonatomic) _Bool supports32bpcMSAATextures;
@property(readonly, nonatomic) _Bool supports3DASTCTextures;
@property(readonly, nonatomic) _Bool supports3DBCTextures;
@property(readonly, nonatomic) _Bool supportsASTCHDRTextureCompression;
@property(readonly, nonatomic) _Bool supportsASTCTextureCompression;
@property(readonly, nonatomic) _Bool supportsAlphaYUVFormats;
@property(readonly, nonatomic) _Bool supportsAnisoSampleFix;
@property(readonly, nonatomic) _Bool supportsArgumentBuffersTier2;
@property(readonly, nonatomic) _Bool supportsArrayOfSamplers;
@property(readonly, nonatomic) _Bool supportsArrayOfTextures;
@property(readonly, nonatomic) _Bool supportsAtomicUlongVoidMinMax;
@property(readonly, nonatomic) _Bool supportsBCTextureCompression;
@property(readonly, nonatomic) _Bool supportsBGR10A2;
@property(readonly, nonatomic) _Bool supportsBaseVertexInstanceDrawing;
@property(readonly, nonatomic) _Bool supportsBfloat16Format;
@property(readonly, nonatomic) _Bool supportsBinaryArchives;
@property(readonly, nonatomic) _Bool supportsBinaryLibraries;
@property(readonly, nonatomic) _Bool supportsBlackOrWhiteSamplerBorderColors;
@property(readonly, nonatomic) _Bool supportsBufferBoundsChecking;
@property(readonly, nonatomic) _Bool supportsBufferPrefetchStatistics;
@property(readonly, nonatomic) _Bool supportsBufferWithIOSurface;
@property(readonly, nonatomic) _Bool supportsBufferlessClientStorageTexture;
@property(readonly, nonatomic) _Bool supportsCMPIndirectCommandBuffers;
@property(readonly, nonatomic) _Bool supportsCombinedMSAAStoreAndResolveAction;
@property(readonly, nonatomic) _Bool supportsCommandBufferJump;
@property(readonly, nonatomic) _Bool supportsCompressedTextureViewSPI;
@property(readonly, nonatomic) _Bool supportsComputeCompressedTextureWrite;
@property(readonly, nonatomic) _Bool supportsComputeMemoryBarrier;
@property(readonly, nonatomic) _Bool supportsConcurrentComputeDispatch;
@property(readonly, nonatomic) _Bool supportsCountingOcclusionQuery;
@property(readonly, nonatomic) _Bool supportsCustomBorderColor;
@property(readonly, nonatomic) _Bool supportsDeadlineProfile;
@property(readonly, nonatomic) _Bool supportsDepthClipMode;
@property(readonly, nonatomic) _Bool supportsDepthClipModeClampExtended;
@property(readonly, nonatomic) _Bool supportsDevicePartitioning;
@property(readonly, nonatomic) _Bool supportsDynamicControlPointCount;
@property(readonly, nonatomic) _Bool supportsDynamicLibraries;
@property(readonly, nonatomic) _Bool supportsExplicitVisibilityGroups;
@property(readonly, nonatomic) _Bool supportsExtendedVertexFormats;
@property(readonly, nonatomic) _Bool supportsExtendedXR10Formats;
@property(readonly, nonatomic) _Bool supportsExtendedYUVFormats;
@property(readonly, nonatomic) _Bool supportsFP32TessFactors;
@property(readonly, nonatomic) _Bool supportsFastMathInfNaNPropagation;
@property(readonly, nonatomic) _Bool supportsFillTexture;
@property(readonly, nonatomic) _Bool supportsFixedLinePointFillDepthGradient;
@property(readonly, nonatomic) _Bool supportsFloat16BCubicFiltering;
@property(readonly, nonatomic) _Bool supportsFloat16InfNanFiltering;
@property(readonly, nonatomic) _Bool supportsForceSeamsOnCubemaps;
@property(readonly, nonatomic) _Bool supportsForkJoin;
@property(readonly, nonatomic) _Bool supportsFragmentBufferWrites;
@property(readonly, nonatomic) _Bool supportsFragmentOnlyEncoders;
@property(readonly, nonatomic) _Bool supportsFunctionPointers;
@property(readonly, nonatomic) _Bool supportsFunctionPointersFromMesh;
@property(readonly, nonatomic) _Bool supportsFunctionPointersFromRender;
@property(readonly, nonatomic) _Bool supportsGFXIndirectCommandBuffers;
@property(readonly, nonatomic) _Bool supportsGPUStatistics;
@property(readonly, nonatomic) _Bool supportsGlobalVariableRelocation;
@property(readonly, nonatomic) _Bool supportsGlobalVariableRelocationCompute;
@property(readonly, nonatomic) _Bool supportsGlobalVariableRelocationRender;
@property(readonly, nonatomic) _Bool supportsHeapAccelerationStructureAllocation;
@property(readonly, nonatomic) _Bool supportsIABHashForTools;
@property(readonly, nonatomic) _Bool supportsImageBlockSampleCoverageControl;
@property(readonly, nonatomic) _Bool supportsImageBlocks;
@property(readonly, nonatomic) _Bool supportsIndirectDrawAndDispatch;
@property(readonly, nonatomic) _Bool supportsIndirectStageInRegion;
@property(readonly, nonatomic) _Bool supportsIndirectTessellation;
@property(readonly, nonatomic) _Bool supportsIndirectTextures;
@property(readonly, nonatomic) _Bool supportsIndirectWritableTextures;
@property(readonly, nonatomic) _Bool supportsInt64;
@property(readonly, nonatomic) _Bool supportsInterchangeTiled;
@property(readonly, nonatomic) _Bool supportsInvariantVertexPosition;
@property(readonly, nonatomic) _Bool supportsLargeFramebufferConfigs;
@property(readonly, nonatomic) _Bool supportsLateEvalEvent;
@property(readonly, nonatomic) _Bool supportsLayeredRendering;
@property(readonly, nonatomic) _Bool supportsLimitedYUVFormats;
@property(readonly, nonatomic) _Bool supportsLinearTexture2DArray;
@property(readonly, nonatomic) _Bool supportsLinearTextureFromSharedBuffer;
@property(readonly, nonatomic) _Bool supportsLossyCompression;
@property(readonly, nonatomic) _Bool supportsMSAADepthResolve;
@property(readonly, nonatomic) _Bool supportsMSAADepthResolveFilter;
@property(readonly, nonatomic) _Bool supportsMSAAStencilResolve;
@property(readonly, nonatomic) _Bool supportsMSAAStencilResolveFilter;
@property(readonly, nonatomic) _Bool supportsMemoryOrderAtomics;
@property(readonly, nonatomic) _Bool supportsMemorylessRenderTargets;
@property(readonly, nonatomic) _Bool supportsMeshShaders;
@property(readonly, nonatomic) _Bool supportsMeshShadersInICB;
@property(readonly, nonatomic) _Bool supportsMipLevelsSmallerThanBlockSize;
@property(readonly, nonatomic) _Bool supportsMirrorClampToEdgeSamplerMode;
@property(readonly, nonatomic) _Bool supportsMutableTier1ArgumentBuffers;
@property(readonly, nonatomic) _Bool supportsNativeHardwareFP16;
@property(readonly, nonatomic) _Bool supportsNonPrivateDepthStencilTextures;
@property(readonly, nonatomic) _Bool supportsNonPrivateMSAATextures;
@property(readonly, nonatomic) _Bool supportsNonSquareTileShaders;
@property(readonly, nonatomic) _Bool supportsNonUniformThreadgroupSize;
@property(readonly, nonatomic) _Bool supportsNonZeroTextureWriteLOD;
@property(readonly, nonatomic) _Bool supportsNorm16BCubicFiltering;
@property(readonly, nonatomic) _Bool supportsOpenCLTextureWriteSwizzles;
@property(readonly, nonatomic) _Bool supportsPacked32TextureBufferWrites;
@property(readonly, nonatomic) _Bool supportsPipelineLibraries;
@property(readonly, nonatomic) _Bool supportsPlacementHeaps;
@property(readonly, nonatomic) _Bool supportsPostDepthCoverage;
@property(readonly, nonatomic) _Bool supportsPrimitiveMotionBlur;
@property(readonly, nonatomic) _Bool supportsPrimitiveRestartOverride;
@property(readonly, nonatomic) _Bool supportsProgrammableBlending;
@property(readonly, nonatomic) _Bool supportsProgrammableSamplePositions;
@property(readonly, nonatomic) _Bool supportsPublicXR10Formats;
@property(readonly, nonatomic) _Bool supportsPullModelInterpolation;
@property(readonly, nonatomic) _Bool supportsQuadGroup;
@property(readonly, nonatomic) _Bool supportsQuadReduction;
@property(readonly, nonatomic) _Bool supportsQuadShufflesAndBroadcast;
@property(readonly, nonatomic) _Bool supportsQueryTextureLOD;
@property(readonly, nonatomic) _Bool supportsRGBA10A2Gamma;
@property(readonly, nonatomic) _Bool supportsRTZRounding;
@property(readonly, nonatomic) _Bool supportsRasterOrderGroups;
@property(readonly, nonatomic) _Bool supportsRasterOrderGroupsColorAttachment;
@property(readonly, nonatomic) _Bool supportsRayTracingAccelerationStructureCPUDeserialization;
@property(readonly, nonatomic) _Bool supportsRayTracingBuffersFromTables;
@property(readonly, nonatomic) _Bool supportsRayTracingExtendedVertexFormats;
@property(readonly, nonatomic) _Bool supportsRayTracingICBs;
@property(readonly, nonatomic) _Bool supportsRayTracingPerPrimitiveData;
@property(readonly) _Bool supportsRaytracing;
@property(readonly, nonatomic) _Bool supportsRaytracingFromRender;
@property(readonly, nonatomic) _Bool supportsReadWriteBufferArguments;
@property(readonly, nonatomic) _Bool supportsReadWriteTextureArguments;
@property(readonly, nonatomic) _Bool supportsReadWriteTextureArgumentsTier2;
@property(readonly, nonatomic) _Bool supportsReadWriteTextureCubeArguments;
@property(readonly, nonatomic) _Bool supportsRelaxedTextureViewRequirements;
@property(readonly, nonatomic) _Bool supportsRenderDynamicLibraries;
@property(readonly, nonatomic) _Bool supportsRenderMemoryBarrier;
@property(readonly, nonatomic) _Bool supportsRenderPassWithoutRenderTarget;
@property(readonly, nonatomic) _Bool supportsRenderTargetTextureRotation;
@property(readonly, nonatomic) _Bool supportsRenderTextureWrites;
@property(readonly, nonatomic) _Bool supportsRenderToLinearTextures;
@property(readonly, nonatomic) _Bool supportsSIMDGroup;
@property(readonly, nonatomic) _Bool supportsSIMDGroupMatrix;
@property(readonly, nonatomic) _Bool supportsSIMDReduction;
@property(readonly, nonatomic) _Bool supportsSIMDShuffleAndFill;
@property(readonly, nonatomic) _Bool supportsSIMDShufflesAndBroadcast;
@property(readonly, nonatomic) _Bool supportsSRGBwrites;
@property(readonly, nonatomic) _Bool supportsSamplerAddressModeClampToHalfBorder;
@property(readonly, nonatomic) _Bool supportsSamplerCompareFunction;
@property(readonly, nonatomic) _Bool supportsSeparateDepthStencil;
@property(readonly, nonatomic) _Bool supportsSeparateVisibilityAndShadingRate;
@property(readonly, nonatomic) _Bool supportsSetThreadgroupPackingDisabled;
@property(readonly, nonatomic) _Bool supportsShaderBarycentricCoordinates;
@property(readonly, nonatomic) _Bool supportsShaderLODAverage;
@property(readonly, nonatomic) _Bool supportsShaderMinLODClamp;
@property(readonly, nonatomic) _Bool supportsSharedFunctionTables;
@property(readonly, nonatomic) _Bool supportsSharedStorageHeapResources;
@property(readonly, nonatomic) _Bool supportsSharedStorageTextures;
@property(readonly, nonatomic) _Bool supportsSharedTextureHandles;
@property(readonly, nonatomic) _Bool supportsSparseDepthAttachments;
@property(readonly, nonatomic) _Bool supportsSparseHeaps;
@property(readonly, nonatomic) _Bool supportsSparseTextures;
@property(readonly, nonatomic) _Bool supportsStackOverflowErrorCode;
@property(readonly, nonatomic) _Bool supportsStatefulDynamicLibraries;
@property(readonly, nonatomic) _Bool supportsStencilFeedback;
@property(readonly, nonatomic) _Bool supportsStreamingCodecSignaling;
@property(readonly, nonatomic) _Bool supportsTLS;
@property(readonly, nonatomic) _Bool supportsTessellation;
@property(readonly, nonatomic) _Bool supportsTexture2DMultisampleArray;
@property(readonly, nonatomic) _Bool supportsTextureCubeArray;
@property(readonly, nonatomic) _Bool supportsTextureOutOfBoundsReads;
@property(readonly, nonatomic) _Bool supportsTextureSwizzle;
@property(readonly, nonatomic) _Bool supportsTileShaders;
@property(readonly, nonatomic) _Bool supportsUnalignedVertexFetch;
@property(readonly, nonatomic) _Bool supportsVariableRateRasterization;
@property(readonly, nonatomic) _Bool supportsVertexAmplification;
@property(readonly, nonatomic) _Bool supportsViewportAndScissorArray;
@property(readonly, nonatomic) _Bool supportsWritableArrayOfTextures;
@property(readonly, nonatomic) _Bool supportsYCBCRFormats;
@property(readonly, nonatomic) _Bool supportsYCBCRFormats12;
@property(readonly, nonatomic) _Bool supportsYCBCRFormatsPQ;
@property(readonly, nonatomic) _Bool supportsYCBCRFormatsXR;
@property(readonly, nonatomic) _Bool supportsYCBCRPackedFormats12;
@property(readonly, nonatomic) _Bool supportsYCBCRPackedFormatsPQ;
@property(readonly, nonatomic) _Bool supportsYCBCRPackedFormatsXR;
@property(readonly) MTLTargetDeviceArchitecture *targetDeviceArchitecture;
@property(readonly) const struct MTLTargetDeviceArch *targetDeviceInfo;

@end
