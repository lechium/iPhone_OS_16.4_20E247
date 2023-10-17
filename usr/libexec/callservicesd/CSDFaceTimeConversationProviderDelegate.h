//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSMutableDictionary, NSMutableSet;

@interface CSDFaceTimeConversationProviderDelegate
{
    NSMutableSet *_conversationUUIDsWaitingForRemoteJoin;	// 8 = 0x8
    NSMutableSet *_conversationUUIDsUpgradedFromAVLess;	// 16 = 0x10
    NSMutableDictionary *_recentlyDeletedCallUUIDsByConversationUUID;	// 24 = 0x18
    CDUnknownBlockType _allowsScreenSharingBlock;	// 32 = 0x20
}

+ (id)callScreenShareAttributesForAction:(id)arg1;	// IMP=0x004000000017f676
- (void).cxx_destruct;	// IMP=0x002000000018d6dc
@property(copy, nonatomic) CDUnknownBlockType allowsScreenSharingBlock; // @synthesize allowsScreenSharingBlock=_allowsScreenSharingBlock;
@property(readonly, nonatomic) NSMutableDictionary *recentlyDeletedCallUUIDsByConversationUUID; // @synthesize recentlyDeletedCallUUIDsByConversationUUID=_recentlyDeletedCallUUIDsByConversationUUID;
- (_Bool)shouldHandleProviderWithIdentifier:(id)arg1;	// IMP=0x001000000018d60a
- (_Bool)shouldHandleProvider:(id)arg1;	// IMP=0x001000000018d5ec
@property(readonly, nonatomic) NSMutableSet *conversationUUIDsUpgradedFromAVLess; // @synthesize conversationUUIDsUpgradedFromAVLess=_conversationUUIDsUpgradedFromAVLess;
- (_Bool)shouldHandleUpdateForProvider:(id)arg1;	// IMP=0x001000000018d589
- (void)launchScreenSharingAppIfNecessary;	// IMP=0x001000000018d583
- (void)provider:(id)arg1 performSetRelayingCallAction:(id)arg2;	// IMP=0x001000000018d258
- (void)provider:(id)arg1 performSetVideoPresentationSizeCallAction:(id)arg2;	// IMP=0x001000000018cef8
- (void)provider:(id)arg1 performSetVideoPresentationStateCallAction:(id)arg2;	// IMP=0x001000000018cb09
- (void)provider:(id)arg1 performSetScreenShareAttributesCallAction:(id)arg2;	// IMP=0x001000000018c935
- (void)provider:(id)arg1 performEnableVideoCallAction:(id)arg2;	// IMP=0x001000000018c59a
- (void)provider:(id)arg1 performSetSharingScreenCallAction:(id)arg2;	// IMP=0x001000000018bfae
- (void)provider:(id)arg1 performSetSendingVideoCallAction:(id)arg2;	// IMP=0x001000000018b7c9
- (void)provider:(id)arg1 performSetHeldCallAction:(id)arg2;	// IMP=0x001000000018b4ee
- (void)leaveConversation:(id)arg1 withCallUUID:(id)arg2 reason:(long long)arg3;	// IMP=0x001000000018b0f0
- (void)leaveConversationForCallUUID:(id)arg1 endedReason:(long long)arg2;	// IMP=0x001000000018b003
- (id)_findPendingConversationWithCallUUID:(id)arg1;	// IMP=0x001000000018abbf
- (void)proceedToNewPendingConversationForLink:(id)arg1 action:(id)arg2;	// IMP=0x001000000018a757
- (void)provider:(id)arg1 performJoinCallAction:(id)arg2;	// IMP=0x001000000018a742
- (void)performJoinCallAction:(id)arg1;	// IMP=0x0010000000188501
- (id)validateLinkForJoinCallActionIfNecessary:(id)arg1 withError:(id *)arg2;	// IMP=0x0010000000187f28
- (id)linkForJoinCallAction:(id)arg1 withError:(id *)arg2;	// IMP=0x0010000000187bba
- (MISSING_TYPE *)deletedLinkForJoinCallAction:withError: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000187a4a
- (id)activatedLinkForJoinCallAction:(id)arg1 withError:(id *)arg2;	// IMP=0x00100000001878da
- (id)linkForJoinCallAction:(id)arg1 inLinks:(id)arg2;	// IMP=0x0010000000187574
- (void)provider:(id)arg1 performAnswerCallAction:(id)arg2;	// IMP=0x00100000001870b0
- (void)conversationManager:(id)arg1 connectionDidStartForConversation:(id)arg2;	// IMP=0x0010000000186fba
- (void)conversationManager:(id)arg1 reportedHandedOffConversation:(id)arg2 replacedByIdentifier:(unsigned long long)arg3 localizedHandoffRecipientDeviceCategory:(id)arg4;	// IMP=0x0010000000186c67
- (void)_failConversation:(id)arg1 failureReason:(long long)arg2 providerEndedReason:(long long)arg3;	// IMP=0x00100000001869d3
- (void)conversationManager:(id)arg1 reportedInvalidLinkForPendingConversation:(id)arg2;	// IMP=0x001000000018694e
- (void)conversationManager:(id)arg1 reportedLetMeInRejectedForPendingConversation:(id)arg2;	// IMP=0x00100000001868c9
- (void)conversationManager:(id)arg1 conversation:(id)arg2 changedBytesOfDataUsed:(long long)arg3;	// IMP=0x00100000001866c1
- (void)conversationManager:(id)arg1 removedConversationWithUUID:(id)arg2;	// IMP=0x00100000001864d0
- (void)conversationManager:(id)arg1 conversation:(id)arg2 addedActiveParticipant:(id)arg3;	// IMP=0x0010000000185f78
- (void)conversationManager:(id)arg1 conversation:(id)arg2 failedWithContext:(id)arg3;	// IMP=0x0010000000185e0c
- (void)conversationManager:(id)arg1 conversation:(id)arg2 receivedMessage:(id)arg3 fromHandle:(id)arg4 withUpdate:(id)arg5;	// IMP=0x0010000000185d43
- (_Bool)isManagingCallWithUUID:(id)arg1;	// IMP=0x0010000000185bc3
- (void)conversationManager:(id)arg1 conversationScreenSharingChanged:(id)arg2 forParticipant:(id)arg3;	// IMP=0x0010000000185a8c
- (void)conversationManager:(id)arg1 conversationChanged:(id)arg2;	// IMP=0x0010000000184860
- (void)conversationManager:(id)arg1 avModeChanged:(unsigned long long)arg2 toAVMode:(unsigned long long)arg3 forConversation:(id)arg4;	// IMP=0x0010000000183f0e
- (void)conversationManager:(id)arg1 joinConversationWithRequest:(id)arg2;	// IMP=0x0010000000183ebf
- (void)declineConversation:(id)arg1 reason:(long long)arg2 destinations:(id)arg3;	// IMP=0x0010000000183b0e
- (void)declineRemoteMembersForConversation:(id)arg1 reason:(long long)arg2;	// IMP=0x0010000000183893
- (void)declineRemoteDevicesForConversation:(id)arg1 reason:(long long)arg2;	// IMP=0x00100000001835e2
- (_Bool)isUnansweredOutgoingOneToOneConversation:(id)arg1;	// IMP=0x00100000001833c0
- (void)startOutgoingOneToOneTimeoutIfNecessary:(id)arg1;	// IMP=0x0010000000182ce8
- (void)handleRespondedElsewhereMessage:(id)arg1 forConversation:(id)arg2 fromHandle:(id)arg3;	// IMP=0x0010000000182c0e
- (void)handleRespondedElsewhereMessage:(id)arg1 forConversation:(id)arg2 fromHandle:(id)arg3 withAliases:(id)arg4;	// IMP=0x0010000000182744
- (void)handleInvitationMessageForLetMeIn:(id)arg1 forConversation:(id)arg2 pendingConversation:(id)arg3 link:(id)arg4 fromHandle:(id)arg5;	// IMP=0x0010000000181e84
- (void)handleInvitationMessage:(id)arg1 forConversation:(id)arg2 fromHandle:(id)arg3;	// IMP=0x00100000001817fc
- (void)handleRemoveMembersMessage:(id)arg1 forConversation:(id)arg2;	// IMP=0x0010000000181545
- (void)handleUpgradeMessage:(id)arg1 forConversation:(id)arg2 fromHandle:(id)arg3 withUpdate:(id)arg4;	// IMP=0x0010000000180544
- (void)handleReceivedVideoUpgradeMessage:(id)arg1 forConversation:(id)arg2 fromHandle:(id)arg3;	// IMP=0x0010000000180028
- (void)handleScreenShareMessage:(id)arg1 forConversation:(id)arg2 fromHandle:(id)arg3 withUpdate:(id)arg4;	// IMP=0x001000000017ffcc
- (void)handleNicknameUpdateMessage:(id)arg1 forConversation:(id)arg2 fromHandle:(id)arg3 withUpdate:(id)arg4;	// IMP=0x001000000017fe41
- (void)handleDeclineMessage:(id)arg1 forConversation:(id)arg2 fromHandle:(id)arg3 withUpdate:(id)arg4;	// IMP=0x001000000017fbd8
- (void)handleMessage:(id)arg1 forConversation:(id)arg2 fromHandle:(id)arg3 withUpdate:(id)arg4;	// IMP=0x001000000017f915
- (void)cleanUpConversationIfNecessaryForConversationUUID:(id)arg1 failureContext:(id)arg2;	// IMP=0x001000000017f85b
- (int)TUCallRemoteVideoPresentationStateFromCXVideoPresentationState:(long long)arg1;	// IMP=0x001000000017f65b
- (void)setWaitingForRemoteJoin:(_Bool)arg1 forConversationUUID:(id)arg2;	// IMP=0x001000000017f5aa
@property(readonly, nonatomic) NSMutableSet *conversationUUIDsWaitingForRemoteJoin; // @synthesize conversationUUIDsWaitingForRemoteJoin=_conversationUUIDsWaitingForRemoteJoin;
- (_Bool)isWaitingForRemoteJoinForConversationUUID:(id)arg1;	// IMP=0x001000000017f4c6
- (void)setCallUUID:(id)arg1 forConversationUUID:(id)arg2;	// IMP=0x001000000017f1ce
- (id)initWithConversationManager:(id)arg1 queue:(id)arg2 invitationResolver:(id)arg3;	// IMP=0x001000000017f0f4

@end
