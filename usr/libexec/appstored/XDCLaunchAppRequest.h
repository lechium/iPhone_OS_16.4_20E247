//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface XDCLaunchAppRequest : PBRequest
{
    NSString *_bundleID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000f0244
- (unsigned long long)hash;	// IMP=0x00100000000f0227
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000f018d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000f0115
- (void)writeTo:(id)arg1;	// IMP=0x00100000000f00f8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000eff82
- (id)dictionaryRepresentation;	// IMP=0x00100000000eff26
- (id)description;	// IMP=0x00100000000efe77

@end

