//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectID, NSString, RMPersistentHistoryNotifier;
@protocol RMConduitDelegate;

@interface RMMDMConduit : NSObject
{
    _Bool _madeChangesDuringSync;	// 8 = 0x8
    id <RMConduitDelegate> _delegate;	// 16 = 0x10
    RMPersistentHistoryNotifier *_persistentHistoryNotifier;	// 24 = 0x18
    NSManagedObjectContext *_context;	// 32 = 0x20
    NSManagedObjectID *_managementSourceObjectID;	// 40 = 0x28
}

+ (id)_generateEnrollmentToken;	// IMP=0x0020000000053b4b
- (void).cxx_destruct;	// IMP=0x0020000000059d01
@property(readonly, nonatomic) NSManagedObjectID *managementSourceObjectID; // @synthesize managementSourceObjectID=_managementSourceObjectID;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(nonatomic) _Bool madeChangesDuringSync; // @synthesize madeChangesDuringSync=_madeChangesDuringSync;
@property(retain, nonatomic) RMPersistentHistoryNotifier *persistentHistoryNotifier; // @synthesize persistentHistoryNotifier=_persistentHistoryNotifier;
@property(nonatomic) __weak id <RMConduitDelegate> delegate; // @synthesize delegate=_delegate;
- (void)persistentHistoryNotifier:(id)arg1 hasChanges:(id)arg2;	// IMP=0x0010000000059abf
- (_Bool)persistentHistoryNotifier:(id)arg1 isChangeInteresting:(id)arg2 stop:(_Bool *)arg3;	// IMP=0x0010000000059574
- (void)_executeRequestForEndpoint:(id)arg1 requestData:(id)arg2 expectedResponseClass:(Class)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000059252
- (id)_requestDataForPayload:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005921c
- (_Bool);	// IMP=0x0010000000058e65
- (_Bool)_processErrorResponse:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005889d
- (id)_processResponse:(id)arg1 payloadClass:(Class)arg2 error:(id *)arg3;	// IMP=0x001000000005855e
- (void)_writeQAStatusData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000582fb
- (void)_didFinishSendingStatusWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000057f11
- (void)sendStatusData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000057d0c
- (void)_didFinishFetchingObject:(id)arg1 objectID:(id)arg2 class:(Class)arg3 endpoint:(id)arg4 response:(id)arg5 error:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x001000000005744b
- (void)_fetchNextObjectOfClass:(Class)arg1 endpoint:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000056c24
- (void)_fetchPartialObjectsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000056963
- (void)_processDeclarationItemsWithContext:(id)arg1 infos:(id)arg2 declarationItemClass:(Class)arg3 declarationItemKeyPath:(id)arg4;	// IMP=0x00100000000561c9
- (void)_didFinishFetchingDeclarationItems:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000055b9f
- (void)_fetchDeclarationItemsOnlyIfNeeded:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000556a2
- (void)_updateWithSyncTokens:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000055329
- (void)updateWithTokensResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000551d2
- (void)updateWithPushMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000550ae
- (void)syncOnlyIfNeeded:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000054a58
- (_Bool)isSyncAllowed;	// IMP=0x0010000000054a50
- (void)_didFinishFetchingServerTokens:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000544ed
- (void)_fetchTokensOnlyIfNeeded:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000053f75
- (void)unenrollWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000053b91
- (void)enrollWithStatusItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000053586
- (id)_statusItemsToSendOnceAfterEnrollment;	// IMP=0x0010000000053302
- (id)statusItemsToSendDuringEnrollment;	// IMP=0x00100000000532e9
- (id)statusItemsToImplicitlySubscribeTo;	// IMP=0x0010000000053235
- (short)errorState;	// IMP=0x0010000000052ff4
- (void)_stopObservers;	// IMP=0x0010000000052f98
- (void)_startObservers;	// IMP=0x0010000000052e9c
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000052bf3
- (id)initWithManagementSourceObjectID:(id)arg1 inContext:(id)arg2;	// IMP=0x0010000000052b5a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

