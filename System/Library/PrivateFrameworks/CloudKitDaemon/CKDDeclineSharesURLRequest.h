//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSArray, NSMutableDictionary;

@interface CKDDeclineSharesURLRequest : CKDURLRequest
{
    CDUnknownBlockType _shareDeclinedBlock;	// 8 = 0x8
    NSArray *_shareMetadatasToDecline;	// 16 = 0x10
    NSMutableDictionary *_shareMetadataByRequestID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001644fe
@property(retain, nonatomic) NSMutableDictionary *shareMetadataByRequestID; // @synthesize shareMetadataByRequestID=_shareMetadataByRequestID;
@property(retain, nonatomic) NSArray *shareMetadatasToDecline; // @synthesize shareMetadatasToDecline=_shareMetadatasToDecline;
@property(copy, nonatomic) CDUnknownBlockType shareDeclinedBlock; // @synthesize shareDeclinedBlock=_shareDeclinedBlock;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x0000000000164327
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x00000000001641c7
- (id)generateRequestOperations;	// IMP=0x0000000000163da9
- (id)requestOperationClasses;	// IMP=0x0000000000163d3d
- (id)zoneIDsToLock;	// IMP=0x0000000000163b24
- (id)initWithOperation:(id)arg1 shareMetadatasToDecline:(id)arg2;	// IMP=0x0000000000163a8b

@end
