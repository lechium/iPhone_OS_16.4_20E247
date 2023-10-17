//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDClientManager, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface CSDReportingController : NSObject
{
    NSMutableArray *_reporters;	// 8 = 0x8
    NSMutableDictionary *_reportingSessionByStreamToken;	// 16 = 0x10
    NSMutableSet *_conversationUUIDs;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    CSDClientManager *_clientManager;	// 40 = 0x28
}

+ (id)sharedInstanceWithQueue:(id)arg1;	// IMP=0x00200000001c2153
+ (id)sharedInstance;	// IMP=0x00100000001c211f
- (void).cxx_destruct;	// IMP=0x00200000001c7a9a
@property(readonly, nonatomic) CSDClientManager *clientManager; // @synthesize clientManager=_clientManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSMutableSet *conversationUUIDs; // @synthesize conversationUUIDs=_conversationUUIDs;
@property(readonly, nonatomic) NSMutableDictionary *reportingSessionByStreamToken; // @synthesize reportingSessionByStreamToken=_reportingSessionByStreamToken;
@property(retain, nonatomic) NSMutableArray *reporters; // @synthesize reporters=_reporters;
- (void)conversationManager:(id)arg1 addedActivatedLink:(id)arg2;	// IMP=0x00100000001c78d3
- (void)conversationManager:(id)arg1 removedActiveConversation:(id)arg2;	// IMP=0x00100000001c765e
- (void)reportingController:(id)arg1 letMeInRequestStateChangedForConversation:(id)arg2;	// IMP=0x00100000001c74da
- (void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2;	// IMP=0x00100000001c7356
- (void)conversationManager:(id)arg1 remoteMembersChangedForConversation:(id)arg2;	// IMP=0x00100000001c71d2
- (void)conversationManager:(id)arg1 activeRemoteParticipantsChangedForConversation:(id)arg2;	// IMP=0x00100000001c704e
- (void)conversationsChangedForConversationManager:(id)arg1;	// IMP=0x00100000001c6c80
@property(readonly, copy, nonatomic) NSArray *calls;
- (void)momentsReportingSession:(id)arg1 didGenerateUsageReport:(id)arg2;	// IMP=0x00100000001c69b8
- (void)didReceiveResultsForStream:(long long)arg1 withTransactionID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000001c69a6
- (void)didStartRequestForStream:(long long)arg1 withTransactionID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000001c6994
- (void)didCleanUpForStream:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c6982
- (void)registeredStream:(long long)arg1 withAvailability:(int)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000001c6970
- (void)momentsController:(id)arg1 didReceiveResultsForStream:(long long)arg2 withTransactionID:(id)arg3;	// IMP=0x00100000001c6958
- (void)momentsController:(id)arg1 didStartRequestForStream:(long long)arg2 withTransactionID:(id)arg3;	// IMP=0x00100000001c6940
- (void)momentsController:(id)arg1 didCleanUpForStream:(long long)arg2;	// IMP=0x00100000001c692b
- (void)momentsController:(id)arg1 registeredStream:(long long)arg2 withAvailability:(int)arg3;	// IMP=0x00100000001c6913
- (void)didReceiveResultsForStream:(long long)arg1 withTransactionID:(id)arg2;	// IMP=0x00100000001c6855
- (void)didStartRequestForStream:(long long)arg1 withTransactionID:(id)arg2;	// IMP=0x00100000001c6797
- (void)didCleanUpForStream:(long long)arg1;	// IMP=0x00100000001c66fa
- (void)registeredStream:(long long)arg1 withAvailability:(int)arg2;	// IMP=0x00100000001c662a
- (void)didEndSession:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;	// IMP=0x00100000001c63e4
- (void)sendUserScoreToRTCReporting:(id)arg1 withScore:(int)arg2;	// IMP=0x00100000001c61e8
- (void)sentLetMeInRequestForConversation:(id)arg1 isApproved:(_Bool)arg2;	// IMP=0x00100000001c5fe5
- (void)receivedLetMeInRequestForConversation:(id)arg1;	// IMP=0x00100000001c5e07
- (void)voipPushDroppedOnTheFloor:(id)arg1;	// IMP=0x00100000001c5c29
- (void)voipAppBecameDisabledFromLaunching:(id)arg1;	// IMP=0x00100000001c5a4b
- (void)voipAppFailedToPostIncomingCall:(id)arg1;	// IMP=0x00100000001c586d
- (void)avcBlobRequestMessageRetrySucceededForConversation:(id)arg1;	// IMP=0x00100000001c568f
- (void)avcBlobRequestMessageRetryFailedForConversation:(id)arg1;	// IMP=0x00100000001c54b1
- (void)avcBlobRequestMessageRetryStartedForConversation:(id)arg1;	// IMP=0x00100000001c52d3
- (void)messageRetrySucceededForConversation:(id)arg1;	// IMP=0x00100000001c50f5
- (void)messageRetryFailedForConversation:(id)arg1;	// IMP=0x00100000001c4f17
- (void)messageRetryStartedForConversation:(id)arg1;	// IMP=0x00100000001c4d39
- (void)avcBlobRecoveryTimedOutForConversation:(id)arg1;	// IMP=0x00100000001c4b5b
- (void)transitionAttemptForConversation:(id)arg1;	// IMP=0x00100000001c497d
- (void)avcBlobRecoveryStartedForConversation:(id)arg1;	// IMP=0x00100000001c479f
- (void)groupActivitiesReportsReceived:(id)arg1 forConversation:(id)arg2;	// IMP=0x00100000001c459d
- (void)chatReceived:(id)arg1;	// IMP=0x00100000001c43bf
- (void)idsReportsReceived:(id)arg1 forSessionWithUUID:(id)arg2;	// IMP=0x00100000001c4217
- (void)idsReportsReceived:(id)arg1 forConversation:(id)arg2;	// IMP=0x00100000001c406f
- (void)createConversationReportingSession:(id)arg1;	// IMP=0x00100000001c3d99
- (void)createOneToOneFTReportingSessionForCallWithUUID:(id)arg1 withReportingHierarchyToken:(id)arg2 withVideo:(_Bool)arg3;	// IMP=0x00100000001c3a83
- (void)reportTimedOutPickingRoute:(id)arg1;	// IMP=0x00100000001c377f
- (void)reportRouteWasPicked:(id)arg1;	// IMP=0x00100000001c347b
- (void)reportProviderFailedWithAction:(id)arg1 forCall:(id)arg2;	// IMP=0x00100000001c3267
- (void)reportTransactionGroupCompleted:(id)arg1;	// IMP=0x00100000001c3089
- (void)reportRelayMessageReceived:(id)arg1 fromPairedDevice:(_Bool)arg2;	// IMP=0x00100000001c2e96
- (void)reportAllCallsBackgrounded;	// IMP=0x00100000001c2ce5
- (void)reportCallEnteredForeground:(id)arg1;	// IMP=0x00100000001c2b07
- (void)handleCallStatusChanged:(id)arg1;	// IMP=0x00100000001c27da
- (void)addReporter:(id)arg1;	// IMP=0x00100000001c274f
- (void)dealloc;	// IMP=0x00100000001c26da
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000001c2249

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
