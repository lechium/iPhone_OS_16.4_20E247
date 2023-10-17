//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACXRemoteAppList, NSString, PSYServiceSyncSession, PSYSyncCoordinator;
@protocol OS_dispatch_queue;

@interface ACXPairedSyncAppStateDelegate : NSObject
{
    PSYSyncCoordinator *_coordinator;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    PSYServiceSyncSession *_syncSession;	// 24 = 0x18
    ACXRemoteAppList *_remoteAppList;	// 32 = 0x20
}

+ (id)sharedAppStateSyncDelegate;	// IMP=0x002000000005a6a4
- (void).cxx_destruct;	// IMP=0x002000000005af79
@property(retain, nonatomic) ACXRemoteAppList *remoteAppList; // @synthesize remoteAppList=_remoteAppList;
@property(retain, nonatomic) PSYServiceSyncSession *syncSession; // @synthesize syncSession=_syncSession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) PSYSyncCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (void)resyncCompleted;	// IMP=0x001000000005aedc
- (void)applicationsUpdated:(id)arg1;	// IMP=0x001000000005aed6
- (void)applicationsRemoved:(id)arg1;	// IMP=0x001000000005aed0
- (void)applicationsAdded:(id)arg1;	// IMP=0x001000000005aeca
- (void)_onQueue_triggerSyncSessionCompleteAndRemoveObserver;	// IMP=0x001000000005ad7a
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;	// IMP=0x001000000005a7de
- (void)supportsMigrationSync;	// IMP=0x001000000005a7d8
- (id)init;	// IMP=0x001000000005a731

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
