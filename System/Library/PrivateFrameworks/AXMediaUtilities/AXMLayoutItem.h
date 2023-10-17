//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AXMLayoutItem : NSObject
{
}

+ (struct CGRect)normalizedBoundingFrameForItem:(id)arg1;	// IMP=0x006000000003eaf7
+ (struct CGRect)normalizedBoundingFrameForItems:(id)arg1;	// IMP=0x006000000003e8e4
+ (struct CGRect)boundingFrameForItems:(id)arg1;	// IMP=0x006000000003e6d1
- (struct CGRect)_rectValueForMetric:(long long)arg1;	// IMP=0x000000000003e650
- (double)_floatValueForMetric:(long long)arg1;	// IMP=0x000000000003e59a
- (long long)_metricTypeForMetric:(long long)arg1;	// IMP=0x000000000003e58b
- (_Bool)metric:(long long)arg1 inProximityOfMetric:(long long)arg2 item:(id)arg3 threshold:(double)arg4;	// IMP=0x000000000003e39d
@property(readonly, nonatomic) double right;
@property(readonly, nonatomic) double left;
@property(readonly, nonatomic) double width;
@property(readonly, nonatomic) double bottom;
@property(readonly, nonatomic) double top;
@property(readonly, nonatomic) double height;
- (id)description;	// IMP=0x000000000003e178

// Remaining properties
@property(readonly, nonatomic) struct CGRect frame; // @dynamic frame;
@property(readonly, nonatomic) struct CGRect normalizedFrame; // @dynamic normalizedFrame;

@end
