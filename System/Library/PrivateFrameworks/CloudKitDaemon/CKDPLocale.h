//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKDPLocale : PBCodable
{
    NSString *_languageCode;	// 8 = 0x8
    NSString *_regionCode;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000023048c
@property(retain, nonatomic) NSString *regionCode; // @synthesize regionCode=_regionCode;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002303df
- (unsigned long long)hash;	// IMP=0x0000000000230392
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002302ca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000023022c
- (void)copyTo:(id)arg1;	// IMP=0x00000000002301c9
- (void)writeTo:(id)arg1;	// IMP=0x000000000023016c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000023015f
- (id)dictionaryRepresentation;	// IMP=0x000000000022ff49
- (id)description;	// IMP=0x000000000022fe9a
@property(readonly, nonatomic) _Bool hasRegionCode;
@property(readonly, nonatomic) _Bool hasLanguageCode;

@end

