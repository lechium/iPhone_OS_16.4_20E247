//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LibraryQueryPlanner, NSDictionary, NSString, ProgressCache;
@protocol LibraryCatalogObserver, OS_dispatch_queue;

@interface LaunchServicesCatalog : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    id <LibraryCatalogObserver> _observer;	// 16 = 0x10
    LibraryQueryPlanner *_planner;	// 24 = 0x18
    ProgressCache *_progressCache;	// 32 = 0x20
    NSDictionary *_systemAppMappingByBundleID;	// 40 = 0x28
    NSDictionary *_systemAppMappingByItemID;	// 48 = 0x30
    NSDictionary *_systemAppMappingForWatchByBundleID;	// 56 = 0x38
    NSDictionary *_systemAppMappingForWatchByItemID;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000017aae9
@property __weak id <LibraryCatalogObserver> observer; // @synthesize observer=_observer;
- (void)_handleBagInvalidatedNotification:(id)arg1;	// IMP=0x001000000017aa4a
- (void)_handleBagChangedNotification:(id)arg1;	// IMP=0x001000000017a9d2
- (void)_handleAppUnregisteredNotification:(id)arg1;	// IMP=0x001000000017a626
- (void)_handleAppRegisteredNotification:(id)arg1;	// IMP=0x001000000017a2c1
- (id)resultsWithItemIDs:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000179ea8
- (id)resultsWithBundleIDs:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000179beb
- (id)resultsMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000179a25
- (void)launchApp:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001793c7
- (void)launchApp:(id)arg1 onPairedDevice:(id)arg2 withResultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001793b2
- (void)launchApp:(id)arg1 extensionType:(long long)arg2 withResultHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000178e3e
- (void)executeQuery:(id)arg1 excludingBundleIDs:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000178c24
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x0010000000178a32
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x00100000001780c8
- (void)dealloc;	// IMP=0x00100000001760ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

