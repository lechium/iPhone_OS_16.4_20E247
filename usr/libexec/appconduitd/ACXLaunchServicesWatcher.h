//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface ACXLaunchServicesWatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_stateQueue;	// 8 = 0x8
    NSUUID *_ourDBUUID;	// 16 = 0x10
    unsigned long long _lastSequenceNumber;	// 24 = 0x18
    NSUUID *_lastLSUUID;	// 32 = 0x20
    NSMutableDictionary *_appList;	// 40 = 0x28
    NSMutableArray *_eventQueue;	// 48 = 0x30
    unsigned long long _eventQueueStartSequenceNumber;	// 56 = 0x38
}

+ (id)sharedWatcher;	// IMP=0x0020000000035e5a
- (void).cxx_destruct;	// IMP=0x002000000003c4ae
@property(nonatomic) unsigned long long eventQueueStartSequenceNumber; // @synthesize eventQueueStartSequenceNumber=_eventQueueStartSequenceNumber;
@property(retain, nonatomic) NSMutableArray *eventQueue; // @synthesize eventQueue=_eventQueue;
@property(retain, nonatomic) NSMutableDictionary *appList; // @synthesize appList=_appList;
@property(retain, nonatomic) NSUUID *lastLSUUID; // @synthesize lastLSUUID=_lastLSUUID;
@property(nonatomic) unsigned long long lastSequenceNumber; // @synthesize lastSequenceNumber=_lastSequenceNumber;
@property(retain, nonatomic) NSUUID *ourDBUUID; // @synthesize ourDBUUID=_ourDBUUID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
- (void)applicationInstallsDidStart:(id)arg1;	// IMP=0x001000000003c015
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x001000000003be27
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x001000000003bba3
- (void)applicationsUninstalledWithAppRecords:(id)arg1;	// IMP=0x001000000003b5a5
- (void)applicationsInstalledWithAppRecords:(id)arg1;	// IMP=0x001000000003aaca
- (void)_onQueue_reSyncWithLS;	// IMP=0x0010000000039d8a
- (void)_onQueue_noteNewApps:(id)arg1 updatedApps:(id)arg2 removedApps:(id)arg3 forDBUUID:(id)arg4 endingSequenceNumber:(unsigned long long)arg5;	// IMP=0x0010000000039c8a
- (void)_onQueue_noteDatabaseRebuild;	// IMP=0x0010000000039c19
- (id)allInstalledBundleIDsInDatabaseWithUUID:(id *)arg1 lastSequenceNumber:(unsigned long long *)arg2;	// IMP=0x0010000000039912
- (void)fetchDatabaseUUID:(id *)arg1 andCurrentLastSequenceNumber:(unsigned long long *)arg2;	// IMP=0x00100000000396e9
- (void)enumerateApplicationEventsReturningDBUUID:(id *)arg1 startingSequenceNumber:(unsigned long long *)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000003939a
- (_Bool)clearApplicationEventsForDBUUID:(id)arg1 endingSequenceNumber:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000039151
- (_Bool)_onQueue_clearApplicationEventsForDBUUID:(id)arg1 endingSequenceNumber:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000038d33
- (void)_onQueue_addAppEvent:(id)arg1;	// IMP=0x0010000000038adb
- (_Bool)enumerateApplicationsForBundleIDs:(id)arg1 currentDBUUID:(id *)arg2 currentLastSequenceNumber:(unsigned long long *)arg3 error:(id *)arg4 enumerator:(CDUnknownBlockType)arg5;	// IMP=0x0010000000038659
- (_Bool)_onQueue_enumerateApplicationsForBundleIDs:(id)arg1 error:(id *)arg2 enumerator:(CDUnknownBlockType)arg3;	// IMP=0x001000000003828f
- (id)applicationsForAppRecords:(id)arg1 currentDBUUID:(id *)arg2 currentLastSequenceNumber:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x0010000000037e6b
- (id)applicationForAppRecord:(id)arg1 currentLastSequenceNumber:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x0010000000037b27
- (id)_onQueue_applicationForAppRecord:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000377dd
- (_Bool)_onQueue_infoMatchesCurrentLSDatabaseWithUUID:(id *)arg1;	// IMP=0x00100000000375c5
- (void)_onQueue_writeAppListToDisk;	// IMP=0x0010000000036f8c
- (id)init;	// IMP=0x0010000000035eaf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
