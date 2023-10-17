//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectID, NSString, RMDebounceTimer;

@interface RMActivationEngine : NSObject
{
    NSManagedObjectID *_managementSourceObjectID;	// 8 = 0x8
    NSManagedObjectContext *_context;	// 16 = 0x10
    RMDebounceTimer *_debouncer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000084a0
@property(retain, nonatomic) RMDebounceTimer *debouncer; // @synthesize debouncer=_debouncer;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSManagedObjectID *managementSourceObjectID; // @synthesize managementSourceObjectID=_managementSourceObjectID;
- (id)_checkPredicateStatusKeysForActivations:(id)arg1 managementSource:(id)arg2;	// IMP=0x0010000000007e59
- (_Bool)_processAllDeclarations:(id)arg1;	// IMP=0x00100000000062a7
- (_Bool)_processManagementProperties:(id)arg1;	// IMP=0x0010000000005d08
- (_Bool)_attachAssetReferences:(id)arg1;	// IMP=0x0010000000005137
- (_Bool)_attachConfigurationReferences:(id)arg1;	// IMP=0x00100000000045b2
- (void)deleteObjects:(id)arg1 managementSourceIdentifier:(id)arg2 removeStatus:(_Bool)arg3;	// IMP=0x001000000000435b
- (id)getDeclarationsMarkedForRemovalFromFetchRequest:(id)arg1 managementSource:(id)arg2;	// IMP=0x0010000000004194
- (_Bool)_deleteDeclarationsThatAreNoLongerNeeded:(id)arg1;	// IMP=0x001000000000364d
- (_Bool)reconcile:(id)arg1;	// IMP=0x00100000000035a9
- (void)syncWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003128
- (void)_predicateStatusItemDidChange:(id)arg1;	// IMP=0x0010000000003049
- (void)triggerAggregatingTimerAction;	// IMP=0x0010000000002f54
- (id)initWithManagementSourceObjectID:(id)arg1 context:(id)arg2;	// IMP=0x0010000000002e23

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
