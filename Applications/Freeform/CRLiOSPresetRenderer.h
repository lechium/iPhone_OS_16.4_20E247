//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSOperationQueue;
@protocol CRLiOSPresetProviding;

@interface CRLiOSPresetRenderer : NSObject
{
    NSArray *_inFlightOperations;	// 8 = 0x8
    id <CRLiOSPresetProviding> _presetProvider;	// 16 = 0x10
    NSOperationQueue *_swatchOperationQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000004cd119
@property(retain, nonatomic) NSOperationQueue *p_swatchOperationQueue; // @synthesize p_swatchOperationQueue=_swatchOperationQueue;
@property(retain, nonatomic) id <CRLiOSPresetProviding> p_presetProvider; // @synthesize p_presetProvider=_presetProvider;
@property(retain, nonatomic) NSArray *p_inFlightOperations; // @synthesize p_inFlightOperations=_inFlightOperations;
- (_Bool)p_shouldWaitBeforeDeliveringSwatchesInContext:(id)arg1;	// IMP=0x00100000004cd01a
- (id)p_swatchOperationForCellWithSize:(struct CGSize)arg1 atIndexPath:(id)arg2 context:(id)arg3;	// IMP=0x00100000004ccf67
@property(readonly, nonatomic) struct UIEdgeInsets swatchInsets;
- (id)localizedAccessibilityNameForPresetAtIndexPath:(id)arg1 context:(id)arg2;	// IMP=0x00100000004cce5a
- (id)defaultLocalizedNameForPresetAtIndexPath:(id)arg1 context:(id)arg2;	// IMP=0x00100000004ccdab
- (_Bool)isDefaultLocalizedNameForPresetAtIndexPath:(id)arg1 context:(id)arg2;	// IMP=0x00100000004ccd08
- (id)localizedNameForPresetAtIndexPath:(id)arg1 context:(id)arg2;	// IMP=0x00100000004ccc59
- (void)renderSwatchInView:(id)arg1 withSize:(struct CGSize)arg2 backgroundColor:(id)arg3 atIndexPath:(id)arg4 context:(id)arg5;	// IMP=0x00100000004cc989
- (_Bool)contextIsLowContrast:(id)arg1 forBackgroundColor:(id)arg2;	// IMP=0x00100000004cc8fe
- (void)waitOnSwatchRenderingAndDeliverResultsIfNeededInContext:(id)arg1;	// IMP=0x00100000004cc73e
- (_Bool)cancelSwatchRenderingIfNeeded;	// IMP=0x00100000004cc67a
- (id)initWithPresetProvider:(id)arg1;	// IMP=0x00100000004cc585

@end
