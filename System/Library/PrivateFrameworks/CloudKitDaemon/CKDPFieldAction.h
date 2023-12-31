//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPFieldActionDeleteListRange, CKDPFieldActionInsertIntoList, CKDPFieldActionReplaceListRange;

@interface CKDPFieldAction : PBCodable
{
    CKDPFieldActionDeleteListRange *_deleteListRange;	// 8 = 0x8
    CKDPFieldActionInsertIntoList *_insertIntoList;	// 16 = 0x10
    CKDPFieldActionReplaceListRange *_replaceListRange;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000023b7ac
@property(retain, nonatomic) CKDPFieldActionReplaceListRange *replaceListRange; // @synthesize replaceListRange=_replaceListRange;
@property(retain, nonatomic) CKDPFieldActionDeleteListRange *deleteListRange; // @synthesize deleteListRange=_deleteListRange;
@property(retain, nonatomic) CKDPFieldActionInsertIntoList *insertIntoList; // @synthesize insertIntoList=_insertIntoList;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000023b66c
- (unsigned long long)hash;	// IMP=0x000000000023b5ff
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000023b507
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000023b443
- (void)copyTo:(id)arg1;	// IMP=0x000000000023b3c0
- (void)writeTo:(id)arg1;	// IMP=0x000000000023b346
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000023b339
- (id)dictionaryRepresentation;	// IMP=0x000000000023afae
- (id)description;	// IMP=0x000000000023aeff
@property(readonly, nonatomic) _Bool hasReplaceListRange;
@property(readonly, nonatomic) _Bool hasDeleteListRange;
@property(readonly, nonatomic) _Bool hasInsertIntoList;

@end

