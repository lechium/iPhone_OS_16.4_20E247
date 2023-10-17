//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMapTable, SCNMTLLibrary;
@protocol MTLDevice, MTLLibrary, OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SCNMTLLibraryManager : NSObject
{
    id <MTLDevice> _device;	// 8 = 0x8
    SCNMTLLibrary *_frameworkLibrary;	// 16 = 0x10
    SCNMTLLibrary *_defaultLibrary;	// 24 = 0x18
    struct __C3DEngineStats *__engineStats;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_deviceQueue;	// 40 = 0x28
    NSObject<OS_dispatch_group> *_shaderCompilationGroup;	// 48 = 0x30
    id <MTLLibrary> _commonProfileCacheLibrary;	// 56 = 0x38
    NSDictionary *_commonProfilePrecompiledFunctions;	// 64 = 0x40
    NSMapTable *_availableLibraries;	// 72 = 0x48
    struct __CFDictionary *_availableCompiledLibraries;	// 80 = 0x50
    struct os_unfair_lock_s _availableCompiledLibrariesLock;	// 88 = 0x58
}

+ (id)hashCodeForSource:(id)arg1 macros:(id)arg2;	// IMP=0x0060000000149195
- (void)libraryForProgramDesc:(CDStruct_8a516eb8)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000149888
- (id)libraryForSourceCode:(id)arg1 options:(id)arg2;	// IMP=0x0000000000149758
- (id)libraryForFile:(id)arg1;	// IMP=0x00000000001495e6
- (id)deviceQueue;	// IMP=0x00000000001495dc
- (void)_setEngineStats:(struct __C3DEngineStats *)arg1;	// IMP=0x00000000001495d2
- (void)waitForShadersCompilation;	// IMP=0x00000000001495bd
- (id)shaderCompilationGroup;	// IMP=0x00000000001495b3
- (id)commonProfileCacheLibrary;	// IMP=0x00000000001495a9
- (id)defaultLibrary;	// IMP=0x00000000001494c6
- (id)frameworkLibrary;	// IMP=0x00000000001494b0
- (void)clearCompiledLibraries;	// IMP=0x0000000000149485
- (id)device;	// IMP=0x000000000014947b
- (void)dealloc;	// IMP=0x0000000000149124
- (id)initWithDevice:(id)arg1;	// IMP=0x0000000000148cbc

@end
