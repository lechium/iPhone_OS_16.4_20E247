//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EDReference;

__attribute__((visibility("hidden")))
@interface EDSharedFormula
{
    _Bool _forceNonBaseFormula;	// 16 = 0x10
    int _rowBaseOrOffset;	// 20 = 0x14
    int _columnBaseOrOffset;	// 24 = 0x18
    unsigned long long _baseFormulaIndex;	// 32 = 0x20
    EDReference *_baseFormulaRange;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000003a67a9
@property(readonly, nonatomic) EDReference *baseFormulaRange; // @synthesize baseFormulaRange=_baseFormulaRange;
@property(nonatomic) int columnBaseOrOffset; // @synthesize columnBaseOrOffset=_columnBaseOrOffset;
@property(nonatomic) int rowBaseOrOffset; // @synthesize rowBaseOrOffset=_rowBaseOrOffset;
@property(nonatomic) _Bool forceNonBaseFormula; // @synthesize forceNonBaseFormula=_forceNonBaseFormula;
@property(nonatomic) unsigned long long baseFormulaIndex; // @synthesize baseFormulaIndex=_baseFormulaIndex;
- (id)description;	// IMP=0x00000000003a6729
- (_Bool)isSharedFormula;	// IMP=0x00000000003a6721
- (id)warningWithRowBlocks:(id)arg1;	// IMP=0x0000000000149f82
- (_Bool)isBaseFormula;	// IMP=0x0000000000149d5f
- (id)baseFormulaWithRowBlocks:(id)arg1;	// IMP=0x000000000014a0e2
- (_Bool)convertTokensToShared;	// IMP=0x00000000003a66d5
- (id)init;	// IMP=0x0000000000148731
- (id)initWithFormula:(id)arg1;	// IMP=0x00000000003a6679
- (void)updateBaseFormulaRangeWithRow:(int)arg1 column:(int)arg2;	// IMP=0x00000000003a67bc
- (void)archiveByAppendingToMutableData:(struct __CFData *)arg1;	// IMP=0x00000000003a6a7b
- (void)unarchiveFromData:(struct __CFData *)arg1 offset:(unsigned long long *)arg2;	// IMP=0x00000000003a695b

@end
