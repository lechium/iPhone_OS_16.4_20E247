//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPUser;

@interface CKDPUserQueryResponse : PBCodable
{
    CKDPUser *_user;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000032df04
@property(retain, nonatomic) CKDPUser *user; // @synthesize user=_user;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000032de82
- (unsigned long long)hash;	// IMP=0x000000000032de65
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000032ddcb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000032dd53
- (void)copyTo:(id)arg1;	// IMP=0x000000000032dd29
- (void)writeTo:(id)arg1;	// IMP=0x000000000032dd05
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000032dcf8
- (id)dictionaryRepresentation;	// IMP=0x000000000032daae
- (id)description;	// IMP=0x000000000032d9ff
@property(readonly, nonatomic) _Bool hasUser;

@end
