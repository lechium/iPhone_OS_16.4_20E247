//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSMutableSet;

@interface PDASMPayloadOperation
{
    NSMutableSet *_unresolvedMissingEntityIDs;	// 24 = 0x18
}

+ (id)serviceID;	// IMP=0x004000000009508c
- (void).cxx_destruct;	// IMP=0x0020000000099c0f
- (_Bool)_deleteEntity:(Class)arg1 identity:(id)arg2;	// IMP=0x00100000000999b6
- (_Bool)deleteClassMemberWithClassID:(id)arg1 personIDs:(id)arg2;	// IMP=0x001000000009961c
- (_Bool)forgetAboutDeletedEntity:(Class)arg1 withObjectID:(id)arg2;	// IMP=0x001000000009944c
- (_Bool)deleteClassWithObjectID:(id)arg1 deletePersons:(_Bool)arg2;	// IMP=0x0010000000099052
- (_Bool)deletePersonWithObjectID:(id)arg1;	// IMP=0x0010000000098e20
- (_Bool)_deleteWithPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000098586
- (_Bool)insertEntity:(id)arg1;	// IMP=0x001000000009822b
- (_Bool)handleZoneRemoved:(id)arg1;	// IMP=0x0010000000097f10
- (_Bool)processAdminRequestAccountPayload:(id)arg1;	// IMP=0x0010000000097c13
- (MISSING_TYPE *)processAdminRequest: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000979e8
- (_Bool)processOrganization:(id)arg1;	// IMP=0x0010000000097557
- (_Bool)processLocation:(id)arg1;	// IMP=0x001000000009750b
- (_Bool)processClassMember:(id)arg1;	// IMP=0x0010000000097215
- (_Bool)processClassPayload:(id)arg1;	// IMP=0x0010000000097128
- (_Bool)processPerson:(id)arg1;	// IMP=0x0010000000097067
- (void)_forceNoCache:(id)arg1;	// IMP=0x0010000000097015
- (_Bool)processResponseZone:(id)arg1;	// IMP=0x001000000009700d
- (_Bool)processStatusPayload:(id)arg1 allowMixedResponse:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000096cb8
- (_Bool)processPayloadFromResponse:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000096454
- (_Bool)shouldProcessPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000961db
- (_Bool)shouldProcessPayloadWithStatusCode:(int)arg1;	// IMP=0x00100000000961c5
- (_Bool)processPayloads:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000095c6e
- (_Bool)processPayloadWithinWriteTransaction:(id)arg1 error:(id *)arg2 stop:(_Bool *)arg3;	// IMP=0x00100000000957b8
- (void)finishedResponseProcessing;	// IMP=0x00100000000957b2
- (_Bool)processResponseObject:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000955dc
- (_Bool)writePayload:(id)arg1 toRequest:(id)arg2 writer:(id)arg3;	// IMP=0x00100000000952a4
- (_Bool)hasBigResponses;	// IMP=0x001000000009529c
- (int)actionForPayload:(id)arg1;	// IMP=0x0010000000095287
- (_Bool)readStreamablePayload:(id)arg1 reader:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000095122
- (long long)streamablePayloadClassTagValue;	// IMP=0x0010000000095117
- (Class)streamablePayloadClass;	// IMP=0x0010000000095106
- (_Bool)acceptsPayloadType:(int)arg1;	// IMP=0x00100000000950fe
- (_Bool)allowMixedResponseStatusCode;	// IMP=0x00100000000950f6
- (id)initWithDatabase:(id)arg1;	// IMP=0x0010000000095099

@end
