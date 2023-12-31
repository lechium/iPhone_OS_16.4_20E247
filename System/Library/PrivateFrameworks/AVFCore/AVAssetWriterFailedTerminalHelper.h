//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError;

__attribute__((visibility("hidden")))
@interface AVAssetWriterFailedTerminalHelper
{
    NSError *_terminalError;	// 24 = 0x18
}

- (void)flushSegment;	// IMP=0x000000000009bad5
- (void)flush;	// IMP=0x000000000009bacf
- (void)setFinishWritingDelegate:(id)arg1;	// IMP=0x000000000009bac9
- (void)finishWritingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000009babe
- (void)finishWriting;	// IMP=0x000000000009bab8
- (void)endSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000009bab2
- (void)startSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000009baac
- (id)error;	// IMP=0x000000000009ba9b
- (long long)status;	// IMP=0x000000000009ba90
- (void)dealloc;	// IMP=0x000000000009ba4e
- (id)initWithConfigurationState:(id)arg1 terminalError:(id)arg2;	// IMP=0x000000000009b961
- (id)initWithConfigurationState:(id)arg1;	// IMP=0x000000000009b8f4

@end

