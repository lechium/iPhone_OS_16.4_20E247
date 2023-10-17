//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDidReceiveResponseReply : PBCodable
{
    int _disposition;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
    CDStruct_cc6d6311 _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000040bdc
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000040b3a
- (unsigned long long)hash;	// IMP=0x0010000000040ae7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000040a26
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000004098e
- (void)copyTo:(id)arg1;	// IMP=0x001000000004092b
- (void)writeTo:(id)arg1;	// IMP=0x00100000000408c7
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000004067d
- (id)dictionaryRepresentation;	// IMP=0x001000000004057d
- (MISSING_TYPE *)description;	// IMP=0x00100000000404ce
- (int)StringAsDisposition:(id)arg1;	// IMP=0x001000000004043c
- (id)dispositionAsString:(int)arg1;	// IMP=0x00100000000403f3
@property(nonatomic) _Bool hasDisposition;
@property(nonatomic) int disposition; // @synthesize disposition=_disposition;
@property(readonly, nonatomic) _Bool hasTask;

@end
