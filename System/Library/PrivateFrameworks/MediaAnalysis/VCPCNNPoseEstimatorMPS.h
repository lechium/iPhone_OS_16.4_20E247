//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPCNNData, VCPCNNModel;

__attribute__((visibility("hidden")))
@interface VCPCNNPoseEstimatorMPS
{
    VCPCNNModel *_model;	// 8 = 0x8
    VCPCNNData *_input;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000024318b
- (int)computePoseScore:(float *)arg1;	// IMP=0x0000000000242f32
- (float *)getInputBuffer;	// IMP=0x0000000000242f15
- (id)init;	// IMP=0x0000000000242779

@end

