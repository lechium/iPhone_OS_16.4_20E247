//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GKBlendNoiseModifier
{
    double _lowerBound;	// 16 = 0x10
    double _upperBound;	// 24 = 0x18
    double _blendDistance;	// 32 = 0x20
}

- (id)cloneModule;	// IMP=0x000000000003c17f
- (double)valueAt: /* Error: Ran out of types for this method. */;	// IMP=0x000000000003bfd7
- (int)requiredInputModuleCount;	// IMP=0x000000000003bfcc
- (id)initWithSelectionRangeLowerBound:(double)arg1 selectionRangeUpperBound:(double)arg2 selectionBoundaryBlendDistance:(double)arg3;	// IMP=0x000000000003bf51
- (id)initWithInputModuleCount:(unsigned long long)arg1;	// IMP=0x000000000003bf30
- (id)init;	// IMP=0x000000000003bf0f

@end

