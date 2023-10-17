//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTKTextureLoader, NSMutableArray, SCNMTLBufferAllocator, SCNMTLLibraryManager, SCNMTLShadableKey, SCNMTLShaderBindingsGenerator;
@protocol MTLCommandQueue, MTLDepthStencilState, MTLDevice, MTLTexture;

__attribute__((visibility("hidden")))
@interface SCNMTLResourceManager : NSObject
{
    id <MTLDevice> _device;	// 8 = 0x8
    id <MTLCommandQueue> _commandQueue;	// 16 = 0x10
    struct __C3DEngineStats *__engineStats;	// 24 = 0x18
    SCNMTLLibraryManager *_libraryManager;	// 32 = 0x20
    SCNMTLShaderBindingsGenerator *_bindingsGenerator;	// 40 = 0x28
    struct __CFDictionary *_availablePipelineStates;	// 48 = 0x30
    struct os_unfair_lock_s _availablePipelineStatesLock;	// 56 = 0x38
    SCNMTLBufferAllocator *_commonProfileBuffersAllocator;	// 64 = 0x40
    CDStruct_670bd187 _availableLightingSystemReflectionProbeTextures;	// 72 = 0x48
    CDStruct_670bd187 _availableIrradianceTextures;	// 88 = 0x58
    CDStruct_670bd187 _availableRadianceTextures;	// 104 = 0x68
    CDStruct_670bd187 _availableImages;	// 120 = 0x78
    CDStruct_670bd187 _availableImageProxy;	// 136 = 0x88
    CDStruct_670bd187 _availableSamplers;	// 152 = 0x98
    CDStruct_670bd187 _availableIESTextures;	// 168 = 0xa8
    CDStruct_670bd187 _availableBuffers;	// 184 = 0xb8
    CDStruct_670bd187 _availableMeshes;	// 200 = 0xc8
    CDStruct_670bd187 _availableMeshSources;	// 216 = 0xd8
    CDStruct_670bd187 _availableMeshElements;	// 232 = 0xe8
    CDStruct_670bd187 _availableRasterizerStates;	// 248 = 0xf8
    CDStruct_670bd187 _availableMorphs;	// 264 = 0x108
    CDStruct_670bd187 _availableSkins;	// 280 = 0x118
    CDStruct_670bd187 _availableComputePipelines;	// 296 = 0x128
    CDStruct_670bd187 _availableComputePipelinesWithStageDescriptor;	// 312 = 0x138
    CDStruct_670bd187 _availableColorMatchingComputePipelines;	// 328 = 0x148
    CDStruct_670bd187 _availableTessellators;	// 344 = 0x158
    CDStruct_670bd187 _availableWireframeMaterials;	// 360 = 0x168
    CDStruct_670bd187 _availableShadables;	// 376 = 0x178
    SCNMTLShadableKey *_availableShadablesSearchKey;	// 392 = 0x188
    NSMutableArray *_availableStageDescriptors;	// 400 = 0x190
    struct os_unfair_lock_s _stageDescriptorsLock;	// 408 = 0x198
    id _nullStageDescriptor;	// 416 = 0x1a0
    id <MTLTexture> _areaLightPrecomputedDataTexture;	// 424 = 0x1a8
    id <MTLTexture> _specularDFGTexture;	// 432 = 0x1b0
    struct __C3DFXMetalProgram *_defaultProgram;	// 440 = 0x1b8
    struct __C3DFXMetalProgram *_defaultProgramForTessellation;	// 448 = 0x1c0
    struct __C3DFXMetalProgram *_isolateProgram;	// 456 = 0x1c8
    id <MTLDepthStencilState> _depthAndStencilStateWithReadWriteDepthDisabled;	// 464 = 0x1d0
    id <MTLTexture> _defaultTexture;	// 472 = 0x1d8
    id <MTLTexture> _defaultTexture3D;	// 480 = 0x1e0
    id <MTLTexture> _defaultCubeTexture;	// 488 = 0x1e8
    id <MTLTexture> _defaultLightingEnvironmentIrradianceTexture;	// 496 = 0x1f0
    id <MTLTexture> _defaultLightingEnvironmentRadianceTexture;	// 504 = 0x1f8
    MTKTextureLoader *_mtkTextureLoader;	// 512 = 0x200
}

+ (void)_fillVertexDescriptor:(id)arg1 withMeshSource:(struct __C3DMeshSource *)arg2 semantic:(BOOL)arg3 inputSet:(long long)arg4 bufferIndex:(long long)arg5;	// IMP=0x0060000000089ec7
+ (void)unregisterManagerForDevice:(id)arg1;	// IMP=0x0060000000087a1d
+ (id)resourceManagerForDevice:(id)arg1;	// IMP=0x00600000000878ff
@property(readonly, nonatomic) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property(readonly, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
@property(retain, nonatomic) SCNMTLLibraryManager *libraryManager; // @synthesize libraryManager=_libraryManager;
- (void)commandBufferDidCompleteWithError:(id)arg1;	// IMP=0x000000000008d3e8
- (id)depthAndStencilStateWithReadWriteDepthDisabled;	// IMP=0x000000000008d30b
- (struct __C3DEngineStats *)stats;	// IMP=0x000000000008d301
- (void)flush;	// IMP=0x000000000008d2fb
- (void)dispatchForCubemap:(id)arg1 computeEncoder:(id)arg2 pipelineState:(id)arg3;	// IMP=0x000000000008d1fd
- (void)dispatchForTexture:(id)arg1 computeEncoder:(id)arg2 pipelineState:(id)arg3;	// IMP=0x000000000008d0ed
- (id)renderResourceForSampler:(struct __C3DTextureSampler *)arg1;	// IMP=0x000000000008cf11
- (id)renderResourceForMaterial:(struct __C3DMaterial *)arg1 geometry:(struct __C3DGeometry *)arg2 renderPipeline:(id)arg3 engineContext:(struct __C3DEngineContext *)arg4;	// IMP=0x000000000008b2d6
- (id)newIndexBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000008b22f
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000008b1fb
- (id)newPrivateBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 blitEncoder:(id)arg3;	// IMP=0x000000000008b159
- (id)newBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000008b125
- (id)newConstantBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000008b0f1
- (id)wireframeResourceForRendererElement:(struct __C3DRendererElement *)arg1 engineContext:(struct __C3DEngineContext *)arg2 passInstance:(struct __C3DFXPassInstance *)arg3 hashPass:(unsigned long long)arg4;	// IMP=0x000000000008ae8e
- (id)renderResourceForTessellatedGeometry:(struct __C3DGeometry *)arg1;	// IMP=0x000000000008ade7
- (id)renderResourceForSkinner:(struct __C3DSkinner *)arg1 baseMesh:(struct __C3DMesh *)arg2 baseGeometry:(struct __C3DGeometry *)arg3;	// IMP=0x000000000008ad21
- (id)renderResourceForMorph:(struct __C3DMorph *)arg1 baseGeometry:(struct __C3DGeometry *)arg2;	// IMP=0x000000000008aaae
- (id)renderResourceForMesh:(struct __C3DMesh *)arg1 dataKind:(unsigned char)arg2;	// IMP=0x000000000008a432
- (void)__updateMutableMesh:(struct __C3DMesh *)arg1 withMetalMesh:(id)arg2;	// IMP=0x000000000008a1d0
- (id)renderResourceForMeshElement:(struct __C3DMeshElement *)arg1;	// IMP=0x0000000000089cc8
- (id)renderResourceForMeshSource:(struct __C3DMeshSource *)arg1;	// IMP=0x0000000000089b8e
- (id)_bufferForData:(struct __CFData *)arg1 bytesPerIndex:(unsigned long long)arg2;	// IMP=0x000000000008997c
- (id)_bufferForMTLBuffer:(void *)arg1;	// IMP=0x00000000000898a9
- (id)renderResourceForRasterizerState:(struct __C3DRasterizerStates *)arg1 reverseZ:(_Bool)arg2;	// IMP=0x00000000000895d3
- (void)resetRasterizerStates;	// IMP=0x0000000000089571
- (void)removeAllShaders;	// IMP=0x0000000000089548
- (void)_geometryWillDie:(id)arg1;	// IMP=0x00000000000892ae
- (void)_materialWillDie:(id)arg1;	// IMP=0x0000000000089033
- (void)_passWillDie:(id)arg1;	// IMP=0x0000000000088da7
- (void)_programWillDie:(id)arg1;	// IMP=0x0000000000088b03
- (void)_removeMatchingProgram:(struct __C3DFXMetalProgram *)arg1 pass:(struct __C3DFXPass *)arg2;	// IMP=0x00000000000889c4
- (void)_rasterizerStateDidDie:(const void *)arg1;	// IMP=0x00000000000889ab
- (void)_precomputedLightingEnvironmentWillDie:(id)arg1;	// IMP=0x0000000000088912
- (void)_imageProxyWillDie:(id)arg1;	// IMP=0x0000000000088899
- (void)_imageWillDie:(id)arg1;	// IMP=0x0000000000088744
- (void)_skinWillDie:(id)arg1;	// IMP=0x00000000000886ec
- (void)_programHashCodeWillDie:(id)arg1;	// IMP=0x0000000000088694
- (void)_morphWillDie:(id)arg1;	// IMP=0x000000000008863c
- (void)_meshWillDie:(id)arg1;	// IMP=0x00000000000885ab
- (void)_meshElementWillDie:(id)arg1;	// IMP=0x0000000000088499
- (void)_meshSourceWillDie:(id)arg1;	// IMP=0x0000000000088420
- (void)dealloc;	// IMP=0x0000000000088218
- (id)initWithDevice:(id)arg1;	// IMP=0x0000000000087a59
- (void)colorMatchSourceTexture:(id)arg1 sourceColorSpace:(struct CGColorSpace *)arg2 destinationColorSpace:(struct CGColorSpace *)arg3 destinationTexture:(id)arg4 renderContext:(id)arg5;	// IMP=0x00000000000ab3e4
- (id)iesTextureForProfile:(id)arg1 renderContext:(id)arg2;	// IMP=0x00000000000ab0ff
- (id)defaultTexture3D;	// IMP=0x00000000000aad29
- (id)defaultCubeTexture;	// IMP=0x00000000000aab32
- (id)defaultTexture;	// IMP=0x00000000000aa934
- (id)renderResourceForImage:(struct __C3DImage *)arg1 sampler:(struct __C3DTextureSampler *)arg2 options:(int)arg3 engineContext:(struct __C3DEngineContext *)arg4 didFallbackToDefaultTexture:(_Bool *)arg5;	// IMP=0x00000000000aa4b1
- (id)renderResourceForImageProxy:(struct __C3DImageProxy *)arg1 sampler:(struct __C3DTextureSampler *)arg2 engineContext:(struct __C3DEngineContext *)arg3 didFallbackToDefaultTexture:(_Bool *)arg4;	// IMP=0x00000000000aa336
- (id)renderResourceForEffectSlot:(struct __C3DEffectSlot *)arg1 withEngineContext:(struct __C3DEngineContext *)arg2 didFallbackToDefaultTexture:(_Bool *)arg3;	// IMP=0x00000000000aa24c
- (id)unstageTexture:(id)arg1 commandBuffer:(id)arg2;	// IMP=0x00000000000a9d6e
- (id)latlongTextureForCubemap:(id)arg1 pixelFormat:(unsigned long long)arg2 renderContext:(id)arg3 needsMipmap:(_Bool)arg4;	// IMP=0x00000000000a9ba0
- (id)newCubemapTextureForLatlongTexture:(id)arg1 pixelFormat:(unsigned long long)arg2 engineContext:(struct __C3DEngineContext *)arg3 needsMipmap:(_Bool)arg4;	// IMP=0x00000000000a99af
- (_Bool)_copyImage:(struct __C3DImage *)arg1 toTexture:(id)arg2 desc:(id)arg3 textureOptions:(int)arg4 needsMipMapGeneration:(_Bool)arg5;	// IMP=0x00000000000a8fd7
- (id)_textureDescriptorFromImage:(struct __C3DImage *)arg1 needsMipMap:(_Bool)arg2 textureOptions:(int)arg3;	// IMP=0x00000000000a8ccd
- (void)_enqueueCopyFromTexture:(id)arg1 toTexture:(id)arg2 blitEncoder:(struct SCNMTLBlitCommandEncoder *)arg3 generateMipMaps:(_Bool)arg4;	// IMP=0x00000000000a8988
- (id)newTextureUsingMTKTextureLoaderWithData:(id)arg1 options:(id)arg2;	// IMP=0x00000000000a889f
- (id)newTextureUsingMTKTextureLoaderWithURL:(id)arg1 options:(id)arg2;	// IMP=0x00000000000a87b6
- (id)newTextureWithDescriptor:(id)arg1;	// IMP=0x00000000000a869b
- (id)copyTextureByConvertingToCubeMapIfApplicable:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 needsMipmap:(_Bool)arg3;	// IMP=0x00000000000a85e7
- (id)textureForSamplingTexture:(id)arg1 atSize:(unsigned long long)arg2 mipmapLevelCount:(unsigned long long *)arg3 renderContext:(id)arg4;	// IMP=0x00000000000e3982
- (id)areaLightPrecomputedDataTexture;	// IMP=0x00000000000e375a
- (id)specularDFGTextureWithRenderContext:(id)arg1;	// IMP=0x00000000000e35f4
- (id)radianceTextureForEnvironmentTexture:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 commandBuffer:(id)arg3;	// IMP=0x00000000000e3533
- (id)newRadianceTextureForEnvironmentTexture:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 cpuAccessible:(_Bool)arg3 commandBuffer:(id)arg4;	// IMP=0x00000000000e2faa
- (void)_bakeSphericalHamonicsBasedIrradianceTexture:(id)arg1 forEnvironmentTexture:(id)arg2 renderContext:(id)arg3 applySH:(CDUnknownBlockType)arg4;	// IMP=0x00000000000e2c29
- (void)_bakeStochasticIrradianceTexture:(id)arg1 forEnvironmentTexture:(id)arg2 mipmapLevelForSampling:(unsigned long long)arg3 useTextureView:(_Bool)arg4 renderContext:(id)arg5;	// IMP=0x00000000000e2823
- (id)irradianceTextureForEnvironmentTexture:(id)arg1 renderContext:(id)arg2 applySH:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e26de
- (id)radianceTextureForPrecomputedLightingEnvironment:(id)arg1;	// IMP=0x00000000000e254c
- (id)irradianceTextureForPrecomputedLightingEnvironment:(id)arg1;	// IMP=0x00000000000e23ba
- (id)defaultLightingEnvironmentRadianceTexture;	// IMP=0x00000000000e2233
- (id)defaultLightingEnvironmentIrradianceTexture;	// IMP=0x00000000000e20ac
- (id)sphericalHarmonicsForEnvironmentTexture:(id)arg1 order:(unsigned long long)arg2 commandBuffer:(id)arg3;	// IMP=0x00000000000e991e
- (id)shFromCPU:(id)arg1 commandBuffer:(id)arg2;	// IMP=0x00000000000e93db
- (_Bool)hasCommonProfilePrecompiledFunctions;	// IMP=0x00000000002e0b5c
- (void)reloadPipelinesIfNeeded;	// IMP=0x00000000002e0b56
- (id)colorMatchingComputePipelineStateForSourceColorSpace:(struct CGColorSpace *)arg1 destinationColorSpace:(struct CGColorSpace *)arg2 renderContext:(id)arg3;	// IMP=0x00000000002df6e1
- (id)newComputePipelineStateWithFunctionName:(id)arg1 library:(id)arg2 constantValues:(id)arg3;	// IMP=0x00000000002df69b
- (id)newComputePipelineStateWithFunctionName:(id)arg1 constantValues:(id)arg2;	// IMP=0x00000000002df648
- (id)newComputePipelineStateWithFunctionName:(id)arg1 library:(id)arg2;	// IMP=0x00000000002df633
- (id)newComputePipelineStateWithFunctionName:(id)arg1;	// IMP=0x00000000002df5e2
- (id)getUniqueStageDescriptor:(id)arg1;	// IMP=0x00000000002df074
- (id)computePipelineStateForKernel:(id)arg1;	// IMP=0x00000000002df060
- (id)newComputePipelineStateForKernel:(id)arg1 withStageDescriptor:(id)arg2 constants:(id)arg3 constantsHash:(id)arg4;	// IMP=0x00000000002dee80
- (id)computePipelineStateForKernel:(id)arg1 threadGroupSizeIsMultipleOfThreadExecutionWidth:(_Bool)arg2;	// IMP=0x00000000002ded8c
- (id)newComputePipelineStateForDesc:(CDStruct_4cea7480)arg1 library:(id)arg2;	// IMP=0x00000000002ded16
- (void)_configureComputePipeline:(id)arg1 withDescriptor:(id)arg2;	// IMP=0x00000000002dec14
- (id)_newComputeDescriptorForPipelineDesc:(CDStruct_4cea7480)arg1 library:(id)arg2;	// IMP=0x00000000002deae7
- (id)newRenderPipelineStateWithDesc:(CDStruct_a2a27fda)arg1;	// IMP=0x00000000002de7e0
- (void)_createPipelineStateWithDescriptor:(id)arg1 desc:(CDStruct_a2a27fda)arg2 pipeline:(id)arg3;	// IMP=0x00000000002de002
- (struct __C3DFXMetalProgram *)defaultProgramUsingTessellation:(_Bool)arg1;	// IMP=0x00000000002ddfe1
- (id)renderResourceForProgramDesc:(CDStruct_8a516eb8)arg1 renderPassDescriptor:(id)arg2;	// IMP=0x00000000002dd5f0

@end
