//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPSGraphOperation.h"

@interface MPSGraphSplitOp : MPSGraphOperation
{
    long long _dimensionIndex;	// 80 = 0x50
    unsigned long long _numSplits;	// 88 = 0x58
}

- (id)partialDerivativesForInputTensors:(id)arg1 incomingGradients:(id)arg2 name:(id)arg3;	// IMP=0x00000000001aebe1
- (void *)makeMLIROpWithBuilder:(void *)arg1 symbolTable:(void *)arg2 inputValues:(void *)arg3 opInitialization:(_Bool)arg4 name:(id)arg5;	// IMP=0x00000000001ae607
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 dimension:(long long)arg4 numSplits:(unsigned long long)arg5 name:(id)arg6;	// IMP=0x00000000001ae5d3
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 dimension:(long long)arg4 name:(id)arg5;	// IMP=0x00000000001ae5ae

@end
