//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ABSPBContainerPermissions : PBCodable
{
    _Bool _canCreateContacts;	// 8 = 0x8
    _Bool _canCreateGrouops;	// 9 = 0x9
    _Bool _canDeleteContacts;	// 10 = 0xa
    struct {
        unsigned int canCreateContacts:1;
        unsigned int canCreateGrouops:1;
        unsigned int canDeleteContacts:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool canCreateGrouops; // @synthesize canCreateGrouops=_canCreateGrouops;
@property(nonatomic) _Bool canDeleteContacts; // @synthesize canDeleteContacts=_canDeleteContacts;
@property(nonatomic) _Bool canCreateContacts; // @synthesize canCreateContacts=_canCreateContacts;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000004a48
- (unsigned long long)hash;	// IMP=0x00100000000049e5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000048ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000004856
- (void)copyTo:(id)arg1;	// IMP=0x00100000000047e3
- (void)writeTo:(id)arg1;	// IMP=0x0010000000004750
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000004743
- (id)dictionaryRepresentation;	// IMP=0x00100000000042cb
- (id)description;	// IMP=0x001000000000421c
@property(nonatomic) _Bool hasCanCreateGrouops;
@property(nonatomic) _Bool hasCanDeleteContacts;
@property(nonatomic) _Bool hasCanCreateContacts;

@end

