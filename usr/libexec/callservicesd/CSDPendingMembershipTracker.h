//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol CSDPendingMembershipTrackerDelegate, CSDPendingMembershipTrackerMessenger;

@interface CSDPendingMembershipTracker : NSObject
{
    MISSING_TYPE *messenger;	// 8 = 0x8
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *storage;	// 24 = 0x18
    MISSING_TYPE *serverBag;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000241490
- (void)handleLocalRejectionOfMember:(id)arg1 forConversation:(id)arg2;	// IMP=0x001000000023f3d0
- (void)handleLocalApprovalOfMember:(id)arg1 forConversation:(id)arg2;	// IMP=0x001000000023f3c0
- (void)handleRemoteRejectionOfMember:(id)arg1 forConversation:(id)arg2 from:(id)arg3 transactionUUID:(id)arg4;	// IMP=0x001000000023f2c0
- (void)handleRemoteApprovalOfMember:(id)arg1 forConversation:(id)arg2 from:(id)arg3 transactionUUID:(id)arg4;	// IMP=0x001000000023f2a0
- (void)handleDelegatedPendingMember:(id)arg1 forConversation:(id)arg2 withGroupUUID:(id)arg3 from:(id)arg4 transactionUUID:(id)arg5;	// IMP=0x001000000023f190
- (void)handleNewPendingMember:(id)arg1 responseKey:(id)arg2 forConversation:(id)arg3 withLink:(id)arg4 dateInitiatedLMI:(id)arg5;	// IMP=0x001000000023ea60
- (id)pendingMembersByGroup;	// IMP=0x001000000023d690
- (id)retrievePendingMembersFor:(id)arg1;	// IMP=0x001000000023d5b0
- (void)clearPendingMembershipFor:(id)arg1;	// IMP=0x001000000023d330
- (void)stopTrackingPendingMember:(id)arg1 forConversation:(id)arg2 triggeredLocally:(_Bool)arg3;	// IMP=0x001000000023d2b0
- (id)init;	// IMP=0x001000000023d070
@property(nonatomic) __weak id <CSDPendingMembershipTrackerDelegate> delegate; // @synthesize delegate;
@property(nonatomic) __weak id <CSDPendingMembershipTrackerMessenger> messenger; // @synthesize messenger;

@end

