//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ECMappingContext, EDWorkbook, EDWorksheet, NSString;

__attribute__((visibility("hidden")))
@interface EDFormulaHelper : NSObject
{
    EDWorkbook *mWorkbook;	// 8 = 0x8
    EDWorksheet *mWorksheet;	// 16 = 0x10
    int mRowNumber;	// 24 = 0x18
    int mColumnNumber;	// 28 = 0x1c
    ECMappingContext *mMappingContext;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000003a1e47
- (int)columnNumber;	// IMP=0x00000000003a1e3e
- (int)rowNumber;	// IMP=0x00000000003a1e35
- (id)workbook;	// IMP=0x00000000003a1e27
- (int)resolveFunctionName:(id)arg1;	// IMP=0x00000000001f4f45
- (_Bool)isCurrentSheet:(id)arg1;	// IMP=0x000000000020c137
- (unsigned long long)resolveTableColumn:(id)arg1 columnName:(id)arg2;	// IMP=0x00000000003a1cc9
- (unsigned long long)resolveTableToSheetId:(id)arg1;	// IMP=0x000000000022d843
- (id)resolveTable:(id)arg1;	// IMP=0x000000000020b9a2
- (unsigned long long)resolveFile:(id)arg1;	// IMP=0x00000000003a1ca6
- (unsigned long long)resolveFirstSheet:(id)arg1 lastSheet:(id)arg2;	// IMP=0x00000000003a1bf8
- (unsigned long long)resolveSheet:(id)arg1;	// IMP=0x000000000020bd9d
- (unsigned long long)resolveName:(id)arg1;	// IMP=0x000000000020b722
- (id)initWithWorkbook:(id)arg1 worksheet:(id)arg2 rowNumber:(int)arg3 columnNumber:(int)arg4;	// IMP=0x00000000001ef6c5
- (unsigned long long)createIndexWithType:(int)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3;	// IMP=0x000000000020be7a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

