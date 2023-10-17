//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPRecordSaveRequestConflictLoserUpdate : PBCodable
{
    NSMutableArray *_conflictLoserEtags;	// 8 = 0x8
}

+ (Class)conflictLoserEtagsType;	// IMP=0x00100000002c83bb
- (void).cxx_destruct;	// IMP=0x00000000002c8c36
@property(retain, nonatomic) NSMutableArray *conflictLoserEtags; // @synthesize conflictLoserEtags=_conflictLoserEtags;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002c8adc
- (unsigned long long)hash;	// IMP=0x00000000002c8abf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002c8a25
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002c8862
- (void)copyTo:(id)arg1;	// IMP=0x00000000002c87a3
- (void)writeTo:(id)arg1;	// IMP=0x00000000002c8673
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002c8666
- (id)dictionaryRepresentation;	// IMP=0x00000000002c847b
- (id)description;	// IMP=0x00000000002c83cc
- (id)conflictLoserEtagsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002c839e
- (unsigned long long)conflictLoserEtagsCount;	// IMP=0x00000000002c8381
- (void)addConflictLoserEtags:(id)arg1;	// IMP=0x00000000002c8317
- (void)clearConflictLoserEtags;	// IMP=0x00000000002c82fa

@end
