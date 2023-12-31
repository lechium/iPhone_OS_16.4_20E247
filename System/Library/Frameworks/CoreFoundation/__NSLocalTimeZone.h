//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSTimeZone.h"

__attribute__((visibility("hidden")))
@interface __NSLocalTimeZone : NSTimeZone
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0080000000147a42
- (id)replacementObjectForPortCoder:(id)arg1;	// IMP=0x0000000000147ab2
- (Class)classForCoder;	// IMP=0x0000000000147aa6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000147aa5
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000147a45
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000147a3c
- (id)description;	// IMP=0x00000000001479e6
- (id)localizedName:(long long)arg1 locale:(id)arg2;	// IMP=0x000000000014799f
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;	// IMP=0x0000000000147967
- (double)daylightSavingTimeOffsetForDate:(id)arg1;	// IMP=0x000000000014792f
- (_Bool)isDaylightSavingTimeForDate:(id)arg1;	// IMP=0x00000000001478f7
- (id)abbreviationForDate:(id)arg1;	// IMP=0x00000000001478bf
- (long long)secondsFromGMTForDate:(id)arg1;	// IMP=0x0000000000147887
- (id)data;	// IMP=0x0000000000147855
- (id)name;	// IMP=0x0000000000147823

@end

