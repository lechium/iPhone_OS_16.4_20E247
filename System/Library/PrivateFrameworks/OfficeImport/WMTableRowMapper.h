//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WDTableRow;

__attribute__((visibility("hidden")))
@interface WMTableRowMapper
{
    WDTableRow *mWdTableRow;	// 40 = 0x28
    double mHeight;	// 48 = 0x30
}

+ (_Bool)isTableRowDeleted:(id)arg1;	// IMP=0x00600000000f8644
- (void).cxx_destruct;	// IMP=0x000000000045ade8
- (void)mapAt:(id)arg1 withState:(id)arg2;	// IMP=0x00000000000f9434
- (double)height;	// IMP=0x00000000000f991a
- (id)initWithWDTableRow:(id)arg1 parent:(id)arg2;	// IMP=0x00000000000f9271
- (void)setRowProperties:(id)arg1;	// IMP=0x00000000000f9385

@end
