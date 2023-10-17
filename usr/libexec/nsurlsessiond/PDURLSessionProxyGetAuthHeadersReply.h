//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSDictionary, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyGetAuthHeadersReply : PBCodable
{
    NSData *_headerData;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
    _Bool _continueLoad;	// 24 = 0x18
    struct {
        unsigned int continueLoad:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0020000000032fb0
@property(nonatomic) _Bool continueLoad; // @synthesize continueLoad=_continueLoad;
@property(retain, nonatomic) NSData *headerData; // @synthesize headerData=_headerData;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000032eb9
- (unsigned long long)hash;	// IMP=0x0010000000032e44
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000032d43
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000032c85
- (void)copyTo:(id)arg1;	// IMP=0x0010000000032c02
- (void)writeTo:(id)arg1;	// IMP=0x0010000000032b80
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000328ea
- (id)dictionaryRepresentation;	// IMP=0x00100000000327df
- (id)description;	// IMP=0x0010000000032730
@property(nonatomic) _Bool hasContinueLoad;
@property(readonly, nonatomic) _Bool hasHeaderData;
@property(readonly, nonatomic) _Bool hasTask;
@property(retain, setter=_setActualAuthHeaders:) NSDictionary *_actualAuthHeaders;

@end
