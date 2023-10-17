//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCRCMathExpression.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SCRCMathSimpleExpression : SCRCMathExpression
{
    NSString *_content;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000018c41
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (id)latexMathModeDescription;	// IMP=0x0000000000018bc0
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;	// IMP=0x0000000000018b33
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;	// IMP=0x0000000000018a94
- (_Bool)canBeUsedWithBase;	// IMP=0x00000000000189fd
- (_Bool)isFunctionName;	// IMP=0x0000000000018989
- (id)_functionNames;	// IMP=0x000000000001891d
- (_Bool)isWordOrAbbreviation;	// IMP=0x00000000000188b2
- (long long)integerValue;	// IMP=0x000000000001886e
- (_Bool)isInteger;	// IMP=0x00000000000187b4
- (id)description;	// IMP=0x000000000001870f
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000001864f

@end
