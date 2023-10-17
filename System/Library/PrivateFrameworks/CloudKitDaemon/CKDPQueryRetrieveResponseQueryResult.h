//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecord, CKDPRecordIdentifier, NSString;

@interface CKDPQueryRetrieveResponseQueryResult : PBCodable
{
    NSString *_etag;	// 8 = 0x8
    CKDPRecordIdentifier *_identifier;	// 16 = 0x10
    CKDPRecord *_record;	// 24 = 0x18
    int _type;	// 32 = 0x20
    CDStruct_f953fb60 _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x00000000002b98a9
@property(retain, nonatomic) CKDPRecord *record; // @synthesize record=_record;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) CKDPRecordIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002b9763
- (unsigned long long)hash;	// IMP=0x00000000002b96d5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002b95ac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002b94c2
- (void)copyTo:(id)arg1;	// IMP=0x00000000002b941f
- (void)writeTo:(id)arg1;	// IMP=0x00000000002b9381
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002b9374
- (id)dictionaryRepresentation;	// IMP=0x00000000002b8ef6
- (id)description;	// IMP=0x00000000002b8e47
@property(readonly, nonatomic) _Bool hasRecord;
- (int)StringAsType:(id)arg1;	// IMP=0x00000000002b8dcb
- (id)typeAsString:(int)arg1;	// IMP=0x00000000002b8d75
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool hasEtag;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end
