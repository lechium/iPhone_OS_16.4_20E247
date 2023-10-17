//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPTokenRegistrationBody;

@interface CKDPTokenRegistrationRequest : PBRequest
{
    CKDPTokenRegistrationBody *_tokenRegistrationBody;	// 8 = 0x8
}

+ (id)options;	// IMP=0x001000000015f3b7
- (void).cxx_destruct;	// IMP=0x000000000015f93d
@property(retain, nonatomic) CKDPTokenRegistrationBody *tokenRegistrationBody; // @synthesize tokenRegistrationBody=_tokenRegistrationBody;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000015f8bb
- (unsigned long long)hash;	// IMP=0x000000000015f89e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015f804
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015f78c
- (void)copyTo:(id)arg1;	// IMP=0x000000000015f762
- (Class)responseClass;	// IMP=0x000000000015f751
- (unsigned int)requestTypeCode;	// IMP=0x000000000015f746
- (void)writeTo:(id)arg1;	// IMP=0x000000000015f722
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000015f715
- (id)dictionaryRepresentation;	// IMP=0x000000000015f4cb
- (id)description;	// IMP=0x000000000015f41c
@property(readonly, nonatomic) _Bool hasTokenRegistrationBody;

@end
