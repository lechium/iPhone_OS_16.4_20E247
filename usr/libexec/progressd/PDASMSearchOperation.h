//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLSSearchSpecification, NSMutableDictionary;

@interface PDASMSearchOperation
{
    CDUnknownBlockType _resultsBlock;	// 32 = 0x20
    CDUnknownBlockType _finishBlock;	// 40 = 0x28
    _Bool _resultsBlockStop;	// 48 = 0x30
    double _expireRecordsAfterSeconds;	// 56 = 0x38
    struct os_unfair_lock_s _finisherLock;	// 64 = 0x40
    _Bool _receivedResponse;	// 68 = 0x44
    _Bool _didCallFinishBlock;	// 69 = 0x45
    _Bool _postFilterPersonsByRequiredRoleType;	// 70 = 0x46
    _Bool _postFilterPersonsByRequiredRolePrivilege;	// 71 = 0x47
    _Bool _postFilterPersonsByRequiredClassMemberRole;	// 72 = 0x48
    CLSSearchSpecification *_searchSpec;	// 80 = 0x50
    NSMutableDictionary *_queryHashesByZone;	// 88 = 0x58
    NSMutableDictionary *_personsRequiringFilterProcessing;	// 96 = 0x60
}

+ (id)defaultEndpointInfo;	// IMP=0x004000000008a73f
- (void).cxx_destruct;	// IMP=0x002000000008e945
@property(readonly, nonatomic) NSMutableDictionary *personsRequiringFilterProcessing; // @synthesize personsRequiringFilterProcessing=_personsRequiringFilterProcessing;
@property(nonatomic) _Bool postFilterPersonsByRequiredClassMemberRole; // @synthesize postFilterPersonsByRequiredClassMemberRole=_postFilterPersonsByRequiredClassMemberRole;
@property(nonatomic) _Bool postFilterPersonsByRequiredRolePrivilege; // @synthesize postFilterPersonsByRequiredRolePrivilege=_postFilterPersonsByRequiredRolePrivilege;
@property(nonatomic) _Bool postFilterPersonsByRequiredRoleType; // @synthesize postFilterPersonsByRequiredRoleType=_postFilterPersonsByRequiredRoleType;
@property(retain, nonatomic) NSMutableDictionary *queryHashesByZone; // @synthesize queryHashesByZone=_queryHashesByZone;
@property(nonatomic) _Bool didCallFinishBlock; // @synthesize didCallFinishBlock=_didCallFinishBlock;
@property(nonatomic) _Bool receivedResponse; // @synthesize receivedResponse=_receivedResponse;
@property(readonly, nonatomic) CLSSearchSpecification *searchSpec; // @synthesize searchSpec=_searchSpec;
- (id)processOrganizationSearchQuery:(id)arg1;	// IMP=0x001000000008e748
- (id)processClassMemberSearchQuery:(id)arg1;	// IMP=0x001000000008e614
- (id)processPersonSearchQuery:(id)arg1;	// IMP=0x001000000008ddf1
- (id)processClassLocationIDsSearchQuery:(id)arg1;	// IMP=0x001000000008dcca
- (id)criteriaForFieldName:(id)arg1 andValues:(id)arg2 withFormat:(id)arg3;	// IMP=0x001000000008d901
- (id)criteriaForFieldName:(id)arg1 andValue:(id)arg2;	// IMP=0x001000000008d82c
- (id)createQueryIfNoneExists:(id)arg1;	// IMP=0x001000000008d7e5
- (id)generateFilterQueryForZoneName:(id)arg1;	// IMP=0x001000000008d68c
- (_Bool)processOrganization:(id)arg1;	// IMP=0x001000000008d0fb
- (_Bool)processClassMember:(id)arg1;	// IMP=0x001000000008cb90
- (_Bool)processClassPayload:(id)arg1;	// IMP=0x001000000008c9df
- (_Bool)processPerson:(id)arg1;	// IMP=0x001000000008c849
- (id)postFilterWillAcceptClassMember:(id)arg1;	// IMP=0x001000000008c724
- (_Bool)postFilterWillAcceptPerson:(id)arg1 withRoleLocations:(id)arg2;	// IMP=0x001000000008c66d
- (_Bool)processResponseZone:(id)arg1;	// IMP=0x001000000008c046
- (void)rescheduleOperation;	// IMP=0x001000000008c040
- (_Bool)shouldProcessResponseBody;	// IMP=0x001000000008c004
- (id)requestData;	// IMP=0x001000000008b8f1
- (id)createSearchRequestZoneForZoneName:(id)arg1 usingQuery:(id)arg2;	// IMP=0x001000000008b5ed
- (_Bool)wantsToExecute;	// IMP=0x001000000008b59f
- (_Bool)needsToMakeNetworkRequest;	// IMP=0x001000000008b219
- (_Bool)haveIncompleteSyncData;	// IMP=0x001000000008aee0
- (_Bool)isValidASMSearchSpecification:(id)arg1;	// IMP=0x001000000008addb
- (void)markAsFinished;	// IMP=0x001000000008ad9d
- (void)callFinishBlockIfNeeded;	// IMP=0x001000000008ac47
- (id)customRequestHeaders;	// IMP=0x001000000008aa62
- (id)initWithDatabase:(id)arg1 objectsMatching:(id)arg2 enumerationBlock:(CDUnknownBlockType)arg3 finishBlock:(CDUnknownBlockType)arg4;	// IMP=0x001000000008a951
- (id)initWithDatabase:(id)arg1;	// IMP=0x001000000008a862
- (Class)expectedResponseClass;	// IMP=0x001000000008a851
- (id)acceptContentType;	// IMP=0x001000000008a844
- (id)requestContentType;	// IMP=0x001000000008a837
- (id)endpointIdentifier;	// IMP=0x001000000008a82a
- (id)logSubsystem;	// IMP=0x001000000008a816
- (_Bool)resultsWillExpire;	// IMP=0x001000000008a80e

@end
