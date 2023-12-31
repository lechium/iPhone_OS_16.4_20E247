//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSLayoutDimension, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSString;

@interface UIView (HUAdditions)
+ (void)hu_enableAnimations:(_Bool)arg1 forBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000022651d
- (id)hu_contentModeString;	// IMP=0x00100000002266ad
- (_Bool)hu_isDescendantOfPickerView;	// IMP=0x0010000000226619
- (_Bool)hu_isHomeAffordancePresent;	// IMP=0x00100000002265a1
- (void)hu_autoSizeByConstrainingWidth:(double)arg1;	// IMP=0x0010000000226442
- (void)hu_traverseViewHierarchy:(CDUnknownBlockType)arg1;	// IMP=0x00100000002262cd
- (void)hu_setFramePreservingTransform:(struct CGRect)arg1;	// IMP=0x0010000000226237
- (struct CGRect)hu_frameInGlobalCoordinateSpace;	// IMP=0x0010000000467612
- (struct CGPoint)hu_centerInGlobalCoordinateSpace;	// IMP=0x00100000004675ee
- (id)pinToEdgesConstraints:(id)arg1;	// IMP=0x00100000005307ae
- (void)pinToEdges:(id)arg1;	// IMP=0x001000000053075e

// Remaining properties
@property(readonly, nonatomic) NSLayoutYAxisAnchor *bottomAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *centerXAnchor;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *centerYAnchor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSLayoutDimension *heightAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *leadingAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *leftAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *rightAnchor;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *topAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *trailingAnchor;
@property(readonly, nonatomic) NSLayoutDimension *widthAnchor;
@end

