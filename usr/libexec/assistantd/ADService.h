//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString;
@protocol ADServiceDelegate;

@interface ADService : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSSet *_managedStorageDomains;	// 16 = 0x10
    NSArray *_firstUnlockRestrictedCommands;	// 24 = 0x18
    NSArray *_controlCenterLockRestrictedCommands;	// 32 = 0x20
    _Bool _requiresBootMaintenance;	// 40 = 0x28
    id <ADServiceDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000254dee
@property(nonatomic) __weak id <ADServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool requiresBootMaintenance; // @synthesize requiresBootMaintenance=_requiresBootMaintenance;
@property(copy, nonatomic) NSArray *controlCenterLockRestrictedCommands; // @synthesize controlCenterLockRestrictedCommands=_controlCenterLockRestrictedCommands;
@property(copy, nonatomic) NSArray *firstUnlockRestrictedCommands; // @synthesize firstUnlockRestrictedCommands=_firstUnlockRestrictedCommands;
@property(copy, nonatomic) NSSet *managedStorageDomains; // @synthesize managedStorageDomains=_managedStorageDomains;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isSystemService;	// IMP=0x0010000000254d49
- (void)getInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000254b3d
- (void)reload;	// IMP=0x0010000000254b37
- (void)runMaintenanceWorkWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000254b25
- (void)resetExternalResources;	// IMP=0x0010000000254b1f
- (void)cancelOperationsForRequestID:(id)arg1 forAssistantID:(id)arg2 fromRemote:(_Bool)arg3;	// IMP=0x0010000000254b19
- (void)fetchSyncSnapshotForInfo:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000254b03
- (void)beginSyncForInfo:(id)arg1 chunkHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000254ae9
- (void)clearDomainObjects;	// IMP=0x0010000000254ae3
- (void)handleResponse:(id)arg1 toCommand:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000254ad0
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000254a53
- (void)preheatDomain:(id)arg1;	// IMP=0x0010000000254a4d
- (id)lockRestrictedCommands;	// IMP=0x0010000000254a45
- (id)customVocabSyncInfo;	// IMP=0x0010000000254a3d
- (id)syncKeys;	// IMP=0x0010000000254a35
- (_Bool)usesManagedStorageForDomain:(id)arg1;	// IMP=0x0010000000254a1f
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x0010000000254a17
- (id)commandsForDomain:(id)arg1;	// IMP=0x0010000000254a0f
- (id)domains;	// IMP=0x0010000000254a07
- (id)handle;	// IMP=0x00100000002549ff
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
