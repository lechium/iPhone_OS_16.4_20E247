//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class TASKResponse;

@interface TASKControlResponse : PBCodable
{
    TASKResponse *_create;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000008a5c7
@property(retain, nonatomic) TASKResponse *create; // @synthesize create=_create;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000008a545
- (unsigned long long)hash;	// IMP=0x001000000008a528
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000008a48e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000008a416
- (void)copyTo:(id)arg1;	// IMP=0x001000000008a3ec
- (void)writeTo:(id)arg1;	// IMP=0x001000000008a3c8
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000008a3bb
- (id)dictionaryRepresentation;	// IMP=0x001000000008a16f
- (id)description;	// IMP=0x001000000008a0c0
@property(readonly, nonatomic) _Bool hasCreate;

@end
