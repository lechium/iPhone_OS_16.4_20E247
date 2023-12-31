//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVTCompositor, AVTCompositorPipeline, AVTMemoji, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface AVTCompositorTextureProvider : NSObject
{
    AVTMemoji *_memoji;	// 8 = 0x8
    AVTCompositor *_compositor;	// 16 = 0x10
    AVTCompositorPipeline *_pipeline;	// 24 = 0x18
    NSString *_propertyName;	// 32 = 0x20
    _Bool _skinIsDirty;	// 40 = 0x28
    unsigned long long _componentDirtyMask;	// 48 = 0x30
    NSMutableSet *_helperTokens;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000b3de
- (void)renderToTexture:(id)arg1 computeCommandHandler:(CDUnknownBlockType)arg2 blitCommandHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4 helper:(id)arg5;	// IMP=0x000000000000b25f
- (id)newTextureForDevice:(id)arg1;	// IMP=0x000000000000b102
- (void)componentDidChangeForTypes:(unsigned long long)arg1;	// IMP=0x000000000000b0f8
- (void)skinColorDidChange;	// IMP=0x000000000000b0ee
- (void)dealloc;	// IMP=0x000000000000b091
- (id)initWithCompositor:(id)arg1 memoji:(id)arg2 propertyName:(id)arg3;	// IMP=0x000000000000af91

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

