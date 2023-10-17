//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableDictionary;

@interface CLFallModelSelector : NSObject
{
    NSMutableDictionary *fSelectionFeatures;	// 8 = 0x8
    MISSING_TYPE *fTripFallModel;	// 16 = 0x10
    struct FallModel fSlipFallModel;	// 812 = 0x32c
    struct FallModel fOtherFallModel;	// 1608 = 0x648
    struct FallThresholds fThresholds;	// 2404 = 0x964
}

- (id).cxx_construct;	// IMP=0x002000000016e300
- (_Bool)fillFallThresholds:(struct FallThresholds *)arg1;	// IMP=0x001000000016e2d2
- (_Bool)fillOtherFallModel:(struct FallModel *)arg1;	// IMP=0x001000000016e0a3
- (_Bool)fillSlipFallModel:(struct FallModel *)arg1;	// IMP=0x001000000016de74
- (_Bool)fillTripFallModel:(struct FallModel *)arg1;	// IMP=0x001000000016dc5d
- (_Bool)selectModels;	// IMP=0x001000000016beb2
- (_Bool)setSelectionFeatureValue:(id)arg1 value:(id)arg2;	// IMP=0x001000000016be90
- (void)dealloc;	// IMP=0x001000000016be55
- (id)init;	// IMP=0x001000000016be0c

@end
