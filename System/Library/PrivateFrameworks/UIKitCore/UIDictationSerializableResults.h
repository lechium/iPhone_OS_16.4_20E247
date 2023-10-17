//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexPath;

__attribute__((visibility("hidden")))
@interface UIDictationSerializableResults : NSObject
{
    _Bool _fromKeyboard;	// 8 = 0x8
    _Bool _showMultilingualAlternatives;	// 9 = 0x9
    _Bool _lowConfidenceAboutLanguageDetection;	// 10 = 0xa
    _Bool _useServerCapitalization;	// 11 = 0xb
    _Bool _addTrailingSpace;	// 12 = 0xc
    _Bool _allowsAlternatives;	// 13 = 0xd
    NSArray *_phrases;	// 16 = 0x10
    NSArray *_multilingualAlternatives;	// 24 = 0x18
    const struct __CFString *_transform;	// 32 = 0x20
    NSIndexPath *_indexPathOfInterpretations;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000b261fd
- (void).cxx_destruct;	// IMP=0x0000000000b29430
@property(readonly, nonatomic) _Bool allowsAlternatives; // @synthesize allowsAlternatives=_allowsAlternatives;
@property(retain, nonatomic) NSIndexPath *indexPathOfInterpretations; // @synthesize indexPathOfInterpretations=_indexPathOfInterpretations;
@property(nonatomic) _Bool addTrailingSpace; // @synthesize addTrailingSpace=_addTrailingSpace;
@property(nonatomic) _Bool useServerCapitalization; // @synthesize useServerCapitalization=_useServerCapitalization;
@property(nonatomic) const struct __CFString *transform; // @synthesize transform=_transform;
@property(nonatomic) _Bool lowConfidenceAboutLanguageDetection; // @synthesize lowConfidenceAboutLanguageDetection=_lowConfidenceAboutLanguageDetection;
@property(nonatomic) _Bool showMultilingualAlternatives; // @synthesize showMultilingualAlternatives=_showMultilingualAlternatives;
@property(nonatomic) _Bool fromKeyboard; // @synthesize fromKeyboard=_fromKeyboard;
@property(copy, nonatomic) NSArray *multilingualAlternatives; // @synthesize multilingualAlternatives=_multilingualAlternatives;
@property(copy, nonatomic) NSArray *phrases; // @synthesize phrases=_phrases;
- (id)description;	// IMP=0x0000000000b292f1
- (id)singleLineResult;	// IMP=0x0000000000b289b2
- (id)bestResults;	// IMP=0x0000000000b287c5
- (id)dictationPhraseArray;	// IMP=0x0000000000b27dc8
- (id)bestTextArrayForAlternatives:(id)arg1;	// IMP=0x0000000000b27d22
- (id)secondBestTextArray;	// IMP=0x0000000000b2789c
- (id)bestTextArray;	// IMP=0x0000000000b27835
- (id)textArrayForAlternatives:(id)arg1;	// IMP=0x0000000000b2759e
- (id)textArray;	// IMP=0x0000000000b2730e
- (id)bestTextForMultilingualAlternatives;	// IMP=0x0000000000b2700d
- (id)multilingualResultsByLanguageCode;	// IMP=0x0000000000b26e56
- (id)secondBestText;	// IMP=0x0000000000b26dff
- (id)bestText;	// IMP=0x0000000000b26da8
- (id)text;	// IMP=0x0000000000b26d51
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b26b1a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000b26a02
- (void)dealloc;	// IMP=0x0000000000b269bb
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000b26787
- (id)initWithArrayOfArrayOfStrings:(id)arg1;	// IMP=0x0000000000b263d2
- (id)initWithDetectedPhrases:(id)arg1 multilingualAlternatives:(id)arg2;	// IMP=0x0000000000b26317
- (id)initWithPhrases:(id)arg1;	// IMP=0x0000000000b2629e
- (id)init;	// IMP=0x0000000000b26205

@end
