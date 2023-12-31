//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BYNotesSyncTask, NSMutableArray, NSProgress, NSString;
@protocol OS_os_transaction;

@interface BYDaemonCloudSyncController : NSObject
{
    NSMutableArray *_delegates;	// 8 = 0x8
    NSObject<OS_os_transaction> *_transaction;	// 16 = 0x10
    NSProgress *_progress;	// 24 = 0x18
    NSMutableArray *_errors;	// 32 = 0x20
    BYNotesSyncTask *_notesSync;	// 40 = 0x28
    NSProgress *_notesProgress;	// 48 = 0x30
    NSProgress *_messagesProgress;	// 56 = 0x38
    NSProgress *_daemonProgress;	// 64 = 0x40
}

+ (id)sharedController;	// IMP=0x0020000000007839
- (void).cxx_destruct;	// IMP=0x00200000000099c0
@property(retain) NSProgress *daemonProgress; // @synthesize daemonProgress=_daemonProgress;
@property(retain) NSProgress *messagesProgress; // @synthesize messagesProgress=_messagesProgress;
@property(retain) NSProgress *notesProgress; // @synthesize notesProgress=_notesProgress;
@property(retain) BYNotesSyncTask *notesSync; // @synthesize notesSync=_notesSync;
@property(retain) NSMutableArray *errors; // @synthesize errors=_errors;
@property(retain) NSProgress *progress; // @synthesize progress=_progress;
@property(retain) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(retain) NSMutableArray *delegates; // @synthesize delegates=_delegates;
- (void)cloudSyncProgressUpdate:(long long)arg1 completedClients:(long long)arg2 errors:(id)arg3;	// IMP=0x00100000000095d8
- (void)cancelDaemonSync;	// IMP=0x00100000000094f0
- (void)startDaemonSync;	// IMP=0x00100000000092b1
- (void)cloudKitSyncer:(id)arg1 didUpdateProgress:(double)arg2;	// IMP=0x00100000000091ae
- (void)cloudKitSyncer:(id)arg1 didFinishWithError:(id)arg2;	// IMP=0x0010000000008f51
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000008aef
- (void)messagesSyncStateChanged:(id)arg1;	// IMP=0x0010000000008985
- (void)removeDelegate:(id)arg1;	// IMP=0x0010000000008913
- (void)addDelegate:(id)arg1;	// IMP=0x00100000000088a1
- (void)cancelMessagesSync;	// IMP=0x001000000000882d
- (void)startMessagesSync;	// IMP=0x00100000000084b8
- (void)cancelNotesSync;	// IMP=0x001000000000845e
- (void)startNotesSync;	// IMP=0x001000000000834a
- (void)isSyncInProgress:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008245
- (void)cancelSync;	// IMP=0x0010000000007f12
- (void)startSync;	// IMP=0x0010000000007b57
- (_Bool)messagesNeedsSync;	// IMP=0x00100000000079e3
- (void)needsToSyncClasses:(CDUnknownBlockType)arg1;	// IMP=0x001000000000799a
- (void)dealloc;	// IMP=0x00100000000078f9
- (id)init;	// IMP=0x001000000000788e

// Remaining properties
// Error: Property attributes should begin with the type ('T') attribute, property name: debugDescription
// Property attributes: (null)

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

