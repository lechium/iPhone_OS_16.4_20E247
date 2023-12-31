//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieFaceprintResult : PBCodable
{
    unsigned int _faceID;	// 8 = 0x8
    NSData *_faceprintBlob;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000001eac5c
- (void).cxx_destruct;	// IMP=0x00000000001aa92b
@property(retain, nonatomic) NSData *faceprintBlob; // @synthesize faceprintBlob=_faceprintBlob;
@property(nonatomic) unsigned int faceID; // @synthesize faceID=_faceID;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001aa8b5
- (unsigned long long)hash;	// IMP=0x00000000001aa87a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001aa7d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001aa74a
- (void)copyTo:(id)arg1;	// IMP=0x00000000001aa71a
- (void)writeTo:(id)arg1;	// IMP=0x00000000001aa6bb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001aa6ae
- (id)dictionaryRepresentation;	// IMP=0x00000000001aa3ec
- (id)description;	// IMP=0x00000000001aa33d
- (id)exportToLegacyDictionary;	// IMP=0x00000000001ead8e

@end

