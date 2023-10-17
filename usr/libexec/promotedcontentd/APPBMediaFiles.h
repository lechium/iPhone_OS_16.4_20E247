//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface APPBMediaFiles : PBCodable
{
    double _duration;	// 8 = 0x8
    NSMutableArray *_mediaAssets;	// 16 = 0x10
    struct {
        unsigned int duration:1;
    } _has;	// 24 = 0x18
}

+ (Class)mediaAssetsType;	// IMP=0x00200000000487ad
+ (id)options;	// IMP=0x0010000000048655
- (void).cxx_destruct;	// IMP=0x002000000004950e
@property(retain, nonatomic) NSMutableArray *mediaAssets; // @synthesize mediaAssets=_mediaAssets;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000049360
- (unsigned long long)hash;	// IMP=0x001000000004923d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000049172
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000048f81
- (void)copyTo:(id)arg1;	// IMP=0x0010000000048ea0
- (void)writeTo:(id)arg1;	// IMP=0x0010000000048d49
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000048d3c
- (id)dictionaryRepresentation;	// IMP=0x001000000004886d
- (id)description;	// IMP=0x00100000000487be
- (id)mediaAssetsAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000048790
- (unsigned long long)mediaAssetsCount;	// IMP=0x0010000000048773
- (void)addMediaAssets:(id)arg1;	// IMP=0x0010000000048709
- (void)clearMediaAssets;	// IMP=0x00100000000486ec
@property(nonatomic) _Bool hasDuration;

@end
