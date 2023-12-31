//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface ModelKeyServerAPISignedKey : PBCodable
{
    NSData *_data;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000015ebe6
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000015eb9d
- (unsigned long long)hash;	// IMP=0x000000000015eb80
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015eae6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015ea6e
- (void)copyTo:(id)arg1;	// IMP=0x000000000015ea44
- (void)writeTo:(id)arg1;	// IMP=0x000000000015ea20
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000015ea13
- (id)dictionaryRepresentation;	// IMP=0x000000000015e9b7
- (id)description;	// IMP=0x000000000015e908
@property(readonly, nonatomic) _Bool hasData;

@end

