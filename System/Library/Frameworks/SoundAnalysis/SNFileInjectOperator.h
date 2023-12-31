//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioFile, AVAudioFormat;

__attribute__((visibility("hidden")))
@interface SNFileInjectOperator : NSObject
{
    AVAudioFormat *_format;	// 8 = 0x8
    AVAudioFile *_inputFile;	// 16 = 0x10
    CDStruct_1b6d18a9 _offsetInInputFile;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000059291
- (void)processTerminationWithOptionalError:(id)arg1 portID:(id)arg2 downstreamHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000059277
- (void)processInput:(id)arg1 portID:(id)arg2 downstreamHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000590ba
- (void)dealloc;	// IMP=0x0000000000059063
- (id)init;	// IMP=0x0000000000058e4f

@end

