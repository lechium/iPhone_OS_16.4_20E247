//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSNumber.h>

@interface NSNumber (CARenderValue)
- (unsigned long long)CA_copyNumericValue:(double *)arg1;	// IMP=0x0060000000053b12
- (unsigned long long)CA_numericValueCount;	// IMP=0x0060000000053b07
- (struct Object *)CA_copyRenderValue;	// IMP=0x0060000000053ab7
- (double)CA_distanceToValue:(id)arg1;	// IMP=0x006000000023fd5c
- (id)CA_roundToIntegerFromValue:(id)arg1;	// IMP=0x006000000023fcf1
- (id)CA_interpolateValues:(id)arg1:(id)arg2:(id)arg3 interpolator:(const struct ValueInterpolator *)arg4;	// IMP=0x006000000023fbb8
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;	// IMP=0x006000000023fb29
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;	// IMP=0x006000000023fac5
- (void)encodeWithCAMLWriter:(id)arg1;	// IMP=0x0060000000298b3d
- (id)CAMLType;	// IMP=0x0060000000298add
@end
