//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPSGraphOperation.h"

@class MPSGraphTensor, NSArray;

@interface MPSGraphStitchedOp : MPSGraphOperation
{
    CDUnknownBlockType _stitchingBlock;	// 80 = 0x50
    MPSGraphTensor *_finalOutputTensorForStitchedRegion;	// 88 = 0x58
    NSArray *_opsAddedInStitchedRegion;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000001e38c1
- (void)recurseOperation:(id)arg1 builder:(void *)arg2 symbolTable:(void *)arg3 tensorToValueMap:(void *)arg4 operationsRecursed:(id)arg5;	// IMP=0x00000000001e3256
- (void *)makeMLIROpWithBuilder:(void *)arg1 symbolTable:(void *)arg2 inputValues:(void *)arg3 opInitialization:(_Bool)arg4 name:(id)arg5;	// IMP=0x00000000001e23d8
- (id)initWithGraph:(id)arg1 withBlock:(CDUnknownBlockType)arg2 inputTensors:(id)arg3 controlDependencies:(id)arg4 name:(id)arg5;	// IMP=0x00000000001e22e0

@end

