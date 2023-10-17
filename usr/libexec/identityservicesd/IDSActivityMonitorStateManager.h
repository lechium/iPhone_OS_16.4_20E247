//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTMessageDelivery, IDSActivityPushListener, IDSDAccountController, IDSDServiceController, IDSPeerIDManager, MISSING_TYPE, NSMutableDictionary, NSMutableSet, NSString;
@protocol IDSActivityStateProvider;

@interface IDSActivityMonitorStateManager : NSObject
{
    NSMutableSet *_listeningOnActivities;	// 8 = 0x8
    NSMutableDictionary *_topicStringToSubscribedInfo;	// 16 = 0x10
    NSMutableDictionary *_listenersByActivity;	// 24 = 0x18
    id <IDSActivityStateProvider> _stateProvider;	// 32 = 0x20
    IDSActivityPushListener *_pushListener;	// 40 = 0x28
    FTMessageDelivery *_messageDelivery;	// 48 = 0x30
    IDSPeerIDManager *_peerIDManager;	// 56 = 0x38
    IDSDAccountController *_accountController;	// 64 = 0x40
    MISSING_TYPE *_serviceController;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x002000000001f830
- (void).cxx_destruct;	// IMP=0x00200000000248e0
@property(retain, nonatomic) IDSDServiceController *serviceController; // @synthesize serviceController=_serviceController;
@property(retain, nonatomic) IDSDAccountController *accountController; // @synthesize accountController=_accountController;
@property(retain, nonatomic) IDSPeerIDManager *peerIDManager; // @synthesize peerIDManager=_peerIDManager;
@property(retain, nonatomic) FTMessageDelivery *messageDelivery; // @synthesize messageDelivery=_messageDelivery;
@property(retain, nonatomic) IDSActivityPushListener *pushListener; // @synthesize pushListener=_pushListener;
@property(retain, nonatomic) id <IDSActivityStateProvider> stateProvider; // @synthesize stateProvider=_stateProvider;
@property(retain, nonatomic) NSMutableDictionary *listenersByActivity; // @synthesize listenersByActivity=_listenersByActivity;
@property(retain, nonatomic) NSMutableDictionary *topicStringToSubscribedInfo; // @synthesize topicStringToSubscribedInfo=_topicStringToSubscribedInfo;
@property(retain, nonatomic) NSMutableSet *listeningOnActivities; // @synthesize listeningOnActivities=_listeningOnActivities;
- (void)pushListener:(id)arg1 receivedUpdatePush:(id)arg2;	// IMP=0x0010000000023460
- (void)_updateListener;	// IMP=0x0010000000023260
- (void)_subscribeForInfo:(id)arg1 withDescription:(id)arg2 resolvedTokens:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000022680
- (void)unsubscribeForActivity:(id)arg1 subActivity:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000021d30
- (void)subscribeForInfo:(id)arg1 onActivity:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000020ad0
- (void)ackUpdatesForActivity:(id)arg1;	// IMP=0x0010000000020a50
- (id)currentSubscriptionsForActivity:(id)arg1;	// IMP=0x00100000000209b0
- (void)removeSubscriptionForActivity:(id)arg1 subActivity:(id)arg2;	// IMP=0x0010000000020900
- (void)storeSubscription:(id)arg1 forActivity:(id)arg2;	// IMP=0x0010000000020850
- (id)storedUpdatesForActivity:(id)arg1;	// IMP=0x0010000000020770
- (_Bool)isListeningOnActivity:(id)arg1;	// IMP=0x0010000000020700
- (_Bool)stopListeningOnActivity:(id)arg1;	// IMP=0x0010000000020540
- (_Bool)startListeningOnActivity:(id)arg1;	// IMP=0x0010000000020370
- (void)removeListener:(id)arg1 forActivity:(id)arg2;	// IMP=0x0010000000020120
- (void)addListener:(id)arg1 forActivity:(id)arg2;	// IMP=0x001000000001ff90
- (void)setup;	// IMP=0x001000000001fee0
- (id)initWithStateProvider:(id)arg1 messageDelivery:(id)arg2 peerIDManager:(id)arg3 accountController:(id)arg4 serviceController:(id)arg5 queue:(id)arg6;	// IMP=0x001000000001fc90
- (id)initWithStateProvider:(id)arg1 messageDelivery:(id)arg2 peerIDManager:(id)arg3 accountController:(id)arg4 serviceController:(id)arg5 pushListener:(id)arg6;	// IMP=0x001000000001fa80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
