//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecord.h>

@interface CKRecord (PKAdditions)
+ (id)pk_recordWithSystemFieldsData:(id)arg1;	// IMP=0x0060000000225101
- (id)pk_systemFieldsData;	// IMP=0x00100000002251ac
- (_Bool)pk_isRemoteAsset;	// IMP=0x001000000022506c
- (_Bool)pk_isPassCatalog;	// IMP=0x0010000000224fd7
- (_Bool)pk_isPass;	// IMP=0x0010000000224f42
- (id)_dictionaryFromStringValue:(id)arg1;	// IMP=0x0010000000224df9
- (id)_arrayFromStringValue:(id)arg1;	// IMP=0x0010000000224cb0
- (id)_copyArray:(id)arg1 forNewRecordZone:(id)arg2;	// IMP=0x0010000000224a68
- (id)_copyReference:(id)arg1 forNewRecordZone:(id)arg2;	// IMP=0x0010000000224942
- (id)pk_share;	// IMP=0x0010000000224903
- (id)pk_participantWithLookupInfo:(id)arg1;	// IMP=0x00100000002246b9
- (id)pk_participantWithPhoneNumber:(id)arg1;	// IMP=0x001000000022462f
- (id)pk_participantWithEmailAddress:(id)arg1;	// IMP=0x00100000002245a5
- (id)pk_participantWithRecipientHandle:(id)arg1;	// IMP=0x0010000000224529
- (id)pk_copyRecordForNewRecordZone:(id)arg1;	// IMP=0x0010000000223fb8
- (unsigned long long)pk_hash;	// IMP=0x0010000000223a71
- (id)description;	// IMP=0x0010000000223a0e
- (id)pk_description;	// IMP=0x00100000002233fd
- (id)pk_objectForKey:(id)arg1 ofClass:(Class)arg2;	// IMP=0x00100000002232ba
- (id)pk_referenceForKey:(id)arg1;	// IMP=0x0010000000223256
- (unsigned long long)pk_unsignedIntegerForKey:(id)arg1;	// IMP=0x0010000000223209
- (unsigned long long)pk_uint64ForKey:(id)arg1;	// IMP=0x00100000002231bc
- (int)pk_intForKey:(id)arg1;	// IMP=0x001000000022316f
- (long long)pk_integerForKey:(id)arg1;	// IMP=0x0010000000223122
- (_Bool)pk_boolForKey:(id)arg1;	// IMP=0x00100000002230d5
- (id)pk_arrayForKey:(id)arg1;	// IMP=0x0010000000222f64
- (id)pk_dictionaryForKey:(id)arg1;	// IMP=0x0010000000222f05
- (id)pk_urlForKey:(id)arg1;	// IMP=0x0010000000222ea5
- (id)pk_decimalNumberForKey:(id)arg1;	// IMP=0x0010000000222e45
- (id)pk_locationForKey:(id)arg1;	// IMP=0x0010000000222de1
- (id)pk_dataForKey:(id)arg1;	// IMP=0x0010000000222d7d
- (id)pk_dateForKey:(id)arg1;	// IMP=0x0010000000222d19
- (id)pk_numberForKey:(id)arg1;	// IMP=0x0010000000222cb5
- (id)pk_stringForKey:(id)arg1;	// IMP=0x0010000000222c51
- (id)pk_encryptedObjectForKey:(id)arg1 ofClass:(Class)arg2;	// IMP=0x0010000000222ae9
- (unsigned long long)pk_encryptedUnsignedIntegerForKey:(id)arg1;	// IMP=0x0010000000222a9c
- (unsigned long long)pk_encryptedUint64ForKey:(id)arg1;	// IMP=0x0010000000222a4f
- (int)pk_encryptedIntForKey:(id)arg1;	// IMP=0x0010000000222a02
- (long long)pk_encryptedIntegerForKey:(id)arg1;	// IMP=0x00100000002229b5
- (_Bool)pk_encryptedBoolForKey:(id)arg1;	// IMP=0x0010000000222968
- (id)pk_encryptedArrayOfClasses:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000002225bc
- (id)pk_encryptedDictionaryForKey:(id)arg1;	// IMP=0x001000000022255d
- (id)pk_encryptedUrlForKey:(id)arg1;	// IMP=0x00100000002224fd
- (id)pk_encryptedDecimalNumberForKey:(id)arg1;	// IMP=0x001000000022249d
- (id)pk_encryptedLocationForKey:(id)arg1;	// IMP=0x0010000000222439
- (id)pk_encryptedDataForKey:(id)arg1;	// IMP=0x00100000002223d5
- (id)pk_encryptedDateForKey:(id)arg1;	// IMP=0x0010000000222371
- (id)pk_encryptedNumberForKey:(id)arg1;	// IMP=0x001000000022230d
- (id)pk_encryptedUUIDForKey:(id)arg1;	// IMP=0x00100000002222a9
- (id)pk_encryptedStringForKey:(id)arg1;	// IMP=0x0010000000222245
@end

