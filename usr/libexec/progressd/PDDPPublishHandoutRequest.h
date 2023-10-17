//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray;

@interface PDDPPublishHandoutRequest : PBRequest
{
    NSMutableArray *_payloads;	// 8 = 0x8
}

+ (Class)payloadType;	// IMP=0x002000000007596f
- (void).cxx_destruct;	// IMP=0x002000000007640f
@property(retain, nonatomic) NSMutableArray *payloads; // @synthesize payloads=_payloads;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000762b5
- (unsigned long long)hash;	// IMP=0x0010000000076298
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000761fe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000007603b
- (void)copyTo:(id)arg1;	// IMP=0x0010000000075f7c
- (Class)responseClass;	// IMP=0x0010000000075f6b
- (unsigned int)requestTypeCode;	// IMP=0x0010000000075f60
- (void)writeTo:(id)arg1;	// IMP=0x0010000000075e30
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000075c62
- (id)dictionaryRepresentation;	// IMP=0x0010000000075a2f
- (id)description;	// IMP=0x0010000000075980
- (id)payloadAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000075952
- (unsigned long long)payloadsCount;	// IMP=0x0010000000075935
- (void)addPayload:(id)arg1;	// IMP=0x00100000000758cb
- (void)clearPayloads;	// IMP=0x00100000000758ae

@end
