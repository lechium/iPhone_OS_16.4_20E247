//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CARAutomaticDNDStatus, NSString;
@protocol IMDAutoReplyDelegate, OS_dispatch_queue;

@interface IMDAvailabilityAutoReplier : NSObject
{
    id <IMDAutoReplyDelegate> _replyDelegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_privateWorkQueue;	// 16 = 0x10
    CARAutomaticDNDStatus *_automaticDNDStatus;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005cd7d
@property(retain, nonatomic) CARAutomaticDNDStatus *automaticDNDStatus; // @synthesize automaticDNDStatus=_automaticDNDStatus;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *privateWorkQueue; // @synthesize privateWorkQueue=_privateWorkQueue;
@property(nonatomic) __weak id <IMDAutoReplyDelegate> replyDelegate; // @synthesize replyDelegate=_replyDelegate;
- (_Bool)_sosURLMatchInText:(id)arg1;	// IMP=0x000000000005cc1c
- (_Bool)_sosTransportValidForMessage:(id)arg1;	// IMP=0x000000000005cbb1
- (_Bool)_messageIsSOS:(id)arg1;	// IMP=0x000000000005ca8f
- (_Bool)_hasRecentOutgoingMessagesInChat:(id)arg1;	// IMP=0x000000000005c93c
- (_Bool)_favoritesContainsParticipants:(id)arg1;	// IMP=0x000000000005c667
- (_Bool)_contactsContainsParticipants:(id)arg1;	// IMP=0x000000000005c491
- (_Bool)_audience:(unsigned long long)arg1 allowsRepliesToChat:(id)arg2;	// IMP=0x000000000005c1de
- (id)_customizedAutoReplyMessage;	// IMP=0x000000000005bf63
- (unsigned long long)_autoReplyAudience;	// IMP=0x000000000005bd64
- (id)_stringForAutoReplyAudience:(unsigned long long)arg1;	// IMP=0x000000000005bd4a
- (_Bool)_shouldSendTextAutoReplyForChat:(id)arg1;	// IMP=0x000000000005bba5
- (void)_sendTextAutoReplyToChat:(id)arg1 withUrgentBreakthroughInstructions:(_Bool)arg2;	// IMP=0x000000000005b92c
- (id)_autoReplyMessageTextWithUrgentBreakthroughInstructions:(_Bool)arg1;	// IMP=0x000000000005b7a2
- (_Bool)_messageHasLegacyUrgentTriggerMatchInText:(id)arg1;	// IMP=0x000000000005b5d3
- (_Bool)_isSMSChat:(id)arg1;	// IMP=0x000000000005b585
- (void)iterateRecentMessagesInChat:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000005abda
- (_Bool)_haveRecentUrgentMessageInGracePeriodForChat:(id)arg1;	// IMP=0x000000000005a6ac
- (_Bool)_shouldIgnoreDoNotDisturbForMessages:(id)arg1 inChat:(id)arg2;	// IMP=0x000000000005a384
- (id)_messageGuidsForMessages:(id)arg1;	// IMP=0x000000000005a1a0
- (_Bool)_messageItemSupportsAvailabilityReply:(id)arg1;	// IMP=0x0000000000059f99
- (_Bool)_messageItemSupportsBreakthroughNotification:(id)arg1;	// IMP=0x0000000000059e09
- (id)_messageItemsSupportingBreakthroughNotifications:(id)arg1;	// IMP=0x0000000000059b9b
- (_Bool)_haveRecentlySentUnavailabilityAutoReplyMessageToChat:(id)arg1;	// IMP=0x00000000000597d5
- (_Bool)_isInDrivingFocus;	// IMP=0x0000000000059580
- (_Bool)_deviceSupportsSMSAutoReplyForChat:(id)arg1;	// IMP=0x00000000000594e7
- (_Bool)_localDeviceHasSIMMatchingChat:(id)arg1;	// IMP=0x00000000000594b8
- (_Bool)_deviceSupportsiMessageAutoReply;	// IMP=0x000000000005946f
- (_Bool)_deviceIsPhone;	// IMP=0x000000000005941f
- (void)_sendTextAutoReplyIfNecessaryForMessages:(id)arg1 withUrgentBreakthroughInstructions:(_Bool)arg2 inChat:(id)arg3;	// IMP=0x000000000005932f
- (void)_sendDeliveredQuietelyForMessages:(id)arg1 forIncomingMessageFromIDSID:(id)arg2 inChat:(id)arg3;	// IMP=0x0000000000059064
- (id)_messageItemsSupportingAvailabilityReplyFromItems:(id)arg1;	// IMP=0x0000000000058df6
- (_Bool)_messageSenderEligibleToReceiveAvailabilityInformation:(id)arg1;	// IMP=0x0000000000058c87
- (_Bool)_chatEligibleForAvailabilityInformation:(id)arg1;	// IMP=0x0000000000058b90
- (id)_dndHandleForIMDHandle:(id)arg1;	// IMP=0x0000000000058ae1
- (_Bool)_userIsAvailableToHandle:(id)arg1;	// IMP=0x000000000005897f
- (void)_processMessagesForAvailabilityAutoReply:(id)arg1 forIncomingMessageFromIDSID:(id)arg2 inChat:(id)arg3;	// IMP=0x00000000000586a5
- (void)processMessages:(id)arg1 inChat:(id)arg2 fromIDSID:(id)arg3;	// IMP=0x0000000000058596
- (id)init;	// IMP=0x0000000000058510

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

