//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface PDDPPublishSurveyAnswersResponse : PBCodable
{
    NSMutableArray *_payloads;	// 8 = 0x8
}

+ (Class)payloadType;	// IMP=0x002000000017a9ce
- (void).cxx_destruct;	// IMP=0x002000000017b452
@property(retain, nonatomic) NSMutableArray *payloads; // @synthesize payloads=_payloads;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000017b2f8
- (unsigned long long)hash;	// IMP=0x001000000017b2db
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000017b241
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000017b07e
- (void)copyTo:(id)arg1;	// IMP=0x001000000017afbf
- (void)writeTo:(id)arg1;	// IMP=0x001000000017ae8f
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000017acc1
- (id)dictionaryRepresentation;	// IMP=0x001000000017aa8e
- (id)description;	// IMP=0x001000000017a9df
- (id)payloadAtIndex:(unsigned long long)arg1;	// IMP=0x001000000017a9b1
- (unsigned long long)payloadsCount;	// IMP=0x001000000017a994
- (void)addPayload:(id)arg1;	// IMP=0x001000000017a92a
- (void)clearPayloads;	// IMP=0x001000000017a90d

@end

