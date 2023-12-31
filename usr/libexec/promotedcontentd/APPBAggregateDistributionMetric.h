//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface APPBAggregateDistributionMetric : PBCodable
{
    float _average;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    int _count;	// 24 = 0x18
    NSString *_metric;	// 32 = 0x20
    float _standardDeviation;	// 40 = 0x28
    struct {
        unsigned int average:1;
        unsigned int count:1;
        unsigned int standardDeviation:1;
    } _has;	// 44 = 0x2c
}

+ (id)options;	// IMP=0x0020000000069fbb
- (void).cxx_destruct;	// IMP=0x002000000006ade4
@property(nonatomic) float standardDeviation; // @synthesize standardDeviation=_standardDeviation;
@property(nonatomic) float average; // @synthesize average=_average;
@property(nonatomic) int count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSString *metric; // @synthesize metric=_metric;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000006aca3
- (unsigned long long)hash;	// IMP=0x001000000006aa4f
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000006a90a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006a80c
- (void)copyTo:(id)arg1;	// IMP=0x001000000006a749
- (void)writeTo:(id)arg1;	// IMP=0x001000000006a67b
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000006a66e
- (id)dictionaryRepresentation;	// IMP=0x001000000006a1c1
- (id)description;	// IMP=0x001000000006a112
@property(nonatomic) _Bool hasStandardDeviation;
@property(nonatomic) _Bool hasAverage;
@property(nonatomic) _Bool hasCount;
@property(readonly, nonatomic) _Bool hasBundleID;
@property(readonly, nonatomic) _Bool hasMetric;

@end

