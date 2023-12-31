//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol DMDActivationPredicateObserverManagerDelegate;

@interface DMDActivationPredicateObserverManager : NSObject
{
    id <DMDActivationPredicateObserverManagerDelegate> _delegate;	// 8 = 0x8
    NSMutableDictionary *_activationPredicateObserversByIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000011ee5
@property(retain, nonatomic) NSMutableDictionary *activationPredicateObserversByIdentifier; // @synthesize activationPredicateObserversByIdentifier=_activationPredicateObserversByIdentifier;
@property(nonatomic) __weak id <DMDActivationPredicateObserverManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleNotifyMatchingNotificationWithName:(id)arg1;	// IMP=0x0010000000011d89
- (void)handleAlarmWithIdentifier:(id)arg1;	// IMP=0x0010000000011c6b
@property(readonly, nonatomic) NSArray *notifyMatchingNotifications;
@property(readonly, nonatomic) _Bool alarms;
- (id)_subPredicateObserversForCompoundSubPredicates:(id)arg1 withUniqueIdentifier:(id)arg2;	// IMP=0x001000000001196e
- (id)_predicateObserverForPredicate:(id)arg1 withUniqueIdentifier:(id)arg2;	// IMP=0x00100000000114fd
- (void)_updateAllActivationPredicateObserverRegistrations;	// IMP=0x0010000000011450
- (void)_reportChangeToObserver:(id)arg1;	// IMP=0x001000000001130f
- (void)activationPredicateObserverDidTrigger:(id)arg1;	// IMP=0x00100000000112fd
- (id)activationPredicateObserverForIdentifier:(id)arg1;	// IMP=0x001000000001123a
- (void)removeActivationPredicateObserverWithUniqueIdentifier:(id)arg1;	// IMP=0x001000000001112a
- (id)addActivationPredicateObserverForPredicate:(id)arg1 withUniqueIdentifier:(id)arg2;	// IMP=0x0010000000010fd6
- (id)init;	// IMP=0x0010000000010f80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *distributedNotificationNames;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *managedSettingsGroups;
@property(readonly) Class superclass;

@end

