//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKQuery, MISSING_TYPE, NSDate, NSDictionary, NSMutableSet, NSString, PDCloudStoreContainerDatabase, PDCloudStoreRecordsRequestModificationOperationConfiguration, PKCloudStoreZone;

@interface PDCloudStoreRecordsRequest : NSObject
{
    _Bool _storeChangesInDatabase;	// 8 = 0x8
    _Bool _returnRecords;	// 9 = 0x9
    _Bool _formReport;	// 10 = 0xa
    _Bool _useLastChangeToken;	// 11 = 0xb
    _Bool _shouldSaveToken;	// 12 = 0xc
    _Bool _detectConflicts;	// 13 = 0xd
    _Bool _ignoreChangesMadeByThisDevice;	// 14 = 0xe
    NSString *_groupName;	// 16 = 0x10
    NSString *_groupNameSuffix;	// 24 = 0x18
    long long _qualityOfService;	// 32 = 0x20
    unsigned long long _requestType;	// 40 = 0x28
    PDCloudStoreContainerDatabase *_containerDatabase;	// 48 = 0x30
    PKCloudStoreZone *_cloudStoreZone;	// 56 = 0x38
    CKQuery *_ckQuery;	// 64 = 0x40
    long long _batchLimit;	// 72 = 0x48
    CDUnknownBlockType _batchHandler;	// 80 = 0x50
    NSDictionary *_recordsToSaveByDatabaseIdentifier;	// 88 = 0x58
    NSDictionary *_recordIDsByDatabaseIdentifier;	// 96 = 0x60
    PDCloudStoreRecordsRequestModificationOperationConfiguration *_recordModificationOperationConfiguration;	// 104 = 0x68
    NSString *_recordName;	// 112 = 0x70
    NSDate *_ignoreRecordsBeforeDate;	// 120 = 0x78
    NSDate *_ignoreRecordsAfterDate;	// 128 = 0x80
    NSMutableSet *_completionHandlers;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00200000002f91cc
@property(retain, nonatomic) NSMutableSet *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(retain, nonatomic) NSDate *ignoreRecordsAfterDate; // @synthesize ignoreRecordsAfterDate=_ignoreRecordsAfterDate;
@property(retain, nonatomic) NSDate *ignoreRecordsBeforeDate; // @synthesize ignoreRecordsBeforeDate=_ignoreRecordsBeforeDate;
@property(retain, nonatomic) NSString *recordName; // @synthesize recordName=_recordName;
@property(retain, nonatomic) PDCloudStoreRecordsRequestModificationOperationConfiguration *recordModificationOperationConfiguration; // @synthesize recordModificationOperationConfiguration=_recordModificationOperationConfiguration;
@property(retain, nonatomic) NSDictionary *recordIDsByDatabaseIdentifier; // @synthesize recordIDsByDatabaseIdentifier=_recordIDsByDatabaseIdentifier;
@property(retain, nonatomic) NSDictionary *recordsToSaveByDatabaseIdentifier; // @synthesize recordsToSaveByDatabaseIdentifier=_recordsToSaveByDatabaseIdentifier;
@property(copy, nonatomic) CDUnknownBlockType batchHandler; // @synthesize batchHandler=_batchHandler;
@property(nonatomic) long long batchLimit; // @synthesize batchLimit=_batchLimit;
@property(retain, nonatomic) CKQuery *ckQuery; // @synthesize ckQuery=_ckQuery;
@property(retain, nonatomic) PKCloudStoreZone *cloudStoreZone; // @synthesize cloudStoreZone=_cloudStoreZone;
@property(retain, nonatomic) PDCloudStoreContainerDatabase *containerDatabase; // @synthesize containerDatabase=_containerDatabase;
@property(nonatomic) _Bool ignoreChangesMadeByThisDevice; // @synthesize ignoreChangesMadeByThisDevice=_ignoreChangesMadeByThisDevice;
@property(nonatomic) _Bool detectConflicts; // @synthesize detectConflicts=_detectConflicts;
@property(nonatomic) _Bool shouldSaveToken; // @synthesize shouldSaveToken=_shouldSaveToken;
@property(nonatomic) _Bool useLastChangeToken; // @synthesize useLastChangeToken=_useLastChangeToken;
@property(nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(retain, nonatomic) NSString *groupNameSuffix; // @synthesize groupNameSuffix=_groupNameSuffix;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) _Bool formReport; // @synthesize formReport=_formReport;
@property(nonatomic) _Bool returnRecords; // @synthesize returnRecords=_returnRecords;
@property(nonatomic) _Bool storeChangesInDatabase; // @synthesize storeChangesInDatabase=_storeChangesInDatabase;
- (_Bool)canCoalesceWithRequest:(id)arg1;	// IMP=0x00100000002f89b0
- (id)description;	// IMP=0x00100000002f86d2
- (void)callCompletionsWithResponse:(id)arg1 error:(id)arg2;	// IMP=0x00100000002f854f
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002f850c
- (MISSING_TYPE *)initWithRequestType:storeChanges:returnRecords:qualityOfService:groupName:groupNameSuffix: /* Error: Ran out of types for this method. */;	// IMP=0x00100000002f842c

@end

