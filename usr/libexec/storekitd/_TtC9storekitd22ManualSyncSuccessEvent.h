//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC9storekitd22ManualSyncSuccessEvent
{
    MISSING_TYPE *transactionsCountDifference;	// 32 = 0x20
    MISSING_TYPE *modifiedOrAddedTransactionsCount;	// 40 = 0x28
    MISSING_TYPE *modifiedOrAddedStatusesCount;	// 48 = 0x30
}

+ (id)name;	// IMP=0x00200000000b25b0
- (id)init;	// IMP=0x00400000000b2750
@property(nonatomic) long long modifiedOrAddedStatusesCount; // @synthesize modifiedOrAddedStatusesCount;
@property(nonatomic) long long modifiedOrAddedTransactionsCount; // @synthesize modifiedOrAddedTransactionsCount;
@property(nonatomic) long long transactionsCountDifference; // @synthesize transactionsCountDifference;

@end
