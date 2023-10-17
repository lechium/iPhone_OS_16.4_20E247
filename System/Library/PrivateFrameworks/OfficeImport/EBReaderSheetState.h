//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EBReaderState, EDSheet;

__attribute__((visibility("hidden")))
@interface EBReaderSheetState : NSObject
{
    EBReaderState *mReaderState;	// 8 = 0x8
    EDSheet *mEDSheet;	// 16 = 0x10
    struct map<int, unsigned long, std::less<int>, std::allocator<std::pair<const int, unsigned long>>> mSharedFormulas;	// 24 = 0x18
    unsigned long long mChartIndex;	// 48 = 0x30
}

- (id).cxx_construct;	// IMP=0x000000000011d65e
- (void).cxx_destruct;	// IMP=0x000000000012b8a3
- (void)reportWorksheetWarning:(id)arg1;	// IMP=0x000000000018d8bf
- (unsigned long long)nextChartIndex;	// IMP=0x000000000018af51
- (void)setSharedFormulaIndex:(unsigned long long)arg1 forRowCol:(int)arg2;	// IMP=0x0000000000148e37
- (unsigned long long)sharedFormulaIndexForRowCol:(int)arg1;	// IMP=0x000000000014915a
- (void)setEDSheet:(id)arg1;	// IMP=0x000000000011debf
- (id)edSheet;	// IMP=0x0000000000120ddf
- (id)resources;	// IMP=0x00000000001229ab
- (id)workbook;	// IMP=0x000000000017791b
- (void *)xlReader;	// IMP=0x000000000011e0fb
- (id)readerState;	// IMP=0x000000000011deb1
- (id)initWithReaderState:(id)arg1;	// IMP=0x000000000011d676

@end
