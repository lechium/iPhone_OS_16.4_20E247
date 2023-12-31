//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectID, NSString, NSURLSession, RMPersistentHistoryNotifier;
@protocol RMConduitDelegate;

@interface RMHTTPConduit : NSObject
{
    _Bool _madeChangesDuringSync;	// 8 = 0x8
    id <RMConduitDelegate> _delegate;	// 16 = 0x10
    RMPersistentHistoryNotifier *_persistentHistoryNotifier;	// 24 = 0x18
    NSURLSession *_session;	// 32 = 0x20
    NSManagedObjectContext *_context;	// 40 = 0x28
    NSManagedObjectID *_managementSourceObjectID;	// 48 = 0x30
}

+ (id)_generateEnrollmentToken;	// IMP=0x0020000000038ffa
+ (id)userAgent;	// IMP=0x0010000000037cd7
- (void).cxx_destruct;	// IMP=0x002000000004315c
@property(readonly, nonatomic) NSManagedObjectID *managementSourceObjectID; // @synthesize managementSourceObjectID=_managementSourceObjectID;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(nonatomic) _Bool madeChangesDuringSync; // @synthesize madeChangesDuringSync=_madeChangesDuringSync;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) RMPersistentHistoryNotifier *persistentHistoryNotifier; // @synthesize persistentHistoryNotifier=_persistentHistoryNotifier;
@property(nonatomic) __weak id <RMConduitDelegate> delegate; // @synthesize delegate=_delegate;
- (void)persistentHistoryNotifier:(id)arg1 hasChanges:(id)arg2;	// IMP=0x0010000000042eff
- (_Bool)persistentHistoryNotifier:(id)arg1 isChangeInteresting:(id)arg2 stop:(_Bool *)arg3;	// IMP=0x0010000000042a55
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000004277d
- (void)_resumeTaskForRequest:(id)arg1 enrollmentToken:(id)arg2 expectedResponseClassByStatusCode:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000042017
- (void)_setBody:(id)arg1 onURLRequest:(id)arg2;	// IMP=0x0010000000041f9c
- (_Bool)_setRequestPayload:(id)arg1 onURLRequest:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000041ef3
- (_Bool)_prepareTask:(id)arg1 withAuthenticationCredential:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000041db8
- (_Bool)_prepareURLRequest:(id)arg1 withAuthenticationCredential:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000041b55
- (id)_authenticationCredential;	// IMP=0x001000000004183d
- (id)_makeURLRequestWithManagementSource:(id)arg1 method:(id)arg2 endpoint:(id)arg3;	// IMP=0x00100000000415b6
- (_Bool)_incrementConduitStateError:(short)arg1 serverRetryAfter:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000411f0
- (_Bool)_processErrorResponse:(id)arg1 data:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000040c34
- (_Bool)_processUnauthorizedResponse:(id)arg1 shouldRetry:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x0010000000040163
- (id)_processResponse:(id)arg1 data:(id)arg2 payloadClassByStatusCode:(id)arg3 shouldRetry:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x001000000003fb37
- (void)_didFinishSendingStatusWithResponse:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000003f728
- (void)sendStatusData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003f2e5
- (void)_didFinishFetchingObject:(id)arg1 objectID:(id)arg2 class:(Class)arg3 endpoint:(id)arg4 response:(id)arg5 error:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x001000000003e985
- (void)_fetchNextObjectOfClass:(Class)arg1 endpoint:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000003e070
- (void)_fetchPartialObjectsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000003ddaf
- (void)_processDeclarationItemsWithContext:(id)arg1 infos:(id)arg2 declarationItemClass:(Class)arg3 declarationItemKeyPath:(id)arg4;	// IMP=0x001000000003d615
- (void)_didFinishFetchingDeclarationItems:(id)arg1 response:(id)arg2 error:(id)arg3 lastReceivedPushTimestamp:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000003cfab
- (void)_fetchDeclarationItemsOnlyIfNeeded:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003c7c6
- (void)_updateWithSyncTokens:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003c44d
- (void)updateWithTokensResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003c2f6
- (void)updateWithPushMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003c1d2
- (void)syncOnlyIfNeeded:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003bc0d
- (_Bool)isSyncAllowed;	// IMP=0x001000000003b98b
- (void)_didFinishFetchingServerTokens:(id)arg1 response:(id)arg2 error:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000003b489
- (void)_fetchTokensOnlyIfNeeded:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003ad5c
- (void)_didFinishUnenrollingToldRemote:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003aa00
- (void)unenrollWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000003a4cd
- (void)_didFinishEnrollingWithResponsePayload:(id)arg1 response:(id)arg2 error:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000039d33
- (void)_didReceiveEnrollReferralWithOriginalRequest:(id)arg1 responsePayload:(id)arg2 response:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000039296
- (void)_resumeEnrollmentTaskForRequest:(id)arg1 enrollmentToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000039040
- (void)enrollWithStatusItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000038889
- (id)statusItemsToSendDuringEnrollment;	// IMP=0x0010000000038666
- (id)statusItemsToImplicitlySubscribeTo;	// IMP=0x00100000000385a4
- (short)errorState;	// IMP=0x00100000000383da
- (void)_stopObservers;	// IMP=0x001000000003837e
- (void)_startObservers;	// IMP=0x0010000000038282
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000037ffe
- (id)initWithManagementSourceObjectID:(id)arg1 inContext:(id)arg2 session:(id)arg3;	// IMP=0x0010000000037f47
- (id)initWithManagementSourceObjectID:(id)arg1 inContext:(id)arg2;	// IMP=0x0010000000037e6d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

