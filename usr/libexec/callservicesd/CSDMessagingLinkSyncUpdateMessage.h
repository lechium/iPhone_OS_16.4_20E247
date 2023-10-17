//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CSDMessagingLinkSyncUpdateMessage : PBCodable
{
    NSMutableArray *_links;	// 8 = 0x8
    unsigned int _version;	// 16 = 0x10
    CDStruct_f20694ce _has;	// 20 = 0x14
}

+ (Class)linkType;	// IMP=0x00200000000cadfb
- (void).cxx_destruct;	// IMP=0x00200000000cba9f
@property(retain, nonatomic) NSMutableArray *links; // @synthesize links=_links;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000cb8f7
- (unsigned long long)hash;	// IMP=0x00100000000cb8ab
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000cb7e6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000cb5f9
- (void)copyTo:(id)arg1;	// IMP=0x00100000000cb51c
- (void)writeTo:(id)arg1;	// IMP=0x00100000000cb3c7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000cb3ba
- (id)dictionaryRepresentation;	// IMP=0x00100000000caebb
- (id)description;	// IMP=0x00100000000cae0c
- (id)linkAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000cadde
- (unsigned long long)linksCount;	// IMP=0x00100000000cadc1
- (void)addLink:(id)arg1;	// IMP=0x00100000000cad57
- (void)clearLinks;	// IMP=0x00100000000cad3a
@property(nonatomic) _Bool hasVersion;

@end
