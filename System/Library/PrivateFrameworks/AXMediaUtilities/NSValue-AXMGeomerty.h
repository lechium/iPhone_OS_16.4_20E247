//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

@interface NSValue (AXMGeomerty)
+ (id)axmValueWithCGAffineTransform:(struct CGAffineTransform)arg1;	// IMP=0x00200000000b7797
+ (id)axmValueWithCGRect:(struct CGRect)arg1;	// IMP=0x00200000000b7763
+ (id)axmValueWithCGSize:(struct CGSize)arg1;	// IMP=0x00200000000b771e
+ (id)axmValueWithCGVector:(struct CGVector)arg1;	// IMP=0x00200000000b76d9
+ (id)axmValueWithCGPoint:(struct CGPoint)arg1;	// IMP=0x00200000000b7694
@property(readonly, nonatomic) struct CGAffineTransform AXMAffineTransformValue;
@property(readonly, nonatomic) struct CGRect AXMRectValue;
@property(readonly, nonatomic) struct CGSize AXMSizeValue;
@property(readonly, nonatomic) struct CGVector AXMVectorValue;
@property(readonly, nonatomic) struct CGPoint AXMPointValue;
@end
