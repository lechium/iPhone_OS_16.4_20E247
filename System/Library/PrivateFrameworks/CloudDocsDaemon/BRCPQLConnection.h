//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <prequelite/PQLConnection.h>

@class NSString, br_pacer;

__attribute__((visibility("hidden")))
@interface BRCPQLConnection : PQLConnection
{
    br_pacer *_batchingPacer;	// 16 = 0x10
    int _changeCount;	// 24 = 0x18
    double _flushInterval;	// 32 = 0x20
    _Bool _flushImmediately;	// 40 = 0x28
    _Bool _autovacuumInProgress;	// 41 = 0x29
    long long _changesOverride;	// 48 = 0x30
    _Bool _isReadonly;	// 56 = 0x38
    unsigned long long _vmStepsExecuted;	// 64 = 0x40
    NSString *_assertionPersonaIdentifier;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000012077
@property(retain, nonatomic) NSString *assertionPersonaIdentifier; // @synthesize assertionPersonaIdentifier=_assertionPersonaIdentifier;
@property(readonly, nonatomic) _Bool isReadonly; // @synthesize isReadonly=_isReadonly;
@property(readonly, nonatomic) unsigned long long vmStepsExecuted; // @synthesize vmStepsExecuted=_vmStepsExecuted;
- (id)fetchObject:(CDUnknownBlockType)arg1 sql:(id)arg2 args:(struct __va_list_tag [1])arg3;	// IMP=0x0000000000011f98
- (id)fetchObject:(CDUnknownBlockType)arg1 sql:(id)arg2;	// IMP=0x0000000000011ef7
- (id)fetchObjectOfClass:(Class)arg1 sql:(id)arg2 args:(struct __va_list_tag [1])arg3;	// IMP=0x0000000000011e78
- (id)fetchObjectOfClass:(Class)arg1 sql:(id)arg2;	// IMP=0x0000000000011dd7
- (id)fetchObjectOfClass:(Class)arg1 initializer:(SEL)arg2 sql:(id)arg3 args:(struct __va_list_tag [1])arg4;	// IMP=0x0000000000011d4e
- (id)fetchObjectOfClass:(Class)arg1 initializer:(SEL)arg2 sql:(id)arg3;	// IMP=0x0000000000011cb1
- (id)fetch:(id)arg1 args:(struct __va_list_tag [1])arg2;	// IMP=0x0000000000011c3c
- (id)fetch:(id)arg1;	// IMP=0x0000000000011b98
- (_Bool)executeRaw:(id)arg1;	// IMP=0x0000000000011b2f
- (_Bool)execute:(id)arg1 args:(struct __va_list_tag [1])arg2;	// IMP=0x0000000000011abc
- (_Bool)execute:(id)arg1;	// IMP=0x0000000000011a18
- (void)assertOnQueue;	// IMP=0x00000000000119d7
- (_Bool)_validateIsRunningWithCorrectPersona;	// IMP=0x00000000000118ff
- (void)autovacuumIfNeeded;	// IMP=0x000000000001173e
- (_Bool)needsAutovacuum;	// IMP=0x000000000001163f
- (long long)sizeInBytes;	// IMP=0x00000000000115a4
- (void)brc_close;	// IMP=0x00000000000114a3
- (_Bool)brc_closeWithError:(id *)arg1;	// IMP=0x00000000000113c8
- (void)usePacedBatchingOnTargetQueue:(id)arg1 withInterval:(double)arg2 changeCount:(int)arg3;	// IMP=0x0000000000011350
- (_Bool)_shouldFlushWithChangeCount:(int)arg1;	// IMP=0x0000000000011124
- (void)disableProfilingForQueriesInBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001101c
- (_Bool)executeWithErrorHandler:(CDUnknownBlockType)arg1 sql:(id)arg2;	// IMP=0x0000000000010e6f
- (_Bool)executeWithSlowStatementRadar:(id)arg1 sql:(id)arg2;	// IMP=0x0000000000010c7d
- (_Bool)executeWithExpectedIndex:(id)arg1 sql:(id)arg2;	// IMP=0x0000000000010b16
- (id)fetchWithSlowStatementRadar:(id)arg1 objectWithConstructor:(CDUnknownBlockType)arg2 sql:(id)arg3;	// IMP=0x0000000000010914
- (id)fetchWithSlowStatementRadar:(id)arg1 objectOfClass:(Class)arg2 sql:(id)arg3;	// IMP=0x000000000001071c
- (id)fetchWithSlowStatementRadar:(id)arg1 sql:(id)arg2;	// IMP=0x000000000001052a
- (void)setProfilingHook:(CDUnknownBlockType)arg1;	// IMP=0x00000000000103e0
- (void)flushToMakeEditsVisibleToIPCReaders;	// IMP=0x0000000000010399
- (_Bool)attachDBAtPath:(id)arg1 as:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000010278
@property(nonatomic) _Bool profilingEnabled;
- (long long)changes;	// IMP=0x000000000000faff
- (_Bool)openAtURL:(id)arg1 withFlags:(int)arg2 error:(id *)arg3;	// IMP=0x000000000000fa21
- (void)_setLockedHandler;	// IMP=0x000000000000f73a
- (void)_setErrorHandlerWithDBCorruptionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f32a
- (id)initWithLabel:(id)arg1 dbCorruptionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f221
- (id)init;	// IMP=0x000000000000f20b

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType lockedHandler; // @dynamic lockedHandler;

@end
