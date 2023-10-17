//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SYService;
@protocol NTKDSyncDelegate, OS_dispatch_queue;

@interface NTKDCompanionSyncWrapper : NSObject
{
    _Bool _resetSyncRequestedDuringSyncRestriction;	// 8 = 0x8
    _Bool _resumeWhenSyncRestrictionLifted;	// 9 = 0x9
    SYService *_syncService;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_syncServiceQueue;	// 24 = 0x18
    _Bool _resetSyncRequested;	// 32 = 0x20
    unsigned long long _syncFailureCount;	// 40 = 0x28
    _Bool _syncBackoffOngoing;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_syncSerialQueue;	// 56 = 0x38
    _Bool _deltaSyncRequiredAfterBackoff;	// 64 = 0x40
    _Bool _resetSyncRequiredAfterBackoff;	// 65 = 0x41
    _Bool _isPrimary;	// 66 = 0x42
    id <NTKDSyncDelegate> _delegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000032679
@property(nonatomic) __weak id <NTKDSyncDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isPrimary; // @synthesize isPrimary=_isPrimary;
- (id)changeFromData:(id)arg1 ofType:(long long)arg2;	// IMP=0x001000000003256d
- (id)dataFromChange:(id)arg1;	// IMP=0x001000000003254c
- (void)service:(id)arg1 didSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3;	// IMP=0x001000000003239f
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;	// IMP=0x0010000000031fb5
- (_Bool)syncSession:(id)arg1 resetDataStoreWithError:(id *)arg2;	// IMP=0x0010000000031f62
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000031ab9
- (unsigned int)syncSession:(id)arg1 enqueueChanges:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x001000000003189a
- (void)service:(id)arg1 incomingData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000031557
- (void)service:(id)arg1 encounteredError:(id)arg2 context:(id)arg3;	// IMP=0x0010000000031408
- (_Bool)service:(id)arg1 startSession:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000310e9
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;	// IMP=0x001000000003106a
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;	// IMP=0x0010000000030f2e
- (void)_reportProgressForMessage:(id)arg1 inSession:(id)arg2;	// IMP=0x0010000000030d84
- (void)_resetBackoffPeriod;	// IMP=0x0010000000030d39
- (long long)_getNextSyncBackoffPeriod;	// IMP=0x0010000000030c5a
- (void)_queue_requestSync:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000309ac
- (void)_queue_deltaSync;	// IMP=0x00100000000308d4
- (void)_queue_resetSync;	// IMP=0x001000000003079a
- (void)sendOutOfBandMessage:(id)arg1 ofType:(long long)arg2;	// IMP=0x0010000000030487
- (void)requestDeltaSync;	// IMP=0x0010000000030426
- (void)requestResetSync;	// IMP=0x001000000003031a
- (void)suspend;	// IMP=0x0010000000030297
- (void)resume;	// IMP=0x00100000000300f4
- (void)dealloc;	// IMP=0x001000000003003c
- (id)initAsPrimary:(_Bool)arg1;	// IMP=0x001000000002fe53
- (id)init;	// IMP=0x001000000002fe3f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
