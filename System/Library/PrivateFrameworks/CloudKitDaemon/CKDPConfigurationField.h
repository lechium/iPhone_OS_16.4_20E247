//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPConfigurationFieldValue, NSString;

@interface CKDPConfigurationField : PBCodable
{
    NSString *_name;	// 8 = 0x8
    CKDPConfigurationFieldValue *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000d4907
@property(retain, nonatomic) CKDPConfigurationFieldValue *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000d4840
- (unsigned long long)hash;	// IMP=0x00000000000d47f3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d472b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d468d
- (void)copyTo:(id)arg1;	// IMP=0x00000000000d462a
- (void)writeTo:(id)arg1;	// IMP=0x00000000000d45cd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000d45c0
- (id)dictionaryRepresentation;	// IMP=0x00000000000d4320
- (id)description;	// IMP=0x00000000000d4271
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasName;

@end

