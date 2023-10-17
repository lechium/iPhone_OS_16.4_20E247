//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NEKPBDuplicateSource : PBCodable
{
    NSString *_externalId;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000015354
@property(retain, nonatomic) NSString *externalId; // @synthesize externalId=_externalId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000152a7
- (unsigned long long)hash;	// IMP=0x001000000001525a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000015192
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000150f4
- (void)copyTo:(id)arg1;	// IMP=0x0010000000015091
- (void)writeTo:(id)arg1;	// IMP=0x0010000000015034
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000015027
- (id)dictionaryRepresentation;	// IMP=0x0010000000014e0f
- (id)description;	// IMP=0x0010000000014d60
@property(readonly, nonatomic) _Bool hasExternalId;
@property(readonly, nonatomic) _Bool hasName;

@end
