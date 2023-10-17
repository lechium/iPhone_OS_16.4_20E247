//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PaymentTransactionAuthentication
{
}

+ (id)_predicateForPaymentTransactionPID:(long long)arg1;	// IMP=0x004000000004068f
+ (id)createIfNotExistInDatabase:(id)arg1 withPaymentTransactionPID:(long long)arg2;	// IMP=0x001000000004019c
+ (id)anyInDatabase:(id)arg1 withPaymentTransactionPID:(long long)arg2;	// IMP=0x0010000000040110
+ (id)databaseTable;	// IMP=0x0010000000040103
- (_Bool)reset;	// IMP=0x0040000000040476
- (_Bool)updateAuthenticationComplete:(_Bool)arg1;	// IMP=0x0010000000040415
- (_Bool)addDataCollectedAuthenticationMechanisms:(unsigned long long)arg1;	// IMP=0x001000000004036b
- (_Bool)addProcessedAuthenticationMechanisms:(unsigned long long)arg1;	// IMP=0x00100000000402c1
- (_Bool)updateWithUserConfirmationData:(id)arg1;	// IMP=0x00100000000402a8
- (_Bool)updateWithTransactionSignatureData:(id)arg1;	// IMP=0x001000000004028f
- (_Bool)updateWithPaymentPINData:(id)arg1;	// IMP=0x0010000000040276

@end
