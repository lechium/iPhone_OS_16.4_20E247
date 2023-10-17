//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LSInstallProgressList, NSArray, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _LSInstallProgressService : NSObject
{
    NSMutableSet *_observers;	// 8 = 0x8
    LSInstallProgressList *_progresses;	// 16 = 0x10
    NSMutableSet *_publishingStrings;	// 24 = 0x18
    NSMutableDictionary *_installIndexes;	// 32 = 0x20
    NSMutableOrderedSet *_orderedInstalls;	// 40 = 0x28
    NSMutableSet *_inactiveInstalls;	// 48 = 0x30
    NSMutableDictionary *_installTypes;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_installControlsQueue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_observersQueue;	// 72 = 0x48
    NSArray *_journalledNotificationsToReplay;	// 80 = 0x50
    NSMutableArray *_startupJournalledNotifications;	// 88 = 0x58
    _Bool _replayingJournalToNewClients;	// 96 = 0x60
    NSObject<OS_dispatch_source> *_progressProportionsSaveTimerSource;	// 104 = 0x68
    struct os_unfair_lock_s _progressProportionsLock;	// 112 = 0x70
    NSMutableDictionary *_progressProportions;	// 120 = 0x78
    _Bool _usingNetwork;	// 128 = 0x80
}

+ (int)notificationTypeForOperation:(unsigned long long)arg1;	// IMP=0x0010000000164b37
+ (void)beginListening;	// IMP=0x0010000000164a37
+ (id)sharedInstance;	// IMP=0x00100000001649e2
- (void).cxx_destruct;	// IMP=0x000000000016ee46
- (void)dispatchJournalledNotificationsToObserver:(id)arg1;	// IMP=0x000000000016e794
- (void)directlySendNotification:(int)arg1 withProxies:(id)arg2 toObserver:(id)arg3;	// IMP=0x000000000016e5dc
- (void)directlySendNotification:(int)arg1 withProxies:(id)arg2 toObserverProxy:(id)arg3;	// IMP=0x000000000016e30a
- (void)dispatchJournalledNotificationsToConnectedClients;	// IMP=0x000000000016df14
- (void)performJournalRecovery;	// IMP=0x000000000016dd47
- (id)loadJournalledNotificationsFromDisk;	// IMP=0x000000000016d4cc
- (void)addSendNotificationFenceWithTimeout:(double)arg1 fenceBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000016cf94
- (void)sendNetworkUsageChangedNotification;	// IMP=0x000000000016ce71
- (void)setProgressProportionsByPhase:(id)arg1 forInstallOfApplicationWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000016cb57
- (id)progressProportionsForBundleID:(id)arg1;	// IMP=0x000000000016caca
- (void)discardProportionsForBundleID:(id)arg1;	// IMP=0x000000000016c9e1
- (void)coalesceProportionsSave;	// IMP=0x000000000016c949
- (void)saveProportions;	// IMP=0x000000000016c790
- (void)loadProportions;	// IMP=0x000000000016c0b6
- (void)sendNotification:(int)arg1 forApps:(id)arg2 withPlugins:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000016bffa
- (id)_prepareApplicationProxiesForNotification:(int)arg1 identifiers:(id)arg2 withPlugins:(_Bool)arg3;	// IMP=0x000000000016bc9e
- (void)sendDatabaseRebuiltNotification;	// IMP=0x000000000016ba93
- (void)sendDatabaseRebuiltNotificationToObserver:(id)arg1;	// IMP=0x000000000016b949
- (void)sendNotification:(int)arg1 forAppProxies:(id)arg2 Plugins:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000016a0b4
- (SEL)observerSelectorForNotification:(int)arg1;	// IMP=0x0000000000169ff7
- (void)sendNotification:(id)arg1 forApplicationExtensionRecords:(id)arg2;	// IMP=0x0000000000169934
- (void)sendNotification:(id)arg1 ForPlugins:(id)arg2;	// IMP=0x00000000001696ee
- (void)_placeholdersUninstalled:(id)arg1;	// IMP=0x00000000001692e4
- (void)_placeholderIconUpdatedForApp:(id)arg1;	// IMP=0x000000000016918d
- (void)installationFailedForApplication:(id)arg1;	// IMP=0x0000000000168d5b
- (void)installationEndedForApplication:(id)arg1 withState:(unsigned long long)arg2;	// IMP=0x0000000000168a83
- (void)rebuildInstallIndexes;	// IMP=0x000000000016899d
- (void)createInstallProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2 andPublishingString:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000167c29
- (id)parentProgressForApplication:(id)arg1 andPhase:(unsigned long long)arg2 isActive:(_Bool)arg3;	// IMP=0x000000000016721e
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000016634e
- (unsigned long long)finalInstallPhaseForAppProxy:(id)arg1;	// IMP=0x0000000000166300
- (void)getMaxProgressPhaseUnitsForLoading:(int *)arg1 restoring:(int *)arg2 installing:(int *)arg3 essentialAssets:(int *)arg4 forAppProxy:(id)arg5;	// IMP=0x0000000000165e54
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000165d83
- (void)addObserver:(id)arg1;	// IMP=0x00000000001658ec
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000001655bd
- (void)restoreInactiveInstalls;	// IMP=0x00000000001650c9
- (id)_LSFindPlaceholderApplications;	// IMP=0x0000000000164ea8
- (id)init;	// IMP=0x0000000000164b52

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
