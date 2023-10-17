//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAudioPCMBuffer, AVAudioTime, NSArray, SHAudioRecorder, SHAudioRecordingManager, SHAudioTap;

@protocol SHAudioRecordingManagerDelegate
- (_Bool)recorder:(SHAudioRecorder *)arg1 shouldProcessAudioBuffer:(AVAudioPCMBuffer *)arg2 atTime:(AVAudioTime *)arg3;
- (void)audioRecordingManager:(SHAudioRecordingManager *)arg1 failedToStartRecorders:(NSArray *)arg2;
- (void)audioRecordingManagerDidStopRecording:(SHAudioRecordingManager *)arg1;
- (void)audioRecordingManagerWillStartRecording:(SHAudioRecordingManager *)arg1;
- (void)audioRecordingManager:(SHAudioRecordingManager *)arg1 didDetachTap:(SHAudioTap *)arg2;
- (void)audioRecordingManager:(SHAudioRecordingManager *)arg1 willAttachTap:(SHAudioTap *)arg2;
@end
