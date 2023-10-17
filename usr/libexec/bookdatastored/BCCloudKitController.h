//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BCCloudKitDatabaseController, BCCloudKitTransactionManager, BUCoalescingCallBlock, CKContainer, NSMutableArray;
@protocol BCContainerConfiguration, OS_dispatch_queue;

@interface BCCloudKitController : NSObject
{
    _Bool _didChangeContainer;	// 8 = 0x8
    _Bool _gettingAccountInfo;	// 9 = 0x9
    _Bool _enableCloudSync;	// 10 = 0xa
    _Bool _serviceMode;	// 11 = 0xb
    BCCloudKitTransactionManager *_transactionManager;	// 16 = 0x10
    BCCloudKitDatabaseController *_privateCloudDatabaseController;	// 24 = 0x18
    id <BCContainerConfiguration> _configuration;	// 32 = 0x20
    CKContainer *_container;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_accessQueue;	// 48 = 0x30
    BUCoalescingCallBlock *_coalescedAttachment;	// 56 = 0x38
    NSMutableArray *_pendingGetAccountInfoCompletionBlocks;	// 64 = 0x40
    NSMutableArray *_pendingRequestUpdateAttachmentCompletionBlocks;	// 72 = 0x48
}

+ (id)p_privateDatabaseArchiveURLForConfiguration:(id)arg1;	// IMP=0x0020000000019152
+ (id)p_createDatabaseArchiveDirectoryForConfiguration:(id)arg1;	// IMP=0x00100000000190ae
+ (id)databaseFolderURLForConfiguration:(id)arg1;	// IMP=0x0010000000018fae
+ (void)deleteCloudDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000018db5
+ (id)instanceForNotificationUserInfo:(id)arg1;	// IMP=0x00100000000170fa
+ (void)registerForSecureNotifications;	// IMP=0x001000000001673e
+ (id)secureSharedInstance;	// IMP=0x001000000001665b
+ (id)sharedInstance;	// IMP=0x0010000000016578
- (void).cxx_destruct;	// IMP=0x002000000001b401
@property(readonly, nonatomic) NSMutableArray *pendingRequestUpdateAttachmentCompletionBlocks; // @synthesize pendingRequestUpdateAttachmentCompletionBlocks=_pendingRequestUpdateAttachmentCompletionBlocks;
@property(readonly, nonatomic) NSMutableArray *pendingGetAccountInfoCompletionBlocks; // @synthesize pendingGetAccountInfoCompletionBlocks=_pendingGetAccountInfoCompletionBlocks;
@property(retain, nonatomic) BUCoalescingCallBlock *coalescedAttachment; // @synthesize coalescedAttachment=_coalescedAttachment;
@property(nonatomic) _Bool serviceMode; // @synthesize serviceMode=_serviceMode;
@property(nonatomic) _Bool enableCloudSync; // @synthesize enableCloudSync=_enableCloudSync;
@property(nonatomic) _Bool gettingAccountInfo; // @synthesize gettingAccountInfo=_gettingAccountInfo;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) id <BCContainerConfiguration> configuration; // @synthesize configuration=_configuration;
@property(nonatomic) _Bool didChangeContainer; // @synthesize didChangeContainer=_didChangeContainer;
@property(retain) BCCloudKitDatabaseController *privateCloudDatabaseController; // @synthesize privateCloudDatabaseController=_privateCloudDatabaseController;
@property(retain, nonatomic) BCCloudKitTransactionManager *transactionManager; // @synthesize transactionManager=_transactionManager;
- (void)p_identityChanged:(id)arg1;	// IMP=0x001000000001aff7
- (void)p_accountChanged:(id)arg1;	// IMP=0x001000000001ac88
- (void)handleRemoteNotification:(id)arg1;	// IMP=0x000000000001a977
- (void)applicationDidBecomeActive;	// IMP=0x001000000001a7f3
- (void)aq_flushPendingGetAccountInfoCompletionBlocksWithWillRetryUpdateAttachment:(_Bool)arg1;	// IMP=0x001000000001a52b
- (void)aq_setGettingAccountInfo:(_Bool)arg1 willRetryUpdateAttachment:(_Bool)arg2;	// IMP=0x001000000001a4bf
- (void)p_getAccountInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000194c0
- (void)p_getAccountInfo;	// IMP=0x00100000000194ac
- (void)p_getNecessaryAccountInfoFromContainer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001924f
- (void)p_updateAttachment;	// IMP=0x0010000000018354
- (void)p_flushPendingRequestUpdateAttachmentCompletionBlocksWithAttached:(_Bool)arg1 reachable:(_Bool)arg2;	// IMP=0x0010000000017fb3
- (void)p_flushPendingRequestUpdateAttachmentCompletionBlocks;	// IMP=0x0010000000017cb9
- (void)aq_requestUpdateAttachmentWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000017bef
- (void)aq_requestUpdateAttachment;	// IMP=0x0010000000017bdb
- (void)requestUpdateAttachmentWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000017ab8
- (void)setEnableCloudSync:(_Bool)arg1 serviceMode:(_Bool)arg2;	// IMP=0x00100000000178fa
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0010000000017298

@end
