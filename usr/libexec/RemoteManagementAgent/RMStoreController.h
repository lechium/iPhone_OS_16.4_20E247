//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSMutableDictionary, NSPersistentContainer;
@protocol OS_dispatch_queue;

@interface RMStoreController : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSManagedObjectContext *_context;	// 16 = 0x10
    NSPersistentContainer *_persistentContainer;	// 24 = 0x18
    NSMutableDictionary *_clientByIdentifier;	// 32 = 0x20
}

+ (void)start;	// IMP=0x002000000007e5f5
+ (id)sharedController;	// IMP=0x001000000007e408
- (void).cxx_destruct;	// IMP=0x0020000000087206
@property(retain, nonatomic) NSMutableDictionary *clientByIdentifier; // @synthesize clientByIdentifier=_clientByIdentifier;
@property(readonly, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (id)_newPayloadWithDeclaration:(id)arg1 managementSource:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000086eb5
- (id)_payloadsForPayloadClass:(Class)arg1 identifier:(id)arg2 managementSource:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000086b8b
- (id)_payloadsForDeclarationIdentifier:(id)arg1 managementSource:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000086876
- (id)_activeDeclarationsForConfigurationTypes:(id)arg1 storeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000085cb7
- (id)_declarationsOfClass:(Class)arg1 managementSource:(id)arg2 declarationTypes:(id)arg3 identifier:(id)arg4 error:(id *)arg5;	// IMP=0x00100000000855f8
- (id)_declarationsForStoreIdentifier:(id)arg1 declarationTypes:(id)arg2 identifier:(id)arg3 error:(id *)arg4;	// IMP=0x001000000008526a
- (void)_addOptionsToManagementSource:(id)arg1 options:(id)arg2;	// IMP=0x001000000008512e
- (id)_allManagementSourcesReturningError:(id *)arg1;	// IMP=0x0010000000084ea4
- (id)_managementSourceWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000084ca8
- (id)_subscriberStoreWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000084bfa
- (id)_providerStoreWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000084b4c
- (id)_observerStoreWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000084a9e
- (void)resolveAsset:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000841ce
- (void)subscribedDeclarationsWithTypes:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000083eb5
- (void)subscribedStoreDeclarationsWithTypes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000837b5
- (void)subscriberStoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000083316
- (void)subscriberStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000083032
- (void)applyChangesForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000082eea
- (void)deleteDeclarationWithIdentifier:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000827c6
- (void)saveDeclaration:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000081e17
- (void)providerStoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000081978
- (void)providerStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000081694
- (void)removeStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000081296
- (void)createStoreWithType:(long long)arg1 defaultToInteractive:(_Bool)arg2 dataSeparated:(_Bool)arg3 options:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000008090c
- (void)observerStoresDidChange;	// IMP=0x0010000000080865
- (void)fetchDataAtURL:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000803dc
- (void)setShouldInstallConfiguration:(id)arg1 shouldInstall:(_Bool)arg2 storeIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000802aa
- (void)declarationManifestForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000007ff98
- (void)declarationsWithTypes:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007fc79
- (void)declarationsForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000007f990
- (void)declarationWithIdentifier:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007f5f9
- (void)observerStoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000007f15a
- (void)observerStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000007ee76
- (id)_clientForIdentifier:(id)arg1;	// IMP=0x001000000007edf3
- (void)_stopClientForIdentifier:(id)arg1;	// IMP=0x001000000007ed2e
- (id)_makeClientWithManagementSourceObjectID:(id)arg1 storeIdentifier:(id)arg2 persistentContainer:(id)arg3;	// IMP=0x001000000007ec6a
- (id)_startClientForSourceIdentifier:(id)arg1 objectID:(id)arg2;	// IMP=0x001000000007eb7a
- (void)_start;	// IMP=0x001000000007e68e
- (id)initWithPersistentContainer:(id)arg1 context:(id)arg2;	// IMP=0x001000000007e507

@end
