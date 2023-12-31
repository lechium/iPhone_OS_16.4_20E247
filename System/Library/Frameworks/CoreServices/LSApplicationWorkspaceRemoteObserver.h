//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface LSApplicationWorkspaceRemoteObserver : NSObject
{
    NSUUID *_uuid;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_progressSubscriptionsQueue;	// 24 = 0x18
    _Bool _observinglsd;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000003ef9b
- (void).cxx_destruct;	// IMP=0x00000000000428c0
@property(getter=isObservinglsd) _Bool observinglsd; // @synthesize observinglsd=_observinglsd;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)databaseWasRebuilt;	// IMP=0x00000000000427c3
- (void)applicationsDidChangePersonas:(id)arg1;	// IMP=0x0000000000042689
- (void)deviceManagementPolicyDidChange:(id)arg1;	// IMP=0x00000000000425be
- (void)networkUsageChanged:(_Bool)arg1;	// IMP=0x00000000000423f2
- (void)applicationIconDidChange:(id)arg1;	// IMP=0x0000000000042327
- (void)applicationStateDidChange:(id)arg1;	// IMP=0x000000000004225c
- (void)applicationInstallsDidPrioritize:(id)arg1;	// IMP=0x0000000000042196
- (void)applicationInstallsDidCancel:(id)arg1;	// IMP=0x00000000000420d0
- (void)applicationInstallsDidResume:(id)arg1;	// IMP=0x000000000004200a
- (void)applicationInstallsDidPause:(id)arg1;	// IMP=0x0000000000041f44
- (void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;	// IMP=0x000000000004173f
- (void)applicationsDidFailToUninstall:(id)arg1;	// IMP=0x0000000000041656
- (void)pluginsDidUninstall:(id)arg1;	// IMP=0x0000000000041488
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x00000000000412ff
- (void)applicationsWillUninstall:(id)arg1;	// IMP=0x00000000000411c5
- (void)pluginsWillUninstall:(id)arg1;	// IMP=0x0000000000040ff7
- (void)applicationsDidFailToInstall:(id)arg1;	// IMP=0x0000000000040f09
- (void)pluginsDidInstall:(id)arg1;	// IMP=0x0000000000040d36
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x0000000000040385
- (void)applicationsWillInstall:(id)arg1;	// IMP=0x000000000004024b
- (void)applicationInstallsDidChange:(id)arg1;	// IMP=0x000000000003feb6
- (void)applicationInstallsDidUpdateIcon:(id)arg1;	// IMP=0x000000000003fd7c
- (void)applicationInstallsDidStart:(id)arg1;	// IMP=0x000000000003f7b1
- (_Bool)messageObserversWithSelector:(SEL)arg1;	// IMP=0x000000000003f641
- (_Bool)messageObserversWithSelector:(SEL)arg1 andApps:(id)arg2;	// IMP=0x000000000003f629
- (_Bool)messageObserversWithSelector:(SEL)arg1 andApps:(id)arg2 filterLaunchProhibited:(_Bool)arg3;	// IMP=0x000000000003f386
- (unsigned long long)currentObserverCount;	// IMP=0x000000000003f324
- (id)localObservers;	// IMP=0x000000000003f29b
- (void)removeLocalObserver:(id)arg1;	// IMP=0x000000000003f21a
- (void)addLocalObserver:(id)arg1;	// IMP=0x000000000003f199
- (id)init;	// IMP=0x000000000003f0ad
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003f01c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003efa3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

