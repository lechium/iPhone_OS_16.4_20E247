//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableSet;
@protocol EMVIPReader, MFFavoritesReader, MFUserNotificationCenterObserverDelegate, OS_dispatch_queue;

@interface MFUserNotificationCenterObserver : NSObject
{
    NSArray *_activeAccounts;	// 8 = 0x8
    struct os_unfair_lock_s _activeAccountsLock;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    id <EMVIPReader> _vipReader;	// 32 = 0x20
    id <MFFavoritesReader> _favoritesReader;	// 40 = 0x28
    NSMutableSet *_observedAccountIDs;	// 48 = 0x30
    NSMutableDictionary *_observedStoresByAccountID;	// 56 = 0x38
    id <MFUserNotificationCenterObserverDelegate> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000c3334
@property(nonatomic) __weak id <MFUserNotificationCenterObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *observedStoresByAccountID; // @synthesize observedStoresByAccountID=_observedStoresByAccountID;
@property(retain, nonatomic) NSMutableSet *observedAccountIDs; // @synthesize observedAccountIDs=_observedAccountIDs;
@property(readonly, nonatomic) id <MFFavoritesReader> favoritesReader; // @synthesize favoritesReader=_favoritesReader;
@property(readonly, nonatomic) id <EMVIPReader> vipReader; // @synthesize vipReader=_vipReader;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)_nts_updateObservationWithAccounts:(id)arg1;	// IMP=0x00100000000c2b6e
- (void)_nts_stopObservingAccountWithIDs:(id)arg1;	// IMP=0x00100000000c25f5
- (void)_nts_startObservingAccounts:(id)arg1;	// IMP=0x00100000000c1f26
- (void)_handleFavoriteMailboxesChanged:(id)arg1;	// IMP=0x00100000000c1f13
- (void)_handlePushedFoldersChanged:(id)arg1;	// IMP=0x00100000000c1f00
- (void)_handleFoldersChanged:(id)arg1;	// IMP=0x00100000000c1da2
- (void)_handleConversationFlagsChanged:(id)arg1;	// IMP=0x00100000000c1d42
- (void)_handleVIPsChanged:(id)arg1;	// IMP=0x00100000000c1c40
- (void)_handleAccountsChanged:(id)arg1;	// IMP=0x00100000000c16a3
- (void)_handleMessagesDeleted:(id)arg1;	// IMP=0x00100000000c152b
- (void)_handleMessagesFlagsChanged:(id)arg1;	// IMP=0x00100000000c1385
- (void)_handleMessagesAdded:(id)arg1;	// IMP=0x00100000000c1226
- (_Bool)isObservingMailbox:(id)arg1 inAccountID:(id)arg2;	// IMP=0x00100000000c0e5f
@property(readonly, copy, nonatomic) NSArray *activeAccounts;
- (void)_stopObservingStore:(id)arg1;	// IMP=0x00100000000c0c70
- (void)_startObservingStore:(id)arg1;	// IMP=0x00100000000c0b82
- (void)stopObserving;	// IMP=0x00100000000c09f4
- (void)startObserving;	// IMP=0x00100000000c0836
- (id)initWithVIPReader:(id)arg1 favoritesReader:(id)arg2 delegate:(id)arg3;	// IMP=0x00100000000c06c1

@end

