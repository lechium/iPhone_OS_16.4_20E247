//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPSGraphOperation.h"

@class NSArray;

@interface MPSGraphLocalConvolutionBase : MPSGraphOperation
{
    unsigned long long _dataLayout;	// 80 = 0x50
    NSArray *_kernelShape;	// 88 = 0x58
    unsigned long long _dilationRateInX;	// 96 = 0x60
    unsigned long long _dilationRateInY;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000001bbbe6
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 dataLayout:(unsigned long long)arg4 kernelShape:(id)arg5 dilationRateInX:(unsigned long long)arg6 dilationRateInY:(unsigned long long)arg7 name:(id)arg8;	// IMP=0x00000000001bbab0

@end

