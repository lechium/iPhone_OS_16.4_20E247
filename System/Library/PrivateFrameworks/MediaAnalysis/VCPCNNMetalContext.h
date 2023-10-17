//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MTLCommandBuffer, MTLCommandQueue, MTLDevice;

__attribute__((visibility("hidden")))
@interface VCPCNNMetalContext : NSObject
{
    id <MTLDevice> _device;	// 8 = 0x8
    id <MTLCommandQueue> _commandQueue;	// 16 = 0x10
    id <MTLCommandBuffer> _commandBuffer;	// 24 = 0x18
}

+ (_Bool)supportVectorForward;	// IMP=0x0060000000266a44
+ (_Bool)supportGPU;	// IMP=0x0060000000266a3c
- (void).cxx_destruct;	// IMP=0x0000000000266ace
@property(retain) id <MTLCommandBuffer> commandBuffer; // @synthesize commandBuffer=_commandBuffer;
@property(retain) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property(retain) id <MTLDevice> device; // @synthesize device=_device;
- (int)execute;	// IMP=0x0000000000266a5a
- (id)initNewContext:(_Bool)arg1;	// IMP=0x0000000000266a4c

@end
