//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSUnitConverter.h"

__attribute__((visibility("hidden")))
@interface NSUnitConverterReciprocal : NSUnitConverter
{
    double _reciprocalValue;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000043e028
@property(readonly) double reciprocalValue; // @synthesize reciprocalValue=_reciprocalValue;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000043dfaf
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000043df1e
- (id)description;	// IMP=0x000000000043de88
- (unsigned long long)hash;	// IMP=0x000000000043dd9d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000043dd58
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000043dd4d
- (double)valueFromBaseUnitValue:(double)arg1;	// IMP=0x000000000043dd33
- (double)baseUnitValueFromValue:(double)arg1;	// IMP=0x000000000043dd19
- (id)initWithReciprocalValue:(double)arg1;	// IMP=0x000000000043dcac

@end

