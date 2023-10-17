//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface APPBSegmentUpdateResponse : PBCodable
{
    double _maxSegmentUpdateIntervalInSeconds;	// 8 = 0x8
    double _segmentRefreshIntervalInSeconds;	// 16 = 0x10
    NSString *_idDebug;	// 24 = 0x18
    struct {
        unsigned int maxSegmentUpdateIntervalInSeconds:1;
        unsigned int segmentRefreshIntervalInSeconds:1;
    } _has;	// 32 = 0x20
}

+ (id)options;	// IMP=0x002000000008ce36
- (void).cxx_destruct;	// IMP=0x002000000008d8fa
@property(nonatomic) double maxSegmentUpdateIntervalInSeconds; // @synthesize maxSegmentUpdateIntervalInSeconds=_maxSegmentUpdateIntervalInSeconds;
@property(nonatomic) double segmentRefreshIntervalInSeconds; // @synthesize segmentRefreshIntervalInSeconds=_segmentRefreshIntervalInSeconds;
@property(retain, nonatomic) NSString *idDebug; // @synthesize idDebug=_idDebug;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000008d829
- (unsigned long long)hash;	// IMP=0x001000000008d607
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000008d514
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000008d457
- (void)copyTo:(id)arg1;	// IMP=0x001000000008d3cf
- (void)writeTo:(id)arg1;	// IMP=0x001000000008d33d
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000008d330
- (id)dictionaryRepresentation;	// IMP=0x001000000008cfdc
- (id)description;	// IMP=0x001000000008cf2d
@property(nonatomic) _Bool hasMaxSegmentUpdateIntervalInSeconds;
@property(nonatomic) _Bool hasSegmentRefreshIntervalInSeconds;
@property(readonly, nonatomic) _Bool hasIdDebug;

@end
