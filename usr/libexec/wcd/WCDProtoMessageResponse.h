//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface WCDProtoMessageResponse : PBCodable
{
    NSData *_clientData;	// 8 = 0x8
    unsigned int _errorCode;	// 16 = 0x10
    unsigned int _version;	// 20 = 0x14
    _Bool _dictionaryMessage;	// 24 = 0x18
    struct {
        unsigned int errorCode:1;
        unsigned int version:1;
        unsigned int dictionaryMessage:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000000002846e
@property(nonatomic) _Bool dictionaryMessage; // @synthesize dictionaryMessage=_dictionaryMessage;
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSData *clientData; // @synthesize clientData=_clientData;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000028376
- (unsigned long long)hash;	// IMP=0x00100000000282e3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000281c1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000280f1
- (void)copyTo:(id)arg1;	// IMP=0x001000000002804e
- (void)writeTo:(id)arg1;	// IMP=0x0010000000027fa1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000027f94
- (id)dictionaryRepresentation;	// IMP=0x0010000000027aad
- (id)description;	// IMP=0x00100000000279fe
@property(nonatomic) _Bool hasDictionaryMessage;
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasClientData;
@property(nonatomic) _Bool hasVersion;

@end
