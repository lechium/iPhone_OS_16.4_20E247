//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CMWalkingSteadinessClassificationData : NSObject
{
    double _lowerBound;	// 8 = 0x8
    double _upperBound;	// 16 = 0x10
    long long _classificationType;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000125f38
@property(readonly, nonatomic) long long classificationType; // @synthesize classificationType=_classificationType;
@property(readonly, nonatomic) double upperBound; // @synthesize upperBound=_upperBound;
@property(readonly, nonatomic) double lowerBound; // @synthesize lowerBound=_lowerBound;
- (id)description;	// IMP=0x0000000000126046
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000125fdb
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000125f40
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000125ee5
- (void)dealloc;	// IMP=0x0000000000125eb6
- (id)initWithLowerBound:(double)arg1 upperBound:(double)arg2 classificationType:(long long)arg3;	// IMP=0x0000000000125e5b

@end
