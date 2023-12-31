//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPRecordIdentifier, NSMutableArray, NSString;

@interface CKDPRecordDeleteRequest : PBRequest
{
    NSString *_etag;	// 8 = 0x8
    NSMutableArray *_pluginFields;	// 16 = 0x10
    NSMutableArray *_publicKeys;	// 24 = 0x18
    CKDPRecordIdentifier *_recordIdentifier;	// 32 = 0x20
    _Bool _participantKeyLost;	// 40 = 0x28
    struct {
        unsigned int participantKeyLost:1;
    } _has;	// 44 = 0x2c
}

+ (Class)publicKeysType;	// IMP=0x0010000000185256
+ (Class)pluginFieldsType;	// IMP=0x001000000018513f
+ (id)options;	// IMP=0x0010000000185004
- (void).cxx_destruct;	// IMP=0x00000000001866ac
@property(retain, nonatomic) NSMutableArray *publicKeys; // @synthesize publicKeys=_publicKeys;
@property(nonatomic) _Bool participantKeyLost; // @synthesize participantKeyLost=_participantKeyLost;
@property(retain, nonatomic) NSMutableArray *pluginFields; // @synthesize pluginFields=_pluginFields;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000018634a
- (unsigned long long)hash;	// IMP=0x000000000018629c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000186138
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000185dd9
- (void)copyTo:(id)arg1;	// IMP=0x0000000000185c27
- (Class)responseClass;	// IMP=0x0000000000185c16
- (unsigned int)requestTypeCode;	// IMP=0x0000000000185c0b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000185995
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000185988
- (id)dictionaryRepresentation;	// IMP=0x0000000000185316
- (id)description;	// IMP=0x0000000000185267
- (id)publicKeysAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000185239
- (unsigned long long)publicKeysCount;	// IMP=0x000000000018521c
- (void)addPublicKeys:(id)arg1;	// IMP=0x00000000001851b2
- (void)clearPublicKeys;	// IMP=0x0000000000185195
@property(nonatomic) _Bool hasParticipantKeyLost;
- (id)pluginFieldsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000185122
- (unsigned long long)pluginFieldsCount;	// IMP=0x0000000000185105
- (void)addPluginFields:(id)arg1;	// IMP=0x000000000018509b
- (void)clearPluginFields;	// IMP=0x000000000018507e
@property(readonly, nonatomic) _Bool hasEtag;
@property(readonly, nonatomic) _Bool hasRecordIdentifier;

@end

