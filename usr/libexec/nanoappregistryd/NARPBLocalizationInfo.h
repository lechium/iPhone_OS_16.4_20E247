//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface NARPBLocalizationInfo : PBCodable
{
    NSMutableArray *_keys;	// 8 = 0x8
    NSString *_localization;	// 16 = 0x10
    NSMutableArray *_localizedValues;	// 24 = 0x18
}

+ (Class)localizedValueType;	// IMP=0x0020000000008c36
+ (Class)keyType;	// IMP=0x0010000000008b64
- (void).cxx_destruct;	// IMP=0x0020000000009a82
@property(retain, nonatomic) NSMutableArray *localizedValues; // @synthesize localizedValues=_localizedValues;
@property(retain, nonatomic) NSMutableArray *keys; // @synthesize keys=_keys;
@property(retain, nonatomic) NSString *localization; // @synthesize localization=_localization;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000097ab
- (unsigned long long)hash;	// IMP=0x001000000000973e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000009646
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000933a
- (void)copyTo:(id)arg1;	// IMP=0x00100000000091cf
- (void)writeTo:(id)arg1;	// IMP=0x0010000000008fa3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000008f96
- (id)dictionaryRepresentation;	// IMP=0x0010000000008cf6
- (id)description;	// IMP=0x0010000000008c47
- (id)localizedValueAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000008c19
- (unsigned long long)localizedValuesCount;	// IMP=0x0010000000008bfc
- (void)addLocalizedValue:(id)arg1;	// IMP=0x0010000000008b92
- (void)clearLocalizedValues;	// IMP=0x0010000000008b75
- (id)keyAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000008b47
- (unsigned long long)keysCount;	// IMP=0x0010000000008b2a
- (void)addKey:(id)arg1;	// IMP=0x0010000000008ac0
- (void)clearKeys;	// IMP=0x0010000000008aa3
@property(readonly, nonatomic) _Bool hasLocalization;

@end
