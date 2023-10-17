//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NFC
{
}

+ (id)_propertySettersForNFC;	// IMP=0x0040000000337ea0
+ (id)_propertyValuesForNFCPayload:(id)arg1 pass:(id)arg2 computedPayloadState:(unsigned long long)arg3;	// IMP=0x0010000000337c8d
+ (id)anyInDatabase:(id)arg1 forPassPID:(unsigned long long)arg2;	// IMP=0x0010000000337a30
+ (void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000337997
+ (id)_predicateForPass:(id)arg1;	// IMP=0x0010000000337963
+ (id)_predicateForPassPID:(long long)arg1;	// IMP=0x00100000003378f0
+ (void)insertOrUpdateNFCPayload:(id)arg1 forPass:(id)arg2 computedPayloadState:(unsigned long long)arg3 inDatabase:(id)arg4;	// IMP=0x00100000003377fc
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x001000000033770d
+ (id)databaseTable;	// IMP=0x0010000000337700
- (void)updateNFCPayload:(id)arg1 pass:(id)arg2 computedPayloadState:(unsigned long long)arg3;	// IMP=0x0040000000337bf4
- (id)nfcPayload;	// IMP=0x0010000000337abc
- (id)initWithNFCPayload:(id)arg1 pass:(id)arg2 computedPayloadState:(unsigned long long)arg3 inDatabase:(id)arg4;	// IMP=0x001000000033773c

@end
