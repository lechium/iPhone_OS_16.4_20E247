//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLStepDistanceEstimator : NSObject
{
    struct CLExtendedStepCountEntry _lastEntry;	// 8 = 0x8
    double _totalCalibratedDistance;	// 296 = 0x128
    _Bool _supportsFirstStepTime;	// 304 = 0x130
}

- (struct CLExtendedStepCountEntry)updateEntryDistanceAndPace:(struct CLStepCountEntry *)arg1;	// IMP=0x00200000005d3e32
- (double)computeWalkRunSigma:(double)arg1;	// IMP=0x00100000005d3de8
- (id)init;	// IMP=0x00100000005d3d7d

@end

