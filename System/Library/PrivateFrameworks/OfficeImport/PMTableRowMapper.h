//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADTable, OADTableRow;

__attribute__((visibility("hidden")))
@interface PMTableRowMapper
{
    OADTable *mTable;	// 40 = 0x28
    OADTableRow *mRow;	// 48 = 0x30
    unsigned long long mRowIndex;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000046ee93
- (void)mapAt:(id)arg1 withState:(id)arg2;	// IMP=0x00000000001f9611
- (unsigned long long)cellCount;	// IMP=0x00000000001fa844
- (float)height;	// IMP=0x00000000001f9f9f
- (id)initWithOadTable:(id)arg1 rowIndex:(unsigned long long)arg2 parent:(id)arg3;	// IMP=0x00000000001f9512

@end

