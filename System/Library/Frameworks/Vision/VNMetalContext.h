//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol MTLCommandQueue, MTLDevice, MTLLibrary;

__attribute__((visibility("hidden")))
@interface VNMetalContext : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    id <MTLCommandQueue> _commandQueue;	// 16 = 0x10
    id <MTLLibrary> _library;	// 24 = 0x18
    NSDictionary *_wisdomParams;	// 32 = 0x20
    id <MTLDevice> _device;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000011f2d3

@end
