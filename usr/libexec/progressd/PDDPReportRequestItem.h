//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface PDDPReportRequestItem : PBCodable
{
    NSString *_classId;	// 8 = 0x8
    int _desiredGranularity;	// 16 = 0x10
    NSMutableArray *_handoutIds;	// 24 = 0x18
    NSMutableArray *_studentIds;	// 32 = 0x20
    struct {
        unsigned int desiredGranularity:1;
    } _has;	// 40 = 0x28
}

+ (Class)studentIdsType;	// IMP=0x00200000000f5038
+ (Class)handoutIdsType;	// IMP=0x00100000000f4f66
- (void).cxx_destruct;	// IMP=0x00200000000f6216
@property(retain, nonatomic) NSMutableArray *studentIds; // @synthesize studentIds=_studentIds;
@property(retain, nonatomic) NSMutableArray *handoutIds; // @synthesize handoutIds=_handoutIds;
@property(retain, nonatomic) NSString *classId; // @synthesize classId=_classId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000f5f1f
- (unsigned long long)hash;	// IMP=0x00100000000f5e91
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000f5d68
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000f5a37
- (void)copyTo:(id)arg1;	// IMP=0x00100000000f58a5
- (void)writeTo:(id)arg1;	// IMP=0x00100000000f564d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000f5640
- (id)dictionaryRepresentation;	// IMP=0x00100000000f5270
- (id)description;	// IMP=0x00100000000f51c1
- (int)StringAsDesiredGranularity:(id)arg1;	// IMP=0x00000000000f50f6
- (id)desiredGranularityAsString:(int)arg1;	// IMP=0x00100000000f50ad
@property(nonatomic) _Bool hasDesiredGranularity;
@property(nonatomic) int desiredGranularity; // @synthesize desiredGranularity=_desiredGranularity;
- (id)studentIdsAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000f501b
- (unsigned long long)studentIdsCount;	// IMP=0x00100000000f4ffe
- (void)addStudentIds:(id)arg1;	// IMP=0x00100000000f4f94
- (void)clearStudentIds;	// IMP=0x00100000000f4f77
- (id)handoutIdsAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000f4f49
- (unsigned long long)handoutIdsCount;	// IMP=0x00100000000f4f2c
- (void)addHandoutIds:(id)arg1;	// IMP=0x00100000000f4ec2
- (void)clearHandoutIds;	// IMP=0x00100000000f4ea5
@property(readonly, nonatomic) _Bool hasClassId;

@end

