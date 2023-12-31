//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AppletSubcredentialRangingSuspensionReasons
{
}

+ (id)databaseTable;	// IMP=0x0040000000094289
+ (id)_predicateForPaymentApplicationPID:(long long)arg1;	// IMP=0x0010000000094216
+ (id)_predicateForAppletSubcredentialPID:(long long)arg1;	// IMP=0x00100000000941a3
+ (_Bool)deleteRangingSuspensionReasonsForCredential:(id)arg1 forPaymentApplication:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000094017
+ (unsigned long long)suspensionReasonsForCredential:(id)arg1 forPaymentApplication:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000093d3c
+ (id)insertOrUpdateSubcredentialRangingSuspensionReasonForCredential:(id)arg1 forPaymentApplication:(id)arg2 withReasons:(unsigned long long)arg3 inDatabase:(id)arg4;	// IMP=0x00100000000938d0
- (id)initWithSubcredential:(id)arg1 forPaymentApplication:(id)arg2 withRangingSuspensionReasons:(unsigned long long)arg3 inDatabase:(id)arg4;	// IMP=0x0040000000093a19

@end

