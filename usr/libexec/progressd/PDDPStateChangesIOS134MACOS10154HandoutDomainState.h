//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface PDDPStateChangesIOS134MACOS10154HandoutDomainState : PBCodable
{
    int _domain;	// 8 = 0x8
    int _flags;	// 12 = 0xc
    int _state;	// 16 = 0x10
    CDStruct_06c35b4c _has;	// 20 = 0x14
}

- (void)mergeFrom:(id)arg1;	// IMP=0x0020000000093693
- (unsigned long long)hash;	// IMP=0x0010000000093630
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000009355d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000934c7
- (void)copyTo:(id)arg1;	// IMP=0x0010000000093454
- (void)writeTo:(id)arg1;	// IMP=0x00100000000933c4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000933b7
- (id)dictionaryRepresentation;	// IMP=0x0010000000092e2d
- (id)description;	// IMP=0x0010000000092d7e
- (int)StringAsFlags:(id)arg1;	// IMP=0x0010000000092bc8
- (id)flagsAsString:(int)arg1;	// IMP=0x0010000000092aad
@property(nonatomic) _Bool hasFlags;
@property(nonatomic) int flags; // @synthesize flags=_flags;
- (int)StringAsState:(id)arg1;	// IMP=0x00100000000929b3
- (id)stateAsString:(int)arg1;	// IMP=0x001000000009296a
@property(nonatomic) _Bool hasState;
@property(nonatomic) int state; // @synthesize state=_state;
- (int)StringAsDomain:(id)arg1;	// IMP=0x0010000000092811
- (id)domainAsString:(int)arg1;	// IMP=0x00100000000927c8
@property(nonatomic) _Bool hasDomain;
@property(nonatomic) int domain; // @synthesize domain=_domain;

@end
