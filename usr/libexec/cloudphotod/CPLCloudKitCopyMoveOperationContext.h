//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecordZoneID, NSMutableArray, NSMutableDictionary;

@interface CPLCloudKitCopyMoveOperationContext
{
    NSMutableArray *_sourceRecordIDs;	// 72 = 0x48
    NSMutableDictionary *_destinationRecordIDs;	// 80 = 0x50
    CKRecordZoneID *_sourceZoneID;	// 88 = 0x58
    CKRecordZoneID *_destinationZoneID;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000000bee2a
@property(readonly, nonatomic) CKRecordZoneID *destinationZoneID; // @synthesize destinationZoneID=_destinationZoneID;
@property(readonly, nonatomic) CKRecordZoneID *sourceZoneID; // @synthesize sourceZoneID=_sourceZoneID;
- (id)extendedStatusDescriptionStrings;	// IMP=0x00100000000beb5f
- (id)operationDescription;	// IMP=0x00100000000beab1
- (void)addCopyMoveFromRecordID:(id)arg1 toRecordID:(id)arg2;	// IMP=0x00100000000be9e2
- (id)initFromZoneID:(id)arg1 toZoneID:(id)arg2;	// IMP=0x00100000000be940

@end
