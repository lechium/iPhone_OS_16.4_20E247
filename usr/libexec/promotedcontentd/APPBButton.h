//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class APPBButtonStyle, NSString;

@interface APPBButton : PBCodable
{
    NSString *_accessText;	// 8 = 0x8
    APPBButtonStyle *_buttonStyle;	// 16 = 0x10
    int _predefined;	// 24 = 0x18
    NSString *_text;	// 32 = 0x20
    struct {
        unsigned int predefined:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000c065c
@property(retain, nonatomic) APPBButtonStyle *buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(retain, nonatomic) NSString *accessText; // @synthesize accessText=_accessText;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000c0530
- (unsigned long long)hash;	// IMP=0x00100000000c0499
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000c0369
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000c0282
- (void)copyTo:(id)arg1;	// IMP=0x00100000000c01df
- (void)writeTo:(id)arg1;	// IMP=0x00100000000c0141
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000c0134
- (id)dictionaryRepresentation;	// IMP=0x00100000000bfd04
- (id)description;	// IMP=0x00100000000bfc55
@property(readonly, nonatomic) _Bool hasButtonStyle;
@property(readonly, nonatomic) _Bool hasAccessText;
@property(readonly, nonatomic) _Bool hasText;
- (int)StringAsPredefined:(id)arg1;	// IMP=0x00100000000bfb1d
- (id)predefinedAsString:(int)arg1;	// IMP=0x00100000000bfacf
@property(nonatomic) _Bool hasPredefined;
@property(nonatomic) int predefined; // @synthesize predefined=_predefined;

@end

