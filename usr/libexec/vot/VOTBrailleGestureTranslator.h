//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRLTTranslationService, NSMutableString, NSString, VOTBrailleGesturePatternRecognitionEngine;
@protocol VOTBrailleGestureTranslatorDelegate;

@interface VOTBrailleGestureTranslator : NSObject
{
    VOTBrailleGesturePatternRecognitionEngine *_recognitionEngine;	// 8 = 0x8
    NSMutableString *_brailleBuffer;	// 16 = 0x10
    _Bool _active;	// 24 = 0x18
    _Bool _shouldUseContractedBraille;	// 25 = 0x19
    _Bool _unitTesting;	// 26 = 0x1a
    id <VOTBrailleGestureTranslatorDelegate> _delegate;	// 32 = 0x20
    long long _typingMode;	// 40 = 0x28
    BRLTTranslationService *_translationService;	// 48 = 0x30
    struct CGSize _keyboardSize;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000002fb37
@property(retain, nonatomic) BRLTTranslationService *translationService; // @synthesize translationService=_translationService;
@property(readonly, nonatomic) struct CGSize keyboardSize; // @synthesize keyboardSize=_keyboardSize;
@property(readonly, nonatomic) long long typingMode; // @synthesize typingMode=_typingMode;
@property(nonatomic, getter=isUnitTesting) _Bool unitTesting; // @synthesize unitTesting=_unitTesting;
@property(nonatomic) _Bool shouldUseContractedBraille; // @synthesize shouldUseContractedBraille=_shouldUseContractedBraille;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak id <VOTBrailleGestureTranslatorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)textForBraille:(id)arg1 mode:(unsigned long long)arg2;	// IMP=0x001000000002f7a5
- (void)clearBrailleBuffer;	// IMP=0x001000000002f717
- (_Bool)_shouldUseEightDotBraille;	// IMP=0x001000000002f701
- (void)_resetTranslator;	// IMP=0x001000000002f47f
- (_Bool)areDotNumberPositionsCalibrated;	// IMP=0x001000000002f469
- (void)savePersistentGestureData;	// IMP=0x001000000002f453
- (void)calibrateWithTouchPoints:(id)arg1;	// IMP=0x001000000002f3db
- (id)dotNumberPositions;	// IMP=0x001000000002f3c5
- (void)setTypingMode:(long long)arg1 keyboardSize:(struct CGSize)arg2 shouldUseEightDotBraille:(_Bool)arg3 shouldReverseDots:(_Bool)arg4;	// IMP=0x001000000002f3ac
- (id)printBrailleForGesturePattern:(id)arg1;	// IMP=0x001000000002f2fb
- (id)printBrailleForInput:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002f154
- (void)didPressReturnKey;	// IMP=0x001000000002f0f8
- (void)didInputBackspace;	// IMP=0x001000000002f059
- (_Bool)performBrailleBufferBackspace:(id *)arg1;	// IMP=0x001000000002ef1a
- (void)didInputSpace;	// IMP=0x001000000002eebe
- (id)translateExistingInputWithMode:(unsigned long long)arg1;	// IMP=0x001000000002ec19
- (id)_trimCommonPrefixWithString:(id)arg1 fromString:(id)arg2;	// IMP=0x001000000002eb8d
- (id)translatedTextForPrintBraille:(id)arg1 mode:(unsigned long long)arg2;	// IMP=0x001000000002e269
- (id)translatedTextOfBufferWithMode:(unsigned long long)arg1;	// IMP=0x001000000002e250
- (id)popLastBrailleCellFromBuffer;	// IMP=0x001000000002e153
- (void)addPrintBrailleToBuffer:(id)arg1 language:(id)arg2;	// IMP=0x001000000002e057
- (id)printBrailleForAllTouchPointsInInput:(id)arg1 shouldLearn:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000002dd75
- (id)init;	// IMP=0x001000000002dba9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

