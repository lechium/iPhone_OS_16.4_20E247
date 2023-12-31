//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface GEOComposedRouteCellularCoverage : NSObject
{
    NSData *_offsetsData;	// 8 = 0x8
    NSData *_coverageData;	// 16 = 0x10
    unsigned int *_offsets;	// 24 = 0x18
    int *_coverage;	// 32 = 0x20
    unsigned long long _coverageCount;	// 40 = 0x28
    double _routeLength;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000036982a
- (void).cxx_destruct;	// IMP=0x0000000000369e08
- (void)enumerateCoverageRangesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000369d59
- (int)cellularCoverageAtOffset:(double)arg1;	// IMP=0x0000000000369c7b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000369bf4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000369a91
- (id)initWithOffsets:(id)arg1 coverage:(id)arg2 routeLength:(double)arg3;	// IMP=0x000000000036985c
- (id)init;	// IMP=0x0000000000369832

@end

