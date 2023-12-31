//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSFaultHandler, NSFetchRequest, NSMutableArray, NSMutableSet, NSSQLEntity, NSSQLModel, NSSQLiteStatement, NSString, _PFFetchPlanHeader;

__attribute__((visibility("hidden")))
@interface NSSQLFetchRequestContext
{
    NSString *_externalDataReferencesDirectory;	// 88 = 0x58
    NSString *_externalDataLinksDirectory;	// 96 = 0x60
    NSString *_fileBackedFuturesDirectory;	// 104 = 0x68
    NSSQLModel *_sqlModel;	// 112 = 0x70
    NSSQLEntity *_sqlEntity;	// 120 = 0x78
    NSFaultHandler *_faultHandler;	// 128 = 0x80
    _PFFetchPlanHeader *_fetchPlan;	// 136 = 0x88
    NSSQLiteStatement *_statement;	// 144 = 0x90
    NSMutableSet *_objectIDsToRegister;	// 152 = 0x98
    NSMutableSet *_objectsToAwaken;	// 160 = 0xa0
    NSMutableArray *_resultFaultsThatWereFired;	// 168 = 0xa8
    NSSQLFetchRequestContext *_parentContext;	// 176 = 0xb0
    int _fileProtectionLevel;	// 184 = 0xb8
    _Bool _isFaultRequest;	// 188 = 0xbc
    NSFetchRequest *_originalRequest;	// 192 = 0xc0
    _Bool _shouldUseBatches;	// 200 = 0xc8
    _Bool _storeIsUbiquitized;	// 201 = 0xc9
    _Bool _isUsingCachedStatement;	// 202 = 0xca
    NSMutableArray *_concurrentFetchingPipelineRows;	// 208 = 0xd0
    NSDictionary *_prefetchingSubstitutionVariables;	// 216 = 0xd8
}

@property(readonly, nonatomic) _Bool shouldUseBatches; // @synthesize shouldUseBatches=_shouldUseBatches;
@property(nonatomic) _Bool isFaultRequest; // @synthesize isFaultRequest=_isFaultRequest;
- (void)executeEpilogue;	// IMP=0x00000000002e775b
- (_Bool)executeRequestCore:(id *)arg1;	// IMP=0x00000000002e768d
- (void)executePrologue;	// IMP=0x00000000002e7511
- (void)visitPredicateExpression:(id)arg1;	// IMP=0x00000000002e73a1
- (void)visitPredicate:(id)arg1;	// IMP=0x00000000002e739b
- (id)_createStatement;	// IMP=0x00000000002e724d
@property(retain, nonatomic) NSSQLiteStatement *fetchStatement;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg1 onEntity:(id)arg2;	// IMP=0x00000000002e6420
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2;	// IMP=0x00000000002e63e7
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2;	// IMP=0x00000000002e63ae
@property(readonly, nonatomic) NSFetchRequest *request;
- (id)createChildContextForNestedFetchRequest:(id)arg1;	// IMP=0x00000000002e62b6
- (void)dealloc;	// IMP=0x00000000002e615a
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;	// IMP=0x00000000002e58c0

@end

