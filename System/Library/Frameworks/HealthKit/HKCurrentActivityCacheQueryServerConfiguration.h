//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKQueryServerConfiguration.h"

@class NSDateComponents;

__attribute__((visibility("hidden")))
@interface HKCurrentActivityCacheQueryServerConfiguration : HKQueryServerConfiguration
{
    NSDateComponents *_statisticsIntervalComponents;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000006974d
- (void).cxx_destruct;	// IMP=0x00000000000698d7
@property(copy, nonatomic) NSDateComponents *statisticsIntervalComponents; // @synthesize statisticsIntervalComponents=_statisticsIntervalComponents;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000069818
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000069755
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000696e8

@end

