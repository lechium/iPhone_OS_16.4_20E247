//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface APPBTransparencyDetails : PBCodable
{
    NSString *_targetingExpressionId;	// 8 = 0x8
    NSString *_transparencyDetailsUnavailableMessage;	// 16 = 0x10
    NSString *_transparencyRendererPayload;	// 24 = 0x18
    NSString *_transparencyRendererURL;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000a605e
@property(retain, nonatomic) NSString *targetingExpressionId; // @synthesize targetingExpressionId=_targetingExpressionId;
@property(retain, nonatomic) NSString *transparencyRendererURL; // @synthesize transparencyRendererURL=_transparencyRendererURL;
@property(retain, nonatomic) NSString *transparencyRendererPayload; // @synthesize transparencyRendererPayload=_transparencyRendererPayload;
@property(retain, nonatomic) NSString *transparencyDetailsUnavailableMessage; // @synthesize transparencyDetailsUnavailableMessage=_transparencyDetailsUnavailableMessage;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000a5f27
- (unsigned long long)hash;	// IMP=0x00100000000a5ea3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a5d77
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000a5c8d
- (void)copyTo:(id)arg1;	// IMP=0x00100000000a5bea
- (void)writeTo:(id)arg1;	// IMP=0x00100000000a5b53
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000a5b46
- (id)dictionaryRepresentation;	// IMP=0x00100000000a58ed
- (id)description;	// IMP=0x00100000000a583e
@property(readonly, nonatomic) _Bool hasTargetingExpressionId;
@property(readonly, nonatomic) _Bool hasTransparencyRendererURL;
@property(readonly, nonatomic) _Bool hasTransparencyRendererPayload;
@property(readonly, nonatomic) _Bool hasTransparencyDetailsUnavailableMessage;

@end

