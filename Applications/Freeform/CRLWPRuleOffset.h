//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CRLWPRuleOffset : NSObject
{
    double _dX;	// 8 = 0x8
    double _dY;	// 16 = 0x10
}

+ (id)ruleOffsetWithDX:(double)arg1 dY:(double)arg2;	// IMP=0x0040000000532a4e
+ (id)ruleOffset;	// IMP=0x0010000000532a34
@property(readonly, nonatomic) double dY; // @synthesize dY=_dY;
@property(readonly, nonatomic) double dX; // @synthesize dX=_dX;
- (id)description;	// IMP=0x0010000000532c3b
- (struct CGSize)sizeValue;	// IMP=0x0010000000532c2b
- (struct CGPoint)pointValue;	// IMP=0x0010000000532c1b
- (unsigned long long)hash;	// IMP=0x0010000000532c13
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000532b35
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000532aff
- (id)init;	// IMP=0x0010000000532ae6
- (id)initWithDX:(double)arg1 dY:(double)arg2;	// IMP=0x0010000000532a94

@end
