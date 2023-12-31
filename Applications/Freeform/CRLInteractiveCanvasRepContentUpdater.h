//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLCanvas, NSArray, NSHashTable, NSMapTable, NSOrderedSet;
@protocol CALayerDelegate;

@interface CRLInteractiveCanvasRepContentUpdater : NSObject
{
    NSMapTable *_repRenderablesByRep;	// 8 = 0x8
    NSMapTable *_repsByRepRenderables;	// 16 = 0x10
    NSMapTable *_containerLayersByRep;	// 24 = 0x18
    NSMapTable *_repsByContainerLayer;	// 32 = 0x20
    NSMapTable *_childWrapperLayersByRep;	// 40 = 0x28
    NSMapTable *_repsByChildWrapperLayer;	// 48 = 0x30
    NSHashTable *_clonedParentRepLayers;	// 56 = 0x38
    CRLCanvas *_canvas;	// 64 = 0x40
    id <CALayerDelegate> _layerDelegate;	// 72 = 0x48
    NSArray *_repContentPiles;	// 80 = 0x50
    NSOrderedSet *_allReps;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00100000001541c3
@property(readonly, nonatomic) NSOrderedSet *allReps; // @synthesize allReps=_allReps;
@property(readonly, nonatomic) NSArray *repContentPiles; // @synthesize repContentPiles=_repContentPiles;
@property(readonly, nonatomic) __weak id <CALayerDelegate> layerDelegate; // @synthesize layerDelegate=_layerDelegate;
@property(readonly, nonatomic) CRLCanvas *canvas; // @synthesize canvas=_canvas;
- (_Bool)isClonedParentRepLayer:(id)arg1;	// IMP=0x0010000000154179
- (_Bool)isChildWrapperLayer:(id)arg1;	// IMP=0x0010000000154142
- (_Bool)isRepContainerLayer:(id)arg1;	// IMP=0x001000000015410b
- (_Bool)isRepContentLayer:(id)arg1;	// IMP=0x001000000015409a
- (id)containerRenderableForRep:(id)arg1;	// IMP=0x0010000000154036
- (id)repForLayer:(id)arg1;	// IMP=0x0010000000153fcf
- (id)renderableForRep:(id)arg1;	// IMP=0x0010000000153fb9
- (void)p_discardRenderable:(id)arg1 forRep:(id)arg2;	// IMP=0x0010000000153eec
- (void)p_updateChildWrapperLayer:(id)arg1 forRep:(id)arg2 withLayer:(id)arg3;	// IMP=0x0010000000153b47
- (void)p_recursivelyUpdateRenderableForRep:(id)arg1 accumulatingRepContentPiles:(id)arg2 andReps:(id)arg3 suppressLayers:(_Bool)arg4 hidingLayersForReps:(id)arg5 forcingUpdateOfValidLayers:(_Bool)arg6;	// IMP=0x001000000015161d
- (void)updateLayerFramesOnlyForReps:(id)arg1;	// IMP=0x0010000000151088
- (void)updateRepContentForcingUpdateOfValidLayers:(_Bool)arg1;	// IMP=0x0010000000150b7c
- (void)updateRepContent;	// IMP=0x0010000000150b68
- (void)teardown;	// IMP=0x0010000000150a3d
- (id)initWithCanvas:(id)arg1 layerDelegate:(id)arg2;	// IMP=0x0010000000150858
- (id)i_firstDifferenceBetweenLayerTreeDescription:(id)arg1 andDescription:(id)arg2;	// IMP=0x0010000000154d61
- (id)i_descriptionOfLayerTreeRootedAt:(id)arg1;	// IMP=0x0010000000154ce7
- (void)p_visitLayer:(id)arg1 atLevel:(unsigned long long)arg2 appendTo:(id)arg3;	// IMP=0x0010000000154770
- (id)p_layerDescriptionFromString:(id)arg1;	// IMP=0x0010000000154583
- (id)i_stringFromLayerDescription:(id)arg1;	// IMP=0x00100000001543b4

@end

