//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AccountPhysicalCardShippingUpdate
{
}

+ (id)_propertySettersForAccountPhysicalCardShippingUpdate;	// IMP=0x00400000002f65a9
+ (id)_predicateForPhysicalCardIdentifier:(id)arg1;	// IMP=0x00100000002f6586
+ (id)_predicateForEventPID:(long long)arg1;	// IMP=0x00100000002f6513
+ (id)_shippingUpdatesWithQuery:(id)arg1;	// IMP=0x00100000002f6313
+ (id)databaseTable;	// IMP=0x00100000002f6306
+ (void)deletePhysicalCardShippingUpdatesWithEventPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002f626d
+ (id)insertPhysicalCardShippingUpdate:(id)arg1 forEventPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002f5c8d
+ (id)physicalCardShippingUpdatesForPhysicalCardWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002f5bda
+ (id)physicalCardShippingUpdatesWithEventPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002f5b27
- (id)physicalCardShippingUpdate;	// IMP=0x00400000002f6016

@end

