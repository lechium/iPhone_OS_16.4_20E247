//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@interface CALayer (MicaPlayerAdditions)
- (void)mp_moveAndResizeWithinParentLayer:(id)arg1 usingGravity:(id)arg2 geometryFlipped:(_Bool)arg3 retinaScale:(double)arg4 animate:(_Bool)arg5;	// IMP=0x00700000000aeff6
- (id)mp_allAnimationsInTree;	// IMP=0x00700000000aed07
- (id)mp_allLayersWithKindOfClass:(Class)arg1;	// IMP=0x00700000000aeb63
- (id)mp_allLayersWhoseNamesContainString:(id)arg1;	// IMP=0x00700000000ae90a
- (void)mp_addLayerAndSublayersToArray:(id)arg1 allowHiddenLayers:(_Bool)arg2;	// IMP=0x00700000000ae6fe
- (id)mp_allLayersInTree;	// IMP=0x00700000000ae6a7
- (id)mp_propertiesToCopy;	// IMP=0x00700000000ae5aa
- (id)mp_basicPropertiesToCopy;	// IMP=0x00700000000ae3ec
- (id)mp_deepCopyLayer;	// IMP=0x00700000000adddd
@end

