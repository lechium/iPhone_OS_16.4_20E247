//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIImageProcessorKernel.h"

__attribute__((visibility("hidden")))
@interface InpaintingMembraneGeneration : CIImageProcessorKernel
{
}

+ (id)fillSmoothMembraneForSRGBImage:(id)arg1 andMask:(id)arg2 error:(id *)arg3;	// IMP=0x008000000022fe03
+ (int)selectMembraneProcessingResolutionBasedOnImageSize:(struct CGSize)arg1;	// IMP=0x008000000022fca6
+ (int)outputFormat;	// IMP=0x008000000022fc97
+ (int)formatForInputAtIndex:(int)arg1;	// IMP=0x008000000022fc88
+ (_Bool)allowSRGBTranferFuntionOnOutput;	// IMP=0x008000000022fc80
+ (_Bool)allowSRGBTranferFuntionOnInputAtIndex:(int)arg1;	// IMP=0x008000000022fc78
+ (_Bool)synchronizeInputs;	// IMP=0x008000000022fc70
+ (_Bool)allowPartialOutputRegion;	// IMP=0x008000000022fc68
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;	// IMP=0x008000000022fc50
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;	// IMP=0x008000000022f962
+ (id)getMembraneModelForResolution:(int)arg1 error:(id *)arg2;	// IMP=0x008000000022f8f4
+ (_Bool)initializeMembraneModelForResolution:(int)arg1 error:(id *)arg2;	// IMP=0x008000000022f669

@end
