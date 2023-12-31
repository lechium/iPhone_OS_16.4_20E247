//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CIEnhancementHistogram : NSObject
{
    double hist[256];	// 8 = 0x8
}

+ (id)histogramFromDoubleData:(const double *)arg1;	// IMP=0x00600000001c8c6c
+ (id)histogramFromFloatData:(const float *)arg1;	// IMP=0x00600000001c8c2b
+ (id)histogramFromData:(const double *)arg1;	// IMP=0x00600000001c8be9
- (const double *)values;	// IMP=0x00000000001c8cae

@end

