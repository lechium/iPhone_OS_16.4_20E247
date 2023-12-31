//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadata : PBCodable
{
    NSMutableArray *_cryptoSessions;	// 8 = 0x8
}

+ (Class)cryptoSessionsType;	// IMP=0x001000000016ba11
- (void).cxx_destruct;	// IMP=0x000000000016c49d
@property(retain, nonatomic) NSMutableArray *cryptoSessions; // @synthesize cryptoSessions=_cryptoSessions;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000016c343
- (unsigned long long)hash;	// IMP=0x000000000016c326
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016c28c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016c0c9
- (void)copyTo:(id)arg1;	// IMP=0x000000000016c00a
- (void)writeTo:(id)arg1;	// IMP=0x000000000016beda
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000016becd
- (id)dictionaryRepresentation;	// IMP=0x000000000016bad1
- (id)description;	// IMP=0x000000000016ba22
- (id)cryptoSessionsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000016b9f4
- (unsigned long long)cryptoSessionsCount;	// IMP=0x000000000016b9d7
- (void)addCryptoSessions:(id)arg1;	// IMP=0x000000000016b96d
- (void)clearCryptoSessions;	// IMP=0x000000000016b950

@end

