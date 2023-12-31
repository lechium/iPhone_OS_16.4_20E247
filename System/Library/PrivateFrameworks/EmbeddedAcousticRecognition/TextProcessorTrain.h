//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, _EARLMTKaldiVocab;

__attribute__((visibility("hidden")))
@interface TextProcessorTrain : NSObject
{
    NSMutableArray *_text;	// 8 = 0x8
    _EARLMTKaldiVocab *_vocab;	// 16 = 0x10
    long long *_numValidTokens;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001f9af5
- (long long)numberTokens;	// IMP=0x00000000001f9ae8
- (unsigned long long)numberSamples;	// IMP=0x00000000001f9ad2
- (id)textSequence;	// IMP=0x00000000001f9ac4
- (void)shuffleSamples;	// IMP=0x00000000001f9a26
- (void)addTokenizedText:(id)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000001f9698
- (void)addText:(id)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000001f9343
- (void)addText:(id)arg1;	// IMP=0x00000000001f90e1
- (id)initWithVocab:(id)arg1;	// IMP=0x00000000001f9054
- (id)init;	// IMP=0x00000000001f9046

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

