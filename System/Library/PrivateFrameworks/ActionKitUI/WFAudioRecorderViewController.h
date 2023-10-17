//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIButton, WFAudioRecorder;

__attribute__((visibility("hidden")))
@interface WFAudioRecorderViewController
{
    _Bool _startImmediately;	// 8 = 0x8
    _Bool _isFinishing;	// 9 = 0x9
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    double _recordingDuration;	// 24 = 0x18
    WFAudioRecorder *_audioRecorder;	// 32 = 0x20
    UIButton *_inputButton;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002e21f
@property(nonatomic) _Bool isFinishing; // @synthesize isFinishing=_isFinishing;
@property(nonatomic) __weak UIButton *inputButton; // @synthesize inputButton=_inputButton;
@property(retain, nonatomic) WFAudioRecorder *audioRecorder; // @synthesize audioRecorder=_audioRecorder;
@property(nonatomic) double recordingDuration; // @synthesize recordingDuration=_recordingDuration;
@property(nonatomic) _Bool startImmediately; // @synthesize startImmediately=_startImmediately;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)audioRecorder:(id)arg1 didFinishWithDestinationURL:(id)arg2 error:(id)arg3;	// IMP=0x000000000002e0a0
- (void)audioRecorder:(id)arg1 didProgressToTime:(double)arg2;	// IMP=0x000000000002dfb7
- (void)inputButtonTapped;	// IMP=0x000000000002db8b
- (void)finishRecording;	// IMP=0x000000000002db4e
- (void)startRecording;	// IMP=0x000000000002da67
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000002da12
- (void)handleTap;	// IMP=0x000000000002d971
- (void)viewDidLoad;	// IMP=0x000000000002d613
- (id)initWithOutputFormat:(long long)arg1 destinationURL:(id)arg2;	// IMP=0x000000000002d554

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
