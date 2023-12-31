//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKCDPCodeServiceRequestAuthInformation : PBCodable
{
    NSString *_accountServiceSignedToken;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001f38a9
@property(retain, nonatomic) NSString *accountServiceSignedToken; // @synthesize accountServiceSignedToken=_accountServiceSignedToken;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001f3860
- (unsigned long long)hash;	// IMP=0x00000000001f3843
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001f37a9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f3731
- (void)copyTo:(id)arg1;	// IMP=0x00000000001f3707
- (void)writeTo:(id)arg1;	// IMP=0x00000000001f36e3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001f36d6
- (id)dictionaryRepresentation;	// IMP=0x00000000001f3509
- (id)description;	// IMP=0x00000000001f345a
@property(readonly, nonatomic) _Bool hasAccountServiceSignedToken;

@end

