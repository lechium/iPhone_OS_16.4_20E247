//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AudioToolbox/AUAudioUnit.h>

@class AUAudioUnitBus, AUAudioUnitBusArray, AVAudioPCMBuffer;

__attribute__((visibility("hidden")))
@interface ChannelDataCaptureAudioUnit : AUAudioUnit
{
    AVAudioPCMBuffer *_inputBuffer;	// 8 = 0x8
    AUAudioUnitBus *_inputBus;	// 16 = 0x10
    AUAudioUnitBusArray *_inputBusArray;	// 24 = 0x18
    AUAudioUnitBus *_outputBus;	// 32 = 0x20
    AUAudioUnitBusArray *_outputBusArray;	// 40 = 0x28
    struct array<std::vector<float>, 2UL> _buffers;	// 48 = 0x30
    struct vector<int, std::allocator<int>> capturedPositions;	// 96 = 0x60
    AVAudioPCMBuffer *capturedBuffer;	// 120 = 0x78
}

- (id).cxx_construct;	// IMP=0x0000000000319e9a
- (void).cxx_destruct;	// IMP=0x0000000000319dd7
- (CDUnknownBlockType)internalRenderBlock;	// IMP=0x0000000000319b7a
- (id)channelCapabilities;	// IMP=0x0000000000319b6d
- (id)outputBusses;	// IMP=0x0000000000319b58
- (id)inputBusses;	// IMP=0x0000000000319b43
- (void)deallocateRenderResources;	// IMP=0x0000000000319aaa
- (_Bool)allocateRenderResourcesAndReturnError:(id *)arg1;	// IMP=0x000000000031993e
- (id)stopRecording;	// IMP=0x0000000000319800
- (void)startRecording:(int)arg1;	// IMP=0x00000000003196f7
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x00000000003194b8

@end

