//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BiasEstimatorFeatures, BiasEstimatorOutputs;

__attribute__((visibility("hidden")))
@interface UWBSignalFeatures : NSObject
{
    BiasEstimatorFeatures *_inputFeatures;	// 8 = 0x8
    BiasEstimatorOutputs *_outputs;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000e16d
- (void).cxx_destruct;	// IMP=0x000000000000e81a
@property(copy, nonatomic) BiasEstimatorOutputs *outputs; // @synthesize outputs=_outputs;
@property(copy, nonatomic) BiasEstimatorFeatures *inputFeatures; // @synthesize inputFeatures=_inputFeatures;
- (id)orderedBiasEstimatorFeatutes;	// IMP=0x000000000000e72b
- (unsigned long long)hash;	// IMP=0x000000000000e6ec
- (id)description;	// IMP=0x000000000000e627
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000e4b9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000e37c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000e307
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000e2bf
- (id)initWithUWBSignalFeatures:(id)arg1;	// IMP=0x000000000000e175

@end
