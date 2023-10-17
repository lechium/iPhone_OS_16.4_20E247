//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MapsMerchant
{
}

+ (id)_propertySetters;	// IMP=0x0040000000341b96
+ (id)_propertyValuesForMapsMerchant:(id)arg1;	// IMP=0x001000000034167e
+ (id)_predicateForEndDate:(id)arg1;	// IMP=0x00100000003415fd
+ (id)_predicateForStartDate:(id)arg1;	// IMP=0x001000000034157c
+ (id)_predicateForPIDs:(id)arg1;	// IMP=0x0010000000341559
+ (id)_predicateForPID:(id)arg1;	// IMP=0x0010000000341536
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x0010000000341513
+ (id)_mapsMerchantsMatchingQuery:(id)arg1;	// IMP=0x001000000034135c
+ (id)insertOrUpdateMapsMerchant:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000340ec9
+ (id)insertMapsMerchant:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000340e5d
+ (void)associateMapsMerchantsToPaymentTransactions:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000340a9f
+ (id)_mapsMerchantsWithQuery:(id)arg1;	// IMP=0x00100000003408d6
+ (id)mapsMerchantsWithLastUpdatedDateFromStartDate:(id)arg1 endDate:(id)arg2 limit:(long long)arg3 inDatabase:(id)arg4;	// IMP=0x0010000000340739
+ (id)mapsMerchantsInDatabase:(id)arg1;	// IMP=0x00100000003406d8
+ (id)anyInDatabase:(id)arg1 withPID:(id)arg2;	// IMP=0x001000000034064c
+ (id)anyInDatabase:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x00100000003405c0
+ (id)databaseTable;	// IMP=0x0010000000340519
- (id)mapsMerchant;	// IMP=0x00400000003411ef
- (void)updateWithMapsMerchant:(id)arg1;	// IMP=0x0010000000340fdd
- (id)initWithMapsMerchant:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000340526

@end
