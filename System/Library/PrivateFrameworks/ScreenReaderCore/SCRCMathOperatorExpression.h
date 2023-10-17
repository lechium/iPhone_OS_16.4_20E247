//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SCRCMathOperatorExpression
{
    unsigned short _operatorChar;	// 32 = 0x20
}

@property(readonly, nonatomic) unsigned short operatorChar; // @synthesize operatorChar=_operatorChar;
- (id)mathMLString;	// IMP=0x0000000000015748
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;	// IMP=0x000000000001569c
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;	// IMP=0x00000000000153b8
- (id)latexFormatStringAsOver;	// IMP=0x0000000000015311
- (_Bool)isFenceDelimiter;	// IMP=0x000000000001529d
- (_Bool)isOperationSymbol;	// IMP=0x0000000000015254
- (_Bool)isTermSeparator;	// IMP=0x0000000000015219
- (_Bool)isEllipsis;	// IMP=0x00000000000151f6
- (_Bool)isNaturalSuperscript;	// IMP=0x00000000000151e4
- (_Bool)_isMinusSign;	// IMP=0x00000000000151cb
- (_Bool)_isInvisibleCharacter;	// IMP=0x00000000000151ae
- (_Bool)_isRingOperator;	// IMP=0x0000000000015195
- (_Bool)canBeUsedWithRange;	// IMP=0x0000000000015148
- (_Bool)_isSummation;	// IMP=0x000000000001512f
- (_Bool)_isUnionOrIntersection;	// IMP=0x0000000000015101
- (_Bool)_isIntegral;	// IMP=0x00000000000150e4
- (id)description;	// IMP=0x0000000000015065
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000014f53

@end
