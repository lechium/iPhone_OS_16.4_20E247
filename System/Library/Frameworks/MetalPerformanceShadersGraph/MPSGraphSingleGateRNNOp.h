//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MPSGraphSingleGateRNNOp
{
}

- (id)partialDerivativesForInputTensors:(id)arg1 incomingGradients:(id)arg2 name:(id)arg3;	// IMP=0x0000000000082ba4
- (void *)makeMLIROpWithBuilder:(void *)arg1 symbolTable:(void *)arg2 inputValues:(void *)arg3 opInitialization:(_Bool)arg4 name:(id)arg5;	// IMP=0x00000000000826a6
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 descriptor:(id)arg4 name:(id)arg5;	// IMP=0x0000000000082598

@end
