//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray;

@interface CKKSPendingManifest
{
    NSMutableArray *_committedLeafRecordIDs;	// 104 = 0x68
    _Bool _readyToCommit;	// 112 = 0x70
}

+ (_Bool)intransactionRecordChanged:(id)arg1 resync:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00400000001300e0
+ (id)sqlTable;	// IMP=0x00100000001300d3
- (void).cxx_destruct;	// IMP=0x00200000001300c0
@property(readonly, getter=isReadyToCommmit) _Bool readyToCommit; // @synthesize readyToCommit=_readyToCommit;
@property(readonly, nonatomic) NSArray *committedLeafRecordIDs; // @synthesize committedLeafRecordIDs=_committedLeafRecordIDs;
- (id)commitToDatabaseWithError:(id *)arg1;	// IMP=0x001000000012fc38
- (_Bool)isReadyToCommit;	// IMP=0x001000000012fa1b

@end

