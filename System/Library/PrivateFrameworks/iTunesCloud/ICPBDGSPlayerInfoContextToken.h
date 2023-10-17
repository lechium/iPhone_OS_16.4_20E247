//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface ICPBDGSPlayerInfoContextToken : PBCodable
{
    unsigned long long _sessionID;	// 8 = 0x8
    NSData *_token;	// 16 = 0x10
    struct {
        unsigned int sessionID:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000014d0cc
- (unsigned long long)hash;	// IMP=0x000000000014d07c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014cfbb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014cf22
- (void)writeTo:(id)arg1;	// IMP=0x000000000014cebd
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000014ceb0
- (id)dictionaryRepresentation;	// IMP=0x000000000014cdf0
- (id)description;	// IMP=0x000000000014cd41

@end
