//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLColor, CRLStrokePattern;

@interface CRLMutableCalligraphyStroke
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x002000000027fe7a
- (void)setPatternPropertiesFromStroke:(id)arg1;	// IMP=0x001000000027fe68
- (void)setPropertiesFromStroke:(id)arg1;	// IMP=0x001000000027fe56
@property(copy, nonatomic) CRLStrokePattern *pattern;
@property(nonatomic) unsigned long long join;
@property(nonatomic) double miterLimit;
@property(nonatomic) unsigned long long cap;
@property(nonatomic) double actualWidth;
@property(nonatomic) double width;
@property(copy, nonatomic) CRLColor *color;

@end
