//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PeerPaymentAccountInvitation
{
}

+ (id)_propertySettersForPeerPaymentAccountInvitation;	// IMP=0x004000000004350b
+ (id)_peerPaymentAccountInvitationsWithQuery:(id)arg1;	// IMP=0x0010000000043357
+ (id)_predicateForPeerPaymentAccountPID:(long long)arg1;	// IMP=0x0010000000043177
+ (id)invitationsForPeerPaymentAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000042f4d
+ (void)deleteInvitationsForPeerPaymentAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000042eb4
+ (id)insertInvitations:(id)arg1 forPeerPaymentAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000042c97
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0010000000042c68
+ (id)databaseTable;	// IMP=0x0010000000042c5b
- (id)peerPaymentAccountInvitation;	// IMP=0x00400000000431ea
- (id)initWithInvitation:(id)arg1 forPeerPaymentAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000043001

@end

