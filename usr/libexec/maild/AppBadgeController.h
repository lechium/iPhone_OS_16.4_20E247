//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDMessageCountQueryHandler, EDMessagePersistence, EDPersistenceHookRegistry, EFQuery, EMFocus, EMFocusController, EMObjectID, MFMailboxProvider, NSDictionary, NSString, UNUserNotificationCenter;
@protocol EFCancelable, EFScheduler;

@interface AppBadgeController : NSObject
{
    id <EFScheduler> _scheduler;	// 8 = 0x8
    EDMessagePersistence *_messagePersistence;	// 16 = 0x10
    EDPersistenceHookRegistry *_hookRegistry;	// 24 = 0x18
    MFMailboxProvider *_mailboxProvider;	// 32 = 0x20
    EMFocusController *_focusController;	// 40 = 0x28
    EDMessageCountQueryHandler *_queryHandler;	// 48 = 0x30
    EFQuery *_query;	// 56 = 0x38
    NSDictionary *_notificationSettingsByTopic;	// 64 = 0x40
    long long _oldBadgeCount;	// 72 = 0x48
    UNUserNotificationCenter *_notificationCenter;	// 80 = 0x50
    EMObjectID *_mailboxObserverID;	// 88 = 0x58
    EMFocus *_currentFocus;	// 96 = 0x60
    id <EFCancelable> _focusObservationToken;	// 104 = 0x68
}

+ (id)log;	// IMP=0x0020000000002c51
- (void).cxx_destruct;	// IMP=0x0020000000004cab
@property(retain, nonatomic) id <EFCancelable> focusObservationToken; // @synthesize focusObservationToken=_focusObservationToken;
@property(retain, nonatomic) EMFocus *currentFocus; // @synthesize currentFocus=_currentFocus;
@property(retain, nonatomic) EMObjectID *mailboxObserverID; // @synthesize mailboxObserverID=_mailboxObserverID;
@property(retain, nonatomic) UNUserNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(nonatomic) long long oldBadgeCount; // @synthesize oldBadgeCount=_oldBadgeCount;
@property(copy, nonatomic) NSDictionary *notificationSettingsByTopic; // @synthesize notificationSettingsByTopic=_notificationSettingsByTopic;
@property(retain, nonatomic) EFQuery *query; // @synthesize query=_query;
@property(retain, nonatomic) EDMessageCountQueryHandler *queryHandler; // @synthesize queryHandler=_queryHandler;
@property(retain, nonatomic) EMFocusController *focusController; // @synthesize focusController=_focusController;
@property(retain, nonatomic) MFMailboxProvider *mailboxProvider; // @synthesize mailboxProvider=_mailboxProvider;
@property(retain, nonatomic) EDPersistenceHookRegistry *hookRegistry; // @synthesize hookRegistry=_hookRegistry;
@property(retain, nonatomic) EDMessagePersistence *messagePersistence; // @synthesize messagePersistence=_messagePersistence;
@property(retain, nonatomic) id <EFScheduler> scheduler; // @synthesize scheduler=_scheduler;
- (void)currentFocusChanged:(id)arg1;	// IMP=0x0010000000004a46
- (void)mailboxListChanged:(id)arg1;	// IMP=0x001000000000499e
- (void)countDidChange:(long long)arg1 acknowledgementToken:(id)arg2;	// IMP=0x0010000000004938
- (void)userNotificationCenterSettingsDidChange:(id)arg1;	// IMP=0x00100000000047c0
- (void)_startObservingCountPredicate:(id)arg1 serverCountMailboxScope:(id)arg2;	// IMP=0x0010000000004597
- (id)_excludedAccountIdentifiersByCurrentFocus;	// IMP=0x00100000000042e1
- (void)_createCountQueryPredicateFromNotificationTopics;	// IMP=0x0010000000003843
- (void)setBadgeCount:(long long)arg1;	// IMP=0x001000000000369b
- (id)_enabledAndExcludedMailboxesExcludingAccountIDs:(id)arg1;	// IMP=0x0010000000003358
- (void)_nts_getAccountsExcludedFromUnreadCount:(out id *)arg1 includeUnreadVIPs:(out _Bool *)arg2 includeUnreadNotifiedThreads:(out _Bool *)arg3;	// IMP=0x001000000000307f
- (void)dealloc;	// IMP=0x0010000000002fc0
- (id)initWithMessagePersistence:(id)arg1 hookRegistry:(id)arg2 mailboxProvider:(id)arg3 focusController:(id)arg4;	// IMP=0x0010000000002d2e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

