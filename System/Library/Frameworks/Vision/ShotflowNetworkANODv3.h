//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ShotflowNetworkANODv3
{
}

+ (_Bool)inputBGR;	// IMP=0x008000000026ac39
+ (tuple_8dc74180)inputBiasRGB;	// IMP=0x008000000026ac24
+ (float)inputScale;	// IMP=0x008000000026ac16
+ (_Bool)hasPose;	// IMP=0x008000000026ac0e
+ (const void *)importantClasses;	// IMP=0x008000000026abe2
+ (unsigned long long)mumberPosClasses;	// IMP=0x008000000026abd7
+ (id)inputLayerName;	// IMP=0x008000000026abca
+ (id)modelName;	// IMP=0x008000000026abbd
- (id)processVImage:(struct vImage_Buffer)arg1 inputIsBGR:(_Bool)arg2;	// IMP=0x000000000026a756
- (int)setInputShape:(unsigned long long)arg1 height:(unsigned long long)arg2;	// IMP=0x000000000026a5b4
- (void)initializeBuffers;	// IMP=0x0000000000269c96
- (id)initWithModelPath:(id)arg1 espressoEngineID:(int)arg2 espressoDeviceID:(int)arg3 espressoStorageType:(int)arg4 threshold:(float)arg5;	// IMP=0x0000000000269bca

@end

