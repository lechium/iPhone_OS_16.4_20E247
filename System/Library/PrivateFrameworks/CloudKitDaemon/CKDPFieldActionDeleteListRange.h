//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPListRange;

@interface CKDPFieldActionDeleteListRange : PBCodable
{
    CKDPListRange *_range;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001ef0ea
@property(retain, nonatomic) CKDPListRange *range; // @synthesize range=_range;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001ef068
- (unsigned long long)hash;	// IMP=0x00000000001ef04b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001eefb1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001eef39
- (void)copyTo:(id)arg1;	// IMP=0x00000000001eef0f
- (void)writeTo:(id)arg1;	// IMP=0x00000000001eeeeb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001eeede
- (id)dictionaryRepresentation;	// IMP=0x00000000001eec94
- (id)description;	// IMP=0x00000000001eebe5
@property(readonly, nonatomic) _Bool hasRange;

@end

