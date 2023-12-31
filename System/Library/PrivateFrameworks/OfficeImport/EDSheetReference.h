//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface EDSheetReference
{
    unsigned long long mSheetIndex;	// 24 = 0x18
}

+ (id)referenceWithSheetIndex:(unsigned long long)arg1 firstRow:(int)arg2 lastRow:(int)arg3 firstColumn:(int)arg4 lastColumn:(int)arg5;	// IMP=0x006000000017eec1
- (id)description;	// IMP=0x00000000003a720f
- (void)unionWithReference:(id)arg1;	// IMP=0x00000000003a7161
- (_Bool)fullyAdjacentToReference:(id)arg1;	// IMP=0x0000000000238983
- (unsigned long long)sheetIndex;	// IMP=0x0000000000182ca1
- (_Bool)isSheedIndexValid;	// IMP=0x00000000003a714c
- (unsigned long long)hash;	// IMP=0x00000000003a7109
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003a708d
- (_Bool)isEqualToTableReference:(id)arg1;	// IMP=0x00000000003a700c
- (id)initWithSheetIndex:(unsigned long long)arg1 firstRow:(int)arg2 lastRow:(int)arg3 firstColumn:(int)arg4 lastColumn:(int)arg5;	// IMP=0x000000000017ef20
- (id)init;	// IMP=0x00000000003a6fc9

@end

