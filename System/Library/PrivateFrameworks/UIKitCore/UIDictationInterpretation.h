//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIDictationInterpretation : NSObject
{
    NSArray *_tokens;	// 8 = 0x8
    double _averageConfidenceScore;	// 16 = 0x10
}

+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(const struct __CFString *)arg2;	// IMP=0x0010000000b2479f
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000b242d2
- (void).cxx_destruct;	// IMP=0x0000000000b24ca0
@property(nonatomic) double averageConfidenceScore; // @synthesize averageConfidenceScore=_averageConfidenceScore;
@property(readonly, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
- (id)description;	// IMP=0x0000000000b24b4f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b24a7c
- (id)serializedInterpretationWithTransform:(const struct __CFString *)arg1;	// IMP=0x0000000000b24730
@property(readonly, nonatomic) _Bool removeSpaceAfter;
@property(readonly, nonatomic) _Bool removeSpaceBefore;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000b2462c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000b24518
- (id)initWithTokens:(id)arg1 score:(double)arg2;	// IMP=0x0000000000b2447f
- (id)initWithTokens:(id)arg1;	// IMP=0x0000000000b242da

@end

