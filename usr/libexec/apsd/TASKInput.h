//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class TASKEdgeDnsInput;

@interface TASKInput : PBCodable
{
    TASKEdgeDnsInput *_edgeDNS;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000003fb72
@property(retain, nonatomic) TASKEdgeDnsInput *edgeDNS; // @synthesize edgeDNS=_edgeDNS;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000003faf0
- (unsigned long long)hash;	// IMP=0x001000000003fad3
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003fa39
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003f9c1
- (void)copyTo:(id)arg1;	// IMP=0x001000000003f997
- (void)writeTo:(id)arg1;	// IMP=0x001000000003f973
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000003f966
- (id)dictionaryRepresentation;	// IMP=0x001000000003f71a
- (id)description;	// IMP=0x001000000003f66b
@property(readonly, nonatomic) _Bool hasEdgeDNS;

@end

