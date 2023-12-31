//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface IXSCoordinatorManager : NSObject
{
    NSObject<OS_dispatch_queue> *_mapQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_createQueue;	// 16 = 0x10
    NSMutableDictionary *_identityToCoordinatorMap;	// 24 = 0x18
    NSMutableDictionary *_uuidToCoordinatorMap;	// 32 = 0x20
    NSMutableDictionary *_connectionToProcessScopedCoordinatorMap;	// 40 = 0x28
    NSMutableArray *_identityPriority;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x00200000000095d1
+ (id)prioritySaveURL;	// IMP=0x0010000000009547
+ (id)saveDir;	// IMP=0x00100000000094ba
+ (id)savePathForCoordinator:(id)arg1;	// IMP=0x00100000000093c4
- (void).cxx_destruct;	// IMP=0x002000000000e27a
@property(readonly, nonatomic) NSMutableArray *identityPriority; // @synthesize identityPriority=_identityPriority;
@property(readonly, nonatomic) NSMutableDictionary *connectionToProcessScopedCoordinatorMap; // @synthesize connectionToProcessScopedCoordinatorMap=_connectionToProcessScopedCoordinatorMap;
@property(readonly, nonatomic) NSMutableDictionary *uuidToCoordinatorMap; // @synthesize uuidToCoordinatorMap=_uuidToCoordinatorMap;
@property(readonly, nonatomic) NSMutableDictionary *identityToCoordinatorMap; // @synthesize identityToCoordinatorMap=_identityToCoordinatorMap;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *createQueue; // @synthesize createQueue=_createQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *mapQueue; // @synthesize mapQueue=_mapQueue;
- (void)convertProcessScopedCoordinatorToGlobalScoped:(id)arg1;	// IMP=0x001000000000e063
- (void)connectionInvalidated:(id)arg1;	// IMP=0x001000000000db27
- (void)clearAllCoordinatorsForCreator:(unsigned long long)arg1;	// IMP=0x001000000000d77c
- (void)_enumerateCoordinatorsForConnection:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d25a
- (void)enumerateCoordinatorsApplicableToConnection:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d248
- (void)enumerateCoordinators:(CDUnknownBlockType)arg1;	// IMP=0x001000000000d231
- (_Bool)prioritizeCoordinator:(id)arg1;	// IMP=0x001000000000d1db
- (_Bool)prioritizeCoordinatorWithIdentity:(id)arg1;	// IMP=0x001000000000cf40
- (void)unregisterCoordinator:(id)arg1;	// IMP=0x001000000000cd44
- (void)performCreationBlockingOperation:(CDUnknownBlockType)arg1;	// IMP=0x001000000000cc78
- (id)coordinatorForIdentity:(id)arg1 connection:(id)arg2 error:(id *)arg3 creatingIfNotExisting:(CDUnknownBlockType)arg4;	// IMP=0x001000000000c19a
- (id)_lookupCoordinatorForIdentity:(id)arg1 checkingScopeForConnection:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000bbf5
- (id)_lookupCoordinatorForIdentity:(id)arg1;	// IMP=0x001000000000ba47
- (id)coordinatorsForBundleIdentifier:(id)arg1;	// IMP=0x001000000000b7d8
- (id)coordinatorForIdentity:(id)arg1;	// IMP=0x001000000000b7c6
- (id)coordinatorForUUID:(id)arg1;	// IMP=0x001000000000b57c
- (_Bool)_coordinator:(id)arg1 isApplicableToConnection:(id)arg2;	// IMP=0x001000000000b47f
- (void)_onMapQueue_saveIdentityPriority;	// IMP=0x001000000000b21a
- (_Bool)_onMapQueue_removeCoordinatorFromMaps:(id)arg1;	// IMP=0x001000000000af10
- (id)init;	// IMP=0x001000000000965e

@end

