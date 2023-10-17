//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PDAbstractClassZoneOperation
{
    _Bool _responseStatusPayloadFailed;	// 24 = 0x18
}

+ (id)serviceID;	// IMP=0x004000000005944c
- (void)_setAuthorizationForAttachmentWithObjectID:(id)arg1 shouldAuthorize:(_Bool)arg2;	// IMP=0x00200000000621f4
- (_Bool)_deleteSurveyStep:(id)arg1;	// IMP=0x0010000000061a4f
- (_Bool)_deleteSurvey:(id)arg1;	// IMP=0x0010000000061585
- (_Bool)_deleteStateChanges:(id)arg1;	// IMP=0x00100000000611bb
- (_Bool)_deleteDraftAnswer:(id)arg1;	// IMP=0x0010000000061035
- (_Bool)_deleteEntity:(Class)arg1 identity:(id)arg2;	// IMP=0x0010000000060cec
- (_Bool)deleteClassWithObjectID:(id)arg1 deletePersons:(_Bool)arg2;	// IMP=0x00100000000609c5
- (_Bool)deleteHandoutWithObjectID:(id)arg1 shouldDeleteDrafts:(_Bool)arg2;	// IMP=0x001000000006077b
- (_Bool)_deleteWithPayload:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005fc2c
- (_Bool)_insertOrUpdateArchivedSurveyStep:(id)arg1;	// IMP=0x001000000005f8af
- (_Bool)_insertOrUpdateSurveyStep:(id)arg1;	// IMP=0x001000000005f2a8
- (_Bool)_insertOrUpdateCollectionItem:(id)arg1;	// IMP=0x001000000005f10d
- (_Bool)_insertOrUpdateEntity:(id)arg1;	// IMP=0x001000000005ef69
- (void)setHandoutClosedStatusForStateChange:(id)arg1 andStateChangePayload:(id)arg2 forHandout:(id)arg3;	// IMP=0x001000000005ef12
- (void)setCompletionAndLockedStatusForStateChange:(id)arg1 andStateChangePayload:(id)arg2 forAttachment:(id)arg3;	// IMP=0x001000000005ec15
- (_Bool)setCompletionStatus:(int)arg1 forAttachment:(id)arg2 locked:(_Bool)arg3 dateCompleted:(id)arg4 dateModified:(id)arg5;	// IMP=0x001000000005eb24
- (id)_applyStateChangesToParentHandoutEntity:(id)arg1;	// IMP=0x001000000005e51b
- (_Bool)resolveMissingEntityWithObjectID:(id)arg1;	// IMP=0x001000000005e437
- (_Bool)validateStateChangePayload:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005d147
- (_Bool)processStateChange:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005c968
- (_Bool)processCompletionStatus:(id)arg1;	// IMP=0x001000000005c4b7
- (_Bool)processAuthorizationStatus:(id)arg1;	// IMP=0x001000000005c33b
- (_Bool)processAttachment:(id)arg1;	// IMP=0x001000000005c20b
- (_Bool)processPayloadStatus:(id)arg1 allowMixedResponse:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000005beb1
- (_Bool)deleteCollectionItemsWithReferenceObjectID:(id)arg1;	// IMP=0x001000000005bdcd
- (_Bool)updateCollectionItemsReferenceObjectID:(id)arg1 toType:(long long)arg2 andObjectID:(id)arg3;	// IMP=0x001000000005bb3b
- (_Bool)_insertOrUpdateArchivedHandout:(id)arg1;	// IMP=0x001000000005ba6e
- (_Bool)_insertOrUpdateSurveyAnswer:(id)arg1;	// IMP=0x001000000005b8da
- (_Bool)processPayloadFromResponse:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005a4eb
- (void)logPayloadBeforeProcessing:(id)arg1;	// IMP=0x001000000005a31f
- (_Bool)processPayloadsFromResponse:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000059cee
- (_Bool)processResponse:(id *)arg1;	// IMP=0x0010000000059b7a
- (_Bool)stopProcessingIfResponseStatusPayloadFailed;	// IMP=0x0010000000059b72
- (_Bool)processPayloadWithinWriteTransaction:(id)arg1 error:(id *)arg2 stop:(_Bool *)arg3;	// IMP=0x0010000000059814
- (_Bool)processResponseObject:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005965b
- (_Bool)parseStreamedResponse:(id)arg1;	// IMP=0x00100000000595fe
- (_Bool)hasBigResponses;	// IMP=0x00100000000595f6
- (_Bool)readStreamablePayload:(id)arg1 reader:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000059491
- (long long)streamablePayloadClassTagValue;	// IMP=0x0010000000059486
- (Class)streamablePayloadClass;	// IMP=0x0010000000059475
- (_Bool)acceptsPayloadType:(int)arg1;	// IMP=0x001000000005946d
- (_Bool)shouldProcessPayloadWithStatusCode:(int)arg1;	// IMP=0x0010000000059461
- (_Bool)allowMixedResponseStatusCode;	// IMP=0x0010000000059459

@end
