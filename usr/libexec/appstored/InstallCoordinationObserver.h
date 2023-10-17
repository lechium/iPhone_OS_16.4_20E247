//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AppInstallsDatabaseStore, IXAppInstallObserver, NSMutableDictionary, NSString, TaskQueue, UnfairLock;
@protocol OS_dispatch_queue;

@interface InstallCoordinationObserver : NSObject
{
    AppInstallsDatabaseStore *_databaseStore;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    TaskQueue *_policyQueue;	// 24 = 0x18
    IXAppInstallObserver *_installObserver;	// 32 = 0x20
    UnfairLock *_lock;	// 40 = 0x28
    NSMutableDictionary *_observedCoordinators;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x00200000002485c8
- (void).cxx_destruct;	// IMP=0x002000000024b916
- (void)_handleAppMayBeUninstalledNotification:(id)arg1;	// IMP=0x001000000024b0ff
- (void)shouldPrioritizeAppWithBundleID:(id)arg1;	// IMP=0x001000000024a73f
- (void)coordinatorShouldResume:(id)arg1;	// IMP=0x001000000024a179
- (void)coordinatorShouldPause:(id)arg1;	// IMP=0x0010000000249f03
- (void)coordinatorShouldPrioritize:(id)arg1;	// IMP=0x00100000002497bc
- (void)coordinatorDidCompleteSuccessfully:(id)arg1 forApplicationRecord:(id)arg2;	// IMP=0x0010000000249017
- (void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3;	// IMP=0x0010000000248811
- (id)init;	// IMP=0x001000000024861d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
