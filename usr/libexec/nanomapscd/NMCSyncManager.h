//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSupport/MSPSyncManager.h>

@class CyclePreferences, DrivePreferences, NPSManager, NSLock, NSString, PSYSyncCoordinator, TransitPreferences;
@protocol NMCSyncManagerDelegate;

@interface NMCSyncManager : MSPSyncManager
{
    PSYSyncCoordinator *_coordinator;	// 8 = 0x8
    NPSManager *_preferencesSyncManager;	// 16 = 0x10
    DrivePreferences *_drivePreferences;	// 24 = 0x18
    CyclePreferences *_cyclePreferences;	// 32 = 0x20
    TransitPreferences *_transitPreferences;	// 40 = 0x28
    _Bool _waitingOnInternalInitialSync;	// 48 = 0x30
    _Bool _waitingOnDelegateInitialSync;	// 49 = 0x31
    NSLock *;	// 56 = 0x38
    id <NMCSyncManagerDelegate> _delegate;	// 64 = 0x40
}

+ (id)pinsPath;	// IMP=0x00200000000398df
+ (id)nanoRegistryDirectory;	// IMP=0x0010000000039857
+ (id)mapsDirectory;	// IMP=0x0010000000039776
- (void).cxx_destruct;	// IMP=0x002000000003abb7
@property(nonatomic) __weak id <NMCSyncManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;	// IMP=0x001000000003a685
- (void)synchronizePreferences;	// IMP=0x001000000003a5a1
- (void)requestSyncUpdateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000003a563
- (void)notifyObservers;	// IMP=0x001000000003a517
- (void)completedSync;	// IMP=0x001000000003a375
- (void)_completedInitialSync;	// IMP=0x001000000003a25c
- (void)completedPreparingSync;	// IMP=0x001000000003a143
- (void)preparingSync;	// IMP=0x001000000003a05e
- (void)writePins:(id)arg1;	// IMP=0x0010000000039f49
- (id)readPins;	// IMP=0x0010000000039c9e
- (id)_containerCompletionQueue;	// IMP=0x0010000000039c18
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000039a1c
- (id)init;	// IMP=0x0010000000039a08
- (void)_createNanoRegistryDirectoryIfNeeded;	// IMP=0x0010000000039936

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

