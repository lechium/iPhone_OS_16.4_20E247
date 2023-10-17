//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSManifestInjectionPointHelper, NSArray, NSData, NSDictionary, NSMutableDictionary, NSString;

@interface CKKSManifest
{
    NSData *_derData;	// 8 = 0x8
    NSData *_digestValue;	// 16 = 0x10
    unsigned long long _generationCount;	// 24 = 0x18
    NSString *_signerID;	// 32 = 0x20
    NSString *_zoneName;	// 40 = 0x28
    NSArray *_leafRecordIDs;	// 48 = 0x30
    NSArray *_peerManifestIDs;	// 56 = 0x38
    NSMutableDictionary *_currentItemsDict;	// 64 = 0x40
    NSDictionary *_futureData;	// 72 = 0x48
    NSDictionary *_signaturesDict;	// 80 = 0x50
    NSDictionary *_schema;	// 88 = 0x58
    CKKSManifestInjectionPointHelper *_helper;	// 96 = 0x60
}

+ (_Bool)intransactionRecordDeleted:(id)arg1 resync:(_Bool)arg2 error:(id *)arg3;	// IMP=0x002000000012f687
+ (id)whereClauseForRecordName:(id)arg1;	// IMP=0x001000000012f4b3
+ (unsigned long long)greatestKnownGenerationCount;	// IMP=0x001000000012f343
+ (id)sqlTable;	// IMP=0x001000000012f336
+ (id)sqlColumns;	// IMP=0x001000000012f329
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x001000000012ed41
+ (id)manifestForPendingManifest:(id)arg1;	// IMP=0x001000000012eb51
+ (id)digestValueForLeafRecords:(id)arg1;	// IMP=0x001000000012e96e
+ (id)digestForData:(id)arg1;	// IMP=0x001000000012e955
+ (id)signatureOperation;	// IMP=0x001000000012e8cb
+ (id)latestTrustedManifestForZone:(id)arg1 error:(id *)arg2;	// IMP=0x001000000012e719
+ (id)manifestForRecordName:(id)arg1 error:(id *)arg2;	// IMP=0x001000000012e6b5
+ (id)manifestForZone:(id)arg1 peerID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000012e5b4
+ (id)tryFromDatabaseWhere:(id)arg1 error:(id *)arg2;	// IMP=0x001000000012e4fd
+ (void)performWithAccountInfo:(CDUnknownBlockType)arg1;	// IMP=0x001000000012e2e4
+ (_Bool)shouldEnforceManifests;	// IMP=0x001000000012e2cb
+ (_Bool)shouldSyncManifests;	// IMP=0x001000000012e2b2
+ (void)loadDefaults;	// IMP=0x001000000012e28e
+ (void)initialize;	// IMP=0x001000000012e14d
- (void).cxx_destruct;	// IMP=0x002000000012ce1e
@property(readonly, nonatomic) unsigned long long generationCount; // @synthesize generationCount=_generationCount;
@property(retain, nonatomic) CKKSManifestInjectionPointHelper *helper; // @synthesize helper=_helper;
@property(readonly, nonatomic) NSDictionary *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) NSString *signerID; // @synthesize signerID=_signerID;
@property(readonly, nonatomic) NSDictionary *signatures; // @synthesize signatures=_signaturesDict;
@property(readonly, nonatomic) NSDictionary *futureData; // @synthesize futureData=_futureData;
@property(readonly, nonatomic) NSDictionary *currentItems; // @synthesize currentItems=_currentItemsDict;
@property(readonly, nonatomic) NSArray *peerManifestIDs; // @synthesize peerManifestIDs=_peerManifestIDs;
@property(readonly, nonatomic) NSArray *leafRecordIDs; // @synthesize leafRecordIDs=_leafRecordIDs;
@property(readonly, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
- (void)nilAllIvars;	// IMP=0x001000000012cc75
- (id)ckRecordType;	// IMP=0x001000000012cc56
- (id)leafRecords;	// IMP=0x001000000012c9c1
@property(readonly, nonatomic) NSData *digestValue;
- (void)clearDigest;	// IMP=0x001000000012c8d6
- (id)leafRecordForItemUUID:(id)arg1;	// IMP=0x001000000012c813
- (id)leafRecordForID:(id)arg1;	// IMP=0x001000000012c6cb
- (_Bool)contentsAreEqualToManifest:(id)arg1;	// IMP=0x001000000012c66d
- (_Bool)itemUUIDExistsInManifest:(id)arg1;	// IMP=0x001000000012c5c3
- (_Bool)validateCurrentItem:(id)arg1 withError:(id *)arg2;	// IMP=0x001000000012c435
- (_Bool)validateItem:(id)arg1 withError:(id *)arg2;	// IMP=0x001000000012c239
- (_Bool)validateWithError:(id *)arg1;	// IMP=0x001000000012c084
- (id)derData;	// IMP=0x001000000012bc1d
- (void)setFromCKRecord:(id)arg1;	// IMP=0x001000000012bb1d
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x001000000012b7f3
- (id)updateCKRecord:(id)arg1 zoneID:(id)arg2;	// IMP=0x001000000012b3f4
- (id)CKRecordName;	// IMP=0x001000000012b397
- (id)whereClauseToFindSelf;	// IMP=0x001000000012b218
- (id)sqlValues;	// IMP=0x001000000012ae3c
- (_Bool)updateWithRecord:(id)arg1 error:(id *)arg2;	// IMP=0x001000000012aa3c
- (id)futureDataDictFromRecord:(id)arg1 withSchema:(id)arg2;	// IMP=0x001000000012a949
- (id)derDataFromPeerManifests:(id)arg1 error:(id *)arg2;	// IMP=0x001000000012a825
- (id)peerManifestsFromDERData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000012a6ea
- (id)derDataFromSignatureDict:(id)arg1 error:(id *)arg2;	// IMP=0x001000000012a5c6
- (id)signatureDictFromDERData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000012a48b
- (id)defaultHelperForSignerID:(id)arg1;	// IMP=0x001000000012a472
- (id)initWithCKRecord:(id)arg1;	// IMP=0x0010000000129dac
- (id)initWithDigestValue:(id)arg1 zone:(id)arg2 generationCount:(unsigned long long)arg3 leafRecordIDs:(id)arg4 peerManifestIDs:(id)arg5 currentItems:(id)arg6 futureData:(id)arg7 signatures:(id)arg8 signerID:(id)arg9 schema:(id)arg10 encodedRecord:(id)arg11;	// IMP=0x0010000000129d11
- (id)initWithDigestValue:(id)arg1 zone:(id)arg2 generationCount:(unsigned long long)arg3 leafRecordIDs:(id)arg4 peerManifestIDs:(id)arg5 currentItems:(id)arg6 futureData:(id)arg7 signatures:(id)arg8 signerID:(id)arg9 schema:(id)arg10;	// IMP=0x0010000000129cd3
- (id)initWithDigestValue:(id)arg1 zone:(id)arg2 generationCount:(unsigned long long)arg3 leafRecordIDs:(id)arg4 peerManifestIDs:(id)arg5 currentItems:(id)arg6 futureData:(id)arg7 signatures:(id)arg8 signerID:(id)arg9 schema:(id)arg10 helper:(id)arg11;	// IMP=0x0010000000129771

@end
