//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface CMMotionTimeRange
{
    NSDate *fStartDate;	// 16 = 0x10
    NSDate *fEndDate;	// 24 = 0x18
}

+ (CDStruct_2c43369c)CLMotionTimeRangeFromCMMotionTimeRange:(id)arg1;	// IMP=0x0040000000a2b5cd
+ (id)CMMotionTimeRangeFromCLMotionTimeRange:(CDStruct_2c43369c)arg1;	// IMP=0x0010000000a2b588
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000a2b3bf
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
- (id)description;	// IMP=0x0010000000a2b4ea
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000a2b48b
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000a2b3c7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000a2b337
- (void)dealloc;	// IMP=0x0010000000a2b2df
- (id)initWithStartDate:(double)arg1 endDate:(double)arg2;	// IMP=0x0010000000a2b239

@end
