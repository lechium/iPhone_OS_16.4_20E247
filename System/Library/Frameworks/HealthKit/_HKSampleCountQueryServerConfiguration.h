//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKQueryServerConfiguration.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _HKSampleCountQueryServerConfiguration : HKQueryServerConfiguration
{
    NSArray *_queryDescriptors;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000224a18
- (void).cxx_destruct;	// IMP=0x0000000000224c00
@property(copy, nonatomic) NSArray *queryDescriptors; // @synthesize queryDescriptors=_queryDescriptors;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000224b61
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000224a20
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002249c2

@end

