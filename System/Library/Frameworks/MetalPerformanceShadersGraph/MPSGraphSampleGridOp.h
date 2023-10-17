//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPSGraphOperation.h"

@interface MPSGraphSampleGridOp : MPSGraphOperation
{
    _Bool _normalizeCoordinates;	// 73 = 0x49
    _Bool _relativeCoordinates;	// 74 = 0x4a
    _Bool _alignCorners;	// 75 = 0x4b
    long long _paddingMode;	// 80 = 0x50
    unsigned long long _samplingMode;	// 88 = 0x58
    unsigned long long _nearestRoundingMode;	// 96 = 0x60
    unsigned long long _layout;	// 104 = 0x68
}

- (void *)makeMLIROpWithBuilder:(void *)arg1 symbolTable:(void *)arg2 inputValues:(void *)arg3 opInitialization:(_Bool)arg4 name:(id)arg5;	// IMP=0x00000000000216a7
- (id)partialDerivativeForInputTensor:(id)arg1 incomingGradient:(id)arg2 inputIndex:(unsigned long long)arg3 name:(id)arg4;	// IMP=0x0000000000021339
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 layout:(unsigned long long)arg4 normalizeCoordinates:(_Bool)arg5 relativeCoordinates:(_Bool)arg6 alignCorners:(_Bool)arg7 paddingMode:(long long)arg8 samplingMode:(unsigned long long)arg9 nearestRoundingMode:(unsigned long long)arg10 name:(id)arg11;	// IMP=0x00000000000212b0

@end
