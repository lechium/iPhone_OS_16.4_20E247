//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSUDuration : NSObject
{
    double mTimeInterval;	// 8 = 0x8
}

+ (id)durationWithTimeInterval:(double)arg1;	// IMP=0x00100000002518e4
- (unsigned long long)hash;	// IMP=0x00000000002519e4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000025199f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000025196e
- (double)timeInterval;	// IMP=0x0000000000251963
- (id)initWithTimeInterval:(double)arg1;	// IMP=0x0000000000251920

@end
