//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface WorldRegionMapping
{
}

+ (id)_predicateForWorldTransactionPID:(long long)arg1;	// IMP=0x004000000032aa5f
+ (id)_predicateForWorldRegionPID:(long long)arg1;	// IMP=0x001000000032a9ec
+ (id)errorForTransactionPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000032a7c7
+ (void)increaseFailureCountForTransactionPID:(long long)arg1 error:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000032a495
+ (void)insertMatchForWorldRegion:(id)arg1 transactionPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000032a192
+ (id)databaseTable;	// IMP=0x001000000032a185

@end
