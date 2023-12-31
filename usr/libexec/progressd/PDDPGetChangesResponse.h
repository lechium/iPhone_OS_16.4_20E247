//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface PDDPGetChangesResponse : PBCodable
{
    NSMutableArray *_payloads;	// 8 = 0x8
}

+ (Class)payloadType;	// IMP=0x00200000000a3ab1
- (void).cxx_destruct;	// IMP=0x00200000000a4535
@property(retain, nonatomic) NSMutableArray *payloads; // @synthesize payloads=_payloads;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000a43db
- (unsigned long long)hash;	// IMP=0x00100000000a43be
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a4324
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000a4161
- (void)copyTo:(id)arg1;	// IMP=0x00100000000a40a2
- (void)writeTo:(id)arg1;	// IMP=0x00100000000a3f72
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000a3da4
- (id)dictionaryRepresentation;	// IMP=0x00100000000a3b71
- (id);	// IMP=0x00100000000a3ac2
- (id)payloadAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000a3a94
- (unsigned long long)payloadsCount;	// IMP=0x00100000000a3a77
- (void)addPayload:(id)arg1;	// IMP=0x00100000000a3a0d
- (void)clearPayloads;	// IMP=0x00100000000a39f0

@end

