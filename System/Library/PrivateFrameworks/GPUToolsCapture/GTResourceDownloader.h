//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol MTLCommandQueue, MTLDeviceSPI, MTLSharedEvent, OS_dispatch_group, OS_dispatch_queue;

@interface GTResourceDownloader : NSObject
{
    id <MTLDeviceSPI> _device;	// 8 = 0x8
    NSMutableDictionary *_pipelineCache;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_dispatchGroup;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
    struct _opaque_pthread_mutex_t _framebufferPipelineMutex;	// 40 = 0x28
    unsigned long long _downloadValue;	// 104 = 0x68
    id <MTLSharedEvent> _downloadEvent;	// 112 = 0x70
    id <MTLCommandQueue> _downloadQueue;	// 120 = 0x78
    unsigned long long _maxGPUMemory;	// 128 = 0x80
    _Atomic unsigned long long _usedGPUMemory;	// 136 = 0x88
    unsigned long long _alignment;	// 144 = 0x90
    struct apr_pool_t *_pool;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0000000000099fa9
- (void)_downloadRequest:(struct apr_array_header_t *)arg1 atPoint:(id)arg2 dispatchGroup:(id)arg3;	// IMP=0x0000000000099f26
- (void)_downloadRequestNew:(struct apr_array_header_t *)arg1 atPoint:(id)arg2 dispatchGroup:(id)arg3;	// IMP=0x0000000000099d6c
- (void)_downloadRequestOld:(struct apr_array_header_t *)arg1 atPoint:(id)arg2 dispatchGroup:(id)arg3;	// IMP=0x0000000000099c16
- (void)downloadRequest:(struct apr_array_header_t *)arg1 atPoint:(id)arg2;	// IMP=0x0000000000099c01
- (void)downloadRequest:(struct apr_array_header_t *)arg1;	// IMP=0x0000000000099b45
- (id)downloadQueue;	// IMP=0x0000000000099b37
- (id)getFramebufferPipeline:(unsigned long long)arg1;	// IMP=0x0000000000099929
- (id)getGPUIndirectCommandBuffer:(unsigned long long)arg1 context:(id)arg2 descriptor:(id)arg3;	// IMP=0x0000000000099911
- (id)getGPUBuffer:(unsigned long long)arg1 context:(id)arg2;	// IMP=0x0000000000099871
- (id)getGPUIndirectCommandBuffer:(id)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000997cc
- (id)getGPUBuffer:(unsigned long long)arg1;	// IMP=0x000000000009976b
- (void)fillGPUBuffer:(id)arg1 size:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x0000000000099543
- (void)dealloc;	// IMP=0x00000000000994fd
- (id)initWithDevice:(id)arg1;	// IMP=0x00000000000993d3

@end
