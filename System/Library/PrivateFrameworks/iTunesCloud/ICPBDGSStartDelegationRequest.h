//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ICPBDGSStartDelegationRequest : PBRequest
{
    NSMutableArray *_playerInfoContextRequestTokens;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000ce180
- (unsigned long long)hash;	// IMP=0x00000000000ce163
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ce0c9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cdf2c
- (void)writeTo:(id)arg1;	// IMP=0x00000000000cddfc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000cddef
- (id)dictionaryRepresentation;	// IMP=0x00000000000cdbbc
- (id)description;	// IMP=0x00000000000cdb0d

@end

