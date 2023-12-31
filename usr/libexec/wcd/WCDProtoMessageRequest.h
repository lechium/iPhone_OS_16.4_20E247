//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData;

@interface WCDProtoMessageRequest : PBRequest
{
    NSData *_clientData;	// 8 = 0x8
    NSData *_coreLocationData;	// 16 = 0x10
    unsigned int _version;	// 24 = 0x18
    _Bool _dictionaryMessage;	// 28 = 0x1c
    _Bool _expectsResponse;	// 29 = 0x1d
    _Bool _isInUse;	// 30 = 0x1e
    struct {
        unsigned int version:1;
        unsigned int dictionaryMessage:1;
        unsigned int expectsResponse:1;
        unsigned int isInUse:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000278df
@property(retain, nonatomic) NSData *coreLocationData; // @synthesize coreLocationData=_coreLocationData;
@property(nonatomic) _Bool isInUse; // @synthesize isInUse=_isInUse;
@property(nonatomic) _Bool dictionaryMessage; // @synthesize dictionaryMessage=_dictionaryMessage;
@property(nonatomic) _Bool expectsResponse; // @synthesize expectsResponse=_expectsResponse;
@property(retain, nonatomic) NSData *clientData; // @synthesize clientData=_clientData;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000027777
- (unsigned long long)hash;	// IMP=0x0010000000027695
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000027502
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000273ee
- (void)copyTo:(id)arg1;	// IMP=0x0010000000027310
- (void)writeTo:(id)arg1;	// IMP=0x0010000000027225
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000027218
- (id)dictionaryRepresentation;	// IMP=0x0010000000026c11
- (id)description;	// IMP=0x0010000000026b62
@property(readonly, nonatomic) _Bool hasCoreLocationData;
@property(nonatomic) _Bool hasIsInUse;
@property(nonatomic) _Bool hasDictionaryMessage;
@property(nonatomic) _Bool hasExpectsResponse;
@property(readonly, nonatomic) _Bool hasClientData;
@property(nonatomic) _Bool hasVersion;

@end

