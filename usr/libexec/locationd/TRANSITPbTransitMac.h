//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface TRANSITPbTransitMac : PBCodable
{
    unsigned long long _mac;	// 8 = 0x8
    struct {
        unsigned int mac:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned long long mac; // @synthesize mac=_mac;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000006c8926
- (unsigned long long)hash;	// IMP=0x00100000006c88fe
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000006c889f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000006c883b
- (void)copyTo:(id)arg1;	// IMP=0x00100000006c8815
- (void)writeTo:(id)arg1;	// IMP=0x00100000006c87e9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000006c87dc
- (id)dictionaryRepresentation;	// IMP=0x00100000006c858b
- (id)description;	// IMP=0x00100000006c8514
@property(nonatomic) _Bool hasMac;

@end
