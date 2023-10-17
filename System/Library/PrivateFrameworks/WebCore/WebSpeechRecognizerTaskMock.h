//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface WebSpeechRecognizerTaskMock
{
    ObjectIdentifier_0a27c126 _identifier;	// 16 = 0x10
    struct BlockPtr<void (const WebCore::SpeechRecognitionUpdate &)> _delegateCallback;	// 24 = 0x18
    _Bool _doMultipleRecognitions;	// 32 = 0x20
    _Bool _hasSentSpeechStart;	// 33 = 0x21
    _Bool _hasSentSpeechEnd;	// 34 = 0x22
    _Bool _completed;	// 35 = 0x23
}

- (id).cxx_construct;	// IMP=0x0000000000308be0
- (void).cxx_destruct;	// IMP=0x0000000000308bc0
- (void)stop;	// IMP=0x0000000000308ba0
- (void)abort;	// IMP=0x0000000000308a70
- (void)audioSamplesAvailable:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x00000000003085f0
- (id)initWithIdentifier:(ObjectIdentifier_0a27c126)arg1 locale:(id)arg2 doMultipleRecognitions:(_Bool)arg3 reportInterimResults:(_Bool)arg4 maxAlternatives:(unsigned long long)arg5 delegateCallback:(CDUnknownBlockType)arg6;	// IMP=0x0000000000308530

@end
