//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSMutableDictionary;

@interface CKDArchiveRecordsURLRequest : CKDURLRequest
{
    CDUnknownBlockType _recordArchivedBlock;	// 8 = 0x8
    NSMutableDictionary *_zoneIDToRecordIDs;	// 16 = 0x10
    NSMutableDictionary *_recordZoneIDByRequestID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000017831d
@property(retain, nonatomic) NSMutableDictionary *recordZoneIDByRequestID; // @synthesize recordZoneIDByRequestID=_recordZoneIDByRequestID;
@property(retain, nonatomic) NSMutableDictionary *zoneIDToRecordIDs; // @synthesize zoneIDToRecordIDs=_zoneIDToRecordIDs;
@property(copy, nonatomic) CDUnknownBlockType recordArchivedBlock; // @synthesize recordArchivedBlock=_recordArchivedBlock;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x0000000000177fea
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x0000000000177d21
- (id)generateRequestOperations;	// IMP=0x0000000000177920
- (id)requestOperationClasses;	// IMP=0x00000000001778b4
- (id)zoneIDsToLock;	// IMP=0x0000000000177864
- (id)initWithOperation:(id)arg1 recordIDsToArchive:(id)arg2;	// IMP=0x00000000001775a9

@end
