//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSOperationDependencies, CKKSResultOperation, NSHashTable, NSString;
@protocol OctagonStateString;

@interface CKKSHealTLKSharesOperation
{
    _Bool _cloudkitWriteFailures;	// 10 = 0xa
    _Bool _failedDueToLockState;	// 11 = 0xb
    _Bool _failedDueToEssentialTrustState;	// 12 = 0xc
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    NSString<OctagonStateString> *_nextState;	// 24 = 0x18
    CKKSOperationDependencies *_deps;	// 32 = 0x20
    NSHashTable *_ckOperations;	// 40 = 0x28
    CKKSResultOperation *_setResultStateOperation;	// 48 = 0x30
}

+ (id)filterTrustedPeers:(id)arg1 missingTLKSharesFor:(id)arg2 databaseProvider:(id)arg3 error:(id *)arg4;	// IMP=0x00200000001abfd4
+ (id)createMissingKeyShares:(id)arg1 peers:(id)arg2 databaseProvider:(id)arg3 error:(id *)arg4;	// IMP=0x00100000001ab5f4
+ (id)createMissingKeyShares:(id)arg1 trustStates:(id)arg2 databaseProvider:(id)arg3 error:(id *)arg4;	// IMP=0x00100000001ab1f4
- (void).cxx_destruct;	// IMP=0x00200000001aa6d0
@property _Bool failedDueToEssentialTrustState; // @synthesize failedDueToEssentialTrustState=_failedDueToEssentialTrustState;
@property _Bool failedDueToLockState; // @synthesize failedDueToLockState=_failedDueToLockState;
@property _Bool cloudkitWriteFailures; // @synthesize cloudkitWriteFailures=_cloudkitWriteFailures;
@property(retain) CKKSResultOperation *setResultStateOperation; // @synthesize setResultStateOperation=_setResultStateOperation;
@property(retain) NSHashTable *ckOperations; // @synthesize ckOperations=_ckOperations;
@property(retain) CKKSOperationDependencies *deps; // @synthesize deps=_deps;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
- (_Bool)areNewSharesSufficient:(id)arg1 trustStates:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001aa131
- (void)checkAndHealTLKShares:(id)arg1 currentTrustStates:(id)arg2;	// IMP=0x00100000001a8813
- (void)groupStart;	// IMP=0x00100000001a81d5
- (id)initWithDependencies:(id)arg1 intendedState:(id)arg2 errorState:(id)arg3;	// IMP=0x00100000001a80ec
- (id)init;	// IMP=0x00100000001a80de

@end

