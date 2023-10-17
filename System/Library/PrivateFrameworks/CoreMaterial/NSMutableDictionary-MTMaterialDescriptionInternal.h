//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (MTMaterialDescriptionInternal)
- (void)sortFiltersWithOrder:(id)arg1;	// IMP=0x0090000000017f81
- (void)setZoom:(double)arg1 ignoringIdentity:(_Bool)arg2 includingOptimizations:(_Bool)arg3 withAdditionalInfoPromise:(CDUnknownBlockType)arg4;	// IMP=0x0090000000017f0c
- (void)setColorMatrix:(struct CAColorMatrix)arg1 ignoringIdentity:(_Bool)arg2 includingOptimizations:(_Bool)arg3 withAdditionalInfoPromise:(CDUnknownBlockType)arg4;	// IMP=0x0090000000017da5
- (void)setBrightness:(double)arg1 ignoringIdentity:(_Bool)arg2 includingOptimizations:(_Bool)arg3 withAdditionalInfoPromise:(CDUnknownBlockType)arg4;	// IMP=0x0090000000017ca9
- (void)setSaturation:(double)arg1 ignoringIdentity:(_Bool)arg2 includingOptimizations:(_Bool)arg3 withAdditionalInfoPromise:(CDUnknownBlockType)arg4;	// IMP=0x0090000000017bad
- (void)setAverageColorEnabled:(_Bool)arg1 includingOptimizations:(_Bool)arg2 withAdditionalInfoPromise:(CDUnknownBlockType)arg3;	// IMP=0x0090000000017ad9
- (void)setBlurRadius:(double)arg1 inputMaskImage:(struct CGImage *)arg2 ignoringIdentity:(_Bool)arg3 includingOptimizations:(_Bool)arg4 withAdditionalInfoPromise:(CDUnknownBlockType)arg5;	// IMP=0x00900000000178ac
- (void)setLuminanceAmount:(double)arg1 values:(id)arg2 ignoringIdentity:(_Bool)arg3 includingOptimizations:(_Bool)arg4 withAdditionalInfoPromise:(CDUnknownBlockType)arg5;	// IMP=0x0090000000017737
- (void)setTintColor:(id)arg1 includingOptimizations:(_Bool)arg2 withAdditionalInfoPromise:(CDUnknownBlockType)arg3;	// IMP=0x00900000000175eb
- (void)_processAdditionalInfo:(id)arg1 forFilter:(id)arg2;	// IMP=0x0090000000017416
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofFilter:(id)arg3;	// IMP=0x00900000000170ac
@end
