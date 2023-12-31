//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CRLiOSWindowWrapper;

@interface UIView (CRLCanvasAdditions)
+ (void)crl_animateWithKeyboardNotification:(id)arg1 options:(unsigned long long)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00200000000c7764
+ (void)crl_animateWithKeyboardNotification:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c774a
+ (void)crl_animateWithKeyboardNotification:(id)arg1 animations:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c7730
+ (id)crl_p_subviewIndexPathFromWindowToView:(id)arg1;	// IMP=0x00100000000c71e2
+ (id)crl_p_arrayByZOrderSortingArrayOfSingleWindowViews:(id)arg1;	// IMP=0x00100000000c6502
+ (id)crl_arrayByZOrderSortingArrayOfViews:(id)arg1;	// IMP=0x00100000000c5ee3
+ (_Bool)crlaxView:(id)arg1 isDescendantOfView:(id)arg2;	// IMP=0x001000000046d223
- (void)crl_setPresetRenderingInvalid:(_Bool)arg1;	// IMP=0x0010000000096f3e
- (void)crl_prepareForPresetRendering;	// IMP=0x0010000000096f2a
- (_Bool)crl_isPresetRenderingInvalid;	// IMP=0x0010000000096ee8
- (id)crl_constraintsToAllSidesOfItem:(id)arg1;	// IMP=0x00100000000c5d2b
@property(readonly, nonatomic) CRLiOSWindowWrapper *crl_windowWrapper;
@property(readonly, nonatomic) UIView *crlaxFirstAccessibleSubview;
- (double)crlaxScreenScale;	// IMP=0x001000000046d1b0
- (struct CGPoint)crlaxFramePointFromBoundsPoint:(struct CGPoint)arg1;	// IMP=0x001000000046d128
- (struct CGRect)crlaxFrameFromBounds:(struct CGRect)arg1;	// IMP=0x001000000046d07a
@property(nonatomic, setter=crlaxSetParentFindReplaceController:) __weak id crlaxParentFindReplaceController;
@property(nonatomic, setter=crlaxSetServesAsContainingParentForOrdering:) _Bool crlaxServesAsContainingParentForOrdering;
- (void)crl_activateEqualConstraintsForView:(id)arg1;	// IMP=0x001000000055f678
@end

