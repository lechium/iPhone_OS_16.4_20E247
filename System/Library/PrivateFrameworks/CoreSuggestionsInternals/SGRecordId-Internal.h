//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSuggestions/SGRecordId.h>

@interface SGRecordId (Internal)
+ (id)recordIdForEventWithRowId:(long long)arg1;	// IMP=0x00800000001476eb
+ (id)recordIdForContactDetailWithRowId:(long long)arg1;	// IMP=0x00800000001476cd
+ (id)recordIdForContactWithRowId:(long long)arg1;	// IMP=0x00800000001476af
+ (id)recordIdForEmailWithRowId:(long long)arg1;	// IMP=0x008000000014768e
+ (id)recordIdWithTableId:(unsigned char)arg1 rowId:(long long)arg2;	// IMP=0x00800000001475bb
- (long long)rowId;	// IMP=0x001000000014759b
- (unsigned char)tableId;	// IMP=0x0010000000147584
@end

