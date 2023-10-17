//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface AMPMusicArtistNewContentResponse : PBCodable
{
    NSMutableArray *_artistContents;	// 8 = 0x8
    NSData *_model;	// 16 = 0x10
    NSString *_recoId;	// 24 = 0x18
}

+ (Class)artistContentType;	// IMP=0x00200000000ce607
- (void).cxx_destruct;	// IMP=0x00200000000ce5c5
@property(retain, nonatomic) NSData *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *recoId; // @synthesize recoId=_recoId;
@property(retain, nonatomic) NSMutableArray *artistContents; // @synthesize artistContents=_artistContents;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000ce3bc
- (unsigned long long)hash;	// IMP=0x00100000000ce34f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000ce257
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000ce021
- (void)copyTo:(id)arg1;	// IMP=0x00100000000cdf1f
- (void)writeTo:(id)arg1;	// IMP=0x00100000000cdda2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000cdb9c
- (id)dictionaryRepresentation;	// IMP=0x00100000000cd911
- (id)description;	// IMP=0x00100000000cd862
@property(readonly, nonatomic) _Bool hasModel;
@property(readonly, nonatomic) _Bool hasRecoId;
- (id)artistContentAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000cd81b
- (unsigned long long)artistContentsCount;	// IMP=0x00000000000cd7fe
- (void)addArtistContent:(id)arg1;	// IMP=0x00100000000cd794
- (void)clearArtistContents;	// IMP=0x00100000000cd777

@end
