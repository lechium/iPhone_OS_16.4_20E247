//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ICPBDGSFinishDelegationRequest : PBRequest
{
    NSMutableArray *_playerDelegateInfoTokens;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000dcb0a
- (unsigned long long)hash;	// IMP=0x00000000000dcaed
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000dca53
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000dc8b6
- (void)writeTo:(id)arg1;	// IMP=0x00000000000dc786
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000dc779
- (id)dictionaryRepresentation;	// IMP=0x00000000000dc546
- (id)description;	// IMP=0x00000000000dc497

@end

