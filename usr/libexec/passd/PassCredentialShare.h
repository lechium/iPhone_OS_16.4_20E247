//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PassCredentialShare
{
}

+ (id)_propertySettersForPassCredentialShare;	// IMP=0x00400000000c8bc5
+ (id)_propertyValuesForPassCredentialShare:(id)arg1;	// IMP=0x00100000000c8a88
+ (id)_predicateForTransportIdentifier:(id)arg1;	// IMP=0x00100000000c8a65
+ (id)_predicateForCredentialShareIdentifier:(id)arg1;	// IMP=0x00100000000c8a42
+ (id)_predicateForSharePIDs:(id)arg1;	// IMP=0x00100000000c8a1f
+ (id)_predicateForSharePID:(long long)arg1;	// IMP=0x00100000000c89ac
+ (id)_passCredentialSharesWithQuery:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000c8611
+ (_Bool)deletePassCredentialShareForIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000c8573
+ (void)deletePassCredentialShareForSharePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000c84da
+ (id)passCredentialShareForIdentifier:(id)arg1 sharePIDs:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000c8356
+ (id)dbPassCredentialShareForCredentialShareIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000c8247
+ (id)passCredentialShareForTransportIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000c819d
+ (id)passCredentialShareForCredentialShareIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000c814d
+ (id)passCredentialSharesForSharePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000c80a0
+ (void)mergeInCredentialShares:(id)arg1 sharePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000c7d21
+ (void)insertOrUpdatePassCredentialShares:(id)arg1 sharePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000c7849
+ (id)databaseTable;	// IMP=0x00100000000c761d
- (void)setStatus:(unsigned long long)arg1;	// IMP=0x00400000000c8968
- (void)setIdentifier:(id)arg1;	// IMP=0x00100000000c894f
- (id)passCredentialShare;	// IMP=0x00100000000c87e2
- (void)updateWithPassCredentialShare:(id)arg1 mergingInCredentialShare:(id)arg2;	// IMP=0x00100000000c7785
- (void)updateWithPassCredentialShare:(id)arg1;	// IMP=0x00100000000c770b
- (id)initWithPassCredentialShare:(id)arg1 sharePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000c762a

@end

