//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPMergeableValueIdentifier, CKDPRecordFieldIdentifier, CKDPRecordIdentifier, NSMutableArray;

@interface CKDPRealTimeMessageAssociatedMergeableDeltas : PBCodable
{
    CKDPRecordFieldIdentifier *_fieldIdentifier;	// 8 = 0x8
    CKDPMergeableValueIdentifier *_identifier;	// 16 = 0x10
    NSMutableArray *_mergeableDeltas;	// 24 = 0x18
    CKDPRecordIdentifier *_recordIdentifier;	// 32 = 0x20
}

+ (Class)mergeableDeltasType;	// IMP=0x0010000000113058
- (void).cxx_destruct;	// IMP=0x0000000000114050
@property(retain, nonatomic) NSMutableArray *mergeableDeltas; // @synthesize mergeableDeltas=_mergeableDeltas;
@property(retain, nonatomic) CKDPMergeableValueIdentifier *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) CKDPRecordFieldIdentifier *fieldIdentifier; // @synthesize fieldIdentifier=_fieldIdentifier;
@property(retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000113d91
- (unsigned long long)hash;	// IMP=0x0000000000113d0d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000113be1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001139b5
- (void)copyTo:(id)arg1;	// IMP=0x0000000000113893
- (void)writeTo:(id)arg1;	// IMP=0x000000000011370d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000113700
- (id)dictionaryRepresentation;	// IMP=0x0000000000113118
- (id)description;	// IMP=0x0000000000113069
- (id)mergeableDeltasAtIndex:(unsigned long long)arg1;	// IMP=0x000000000011303b
- (unsigned long long)mergeableDeltasCount;	// IMP=0x000000000011301e
- (void)addMergeableDeltas:(id)arg1;	// IMP=0x0000000000112fb4
- (void)clearMergeableDeltas;	// IMP=0x0000000000112f97
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(readonly, nonatomic) _Bool hasFieldIdentifier;
@property(readonly, nonatomic) _Bool hasRecordIdentifier;

@end

