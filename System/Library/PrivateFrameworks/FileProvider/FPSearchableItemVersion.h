//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface FPSearchableItemVersion : PBCodable
{
    NSData *_contentVersion;	// 8 = 0x8
    NSData *_metadataVersion;	// 16 = 0x10
}

+ (id)versionFromString:(id)arg1;	// IMP=0x0010000000121ad2
+ (id)stringFromVersion:(id)arg1;	// IMP=0x00100000001219d4
- (void).cxx_destruct;	// IMP=0x000000000012389f
@property(retain, nonatomic) NSData *metadataVersion; // @synthesize metadataVersion=_metadataVersion;
@property(retain, nonatomic) NSData *contentVersion; // @synthesize contentVersion=_contentVersion;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001237f2
- (unsigned long long)hash;	// IMP=0x00000000001237a5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001236dd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012363f
- (void)copyTo:(id)arg1;	// IMP=0x00000000001235dc
- (void)writeTo:(id)arg1;	// IMP=0x000000000012357f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000123572
- (id)dictionaryRepresentation;	// IMP=0x000000000012335a
- (id)description;	// IMP=0x00000000001232ab
@property(readonly, nonatomic) _Bool hasMetadataVersion;
@property(readonly, nonatomic) _Bool hasContentVersion;

@end

