//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFDictationConnection, CARDictationResult, NSError, NSString, NSTimer;

@interface CRDictationService : NSObject
{
    AFDictationConnection *_dictationConnection;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    CDUnknownBlockType _handler;	// 24 = 0x18
    CARDictationResult *_result;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    NSTimer *_processingTimer;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x00200000000085e1
- (void).cxx_destruct;	// IMP=0x0020000000009b55
@property(retain, nonatomic) NSTimer *processingTimer; // @synthesize processingTimer=_processingTimer;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) CARDictationResult *result; // @synthesize result=_result;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) AFDictationConnection *dictationConnection; // @synthesize dictationConnection=_dictationConnection;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;	// IMP=0x00100000000099fd
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;	// IMP=0x001000000000993e
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;	// IMP=0x00100000000098c3
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;	// IMP=0x00100000000095ef
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1;	// IMP=0x0010000000009565
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;	// IMP=0x00100000000094ea
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;	// IMP=0x001000000000948e
- (void)dictationConnectionSpeechRecordingWillBegin:(id)arg1;	// IMP=0x0010000000009413
- (void)_failWithError:(id)arg1;	// IMP=0x00100000000093e0
- (void)_finishIfPossible;	// IMP=0x00100000000092e6
- (void)_processingTimeLimitReached;	// IMP=0x0010000000009237
- (void)_reset;	// IMP=0x001000000000916a
- (void)_transitionToState:(long long)arg1;	// IMP=0x0010000000008e98
- (void)_fireHandler:(CDUnknownBlockType)arg1 withState:(long long)arg2 result:(id)arg3 error:(id)arg4;	// IMP=0x0010000000008be8
- (void)beginRecordingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000089e8
- (void)cancelRecording;	// IMP=0x00100000000088f5
- (void)stopRecording;	// IMP=0x001000000000886b
@property(readonly, nonatomic) _Bool dictationAvailable;
@property(readonly, nonatomic) _Bool dictationEnabled;
- (id)init;	// IMP=0x0010000000008636

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

