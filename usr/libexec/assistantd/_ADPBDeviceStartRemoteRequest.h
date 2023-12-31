//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class AFRequestInfo, NSData, NSString;

@interface _ADPBDeviceStartRemoteRequest : PBRequest
{
    NSData *_handoffData;	// 8 = 0x8
    NSString *_handoffNotification;	// 16 = 0x10
    NSString *_handoffOriginDeviceName;	// 24 = 0x18
    NSString *_handoffUrlString;	// 32 = 0x20
    NSString *_text;	// 40 = 0x28
    _Bool _requiresUserInteraction;	// 48 = 0x30
    struct {
        unsigned int requiresUserInteraction:1;
    } _has;	// 52 = 0x34
}

+ (unsigned short)_ADPBDeviceRequestType;	// IMP=0x00100000000a6ab2
- (void).cxx_destruct;	// IMP=0x00100000001ba9a2
@property(retain, nonatomic) NSString *handoffOriginDeviceName; // @synthesize handoffOriginDeviceName=_handoffOriginDeviceName;
@property(retain, nonatomic) NSString *handoffNotification; // @synthesize handoffNotification=_handoffNotification;
@property(nonatomic) _Bool requiresUserInteraction; // @synthesize requiresUserInteraction=_requiresUserInteraction;
@property(retain, nonatomic) NSString *handoffUrlString; // @synthesize handoffUrlString=_handoffUrlString;
@property(retain, nonatomic) NSData *handoffData; // @synthesize handoffData=_handoffData;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001ba7f6
- (unsigned long long)hash;	// IMP=0x00100000001ba71f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001ba583
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001ba449
- (void)copyTo:(id)arg1;	// IMP=0x00100000001ba366
- (void)writeTo:(id)arg1;	// IMP=0x00100000001ba28d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001ba280
- (id)dictionaryRepresentation;	// IMP=0x00100000001b9e81
- (id)description;	// IMP=0x00100000001b9dd2
- (_Bool);	// IMP=0x00100000001b9dbd
@property(readonly, nonatomic) _Bool hasHandoffNotification;
@property(nonatomic) _Bool hasRequiresUserInteraction;
@property(readonly, nonatomic) _Bool hasHandoffUrlString;
@property(readonly, nonatomic) _Bool hasHandoffData;
@property(readonly, nonatomic) _Bool hasText;
- (void)_ad_performWithSharedDataRemote:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c4276
- (void)_ad_performWithCloudService:(id)arg1 fromPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000013345c
@property(copy, nonatomic, setter=_ad_setRequestInfo:) AFRequestInfo *_ad_requestInfo;

// Remaining properties
@property(readonly, nonatomic) _Bool hasHandoffOriginDeviceName;

@end

