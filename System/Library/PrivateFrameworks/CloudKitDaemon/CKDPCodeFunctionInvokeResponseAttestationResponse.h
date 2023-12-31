//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPCodeFunctionInvokeResponseAttestationResponse : PBCodable
{
    NSMutableArray *_attestations;	// 8 = 0x8
}

+ (Class)attestationsType;	// IMP=0x00100000001f15e6
- (void).cxx_destruct;	// IMP=0x00000000001f2072
@property(retain, nonatomic) NSMutableArray *attestations; // @synthesize attestations=_attestations;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001f1f18
- (unsigned long long)hash;	// IMP=0x00000000001f1efb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001f1e61
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f1c9e
- (void)copyTo:(id)arg1;	// IMP=0x00000000001f1bdf
- (void)writeTo:(id)arg1;	// IMP=0x00000000001f1aaf
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001f1aa2
- (id)dictionaryRepresentation;	// IMP=0x00000000001f16a6
- (id)description;	// IMP=0x00000000001f15f7
- (id)attestationsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001f15c9
- (unsigned long long)attestationsCount;	// IMP=0x00000000001f15ac
- (void)addAttestations:(id)arg1;	// IMP=0x00000000001f1542
- (void)clearAttestations;	// IMP=0x00000000001f1525

@end

