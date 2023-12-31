//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, PDFKitPopupViewPrivate;

__attribute__((visibility("hidden")))
@interface PDFKitPopupView : UIView
{
    PDFKitPopupViewPrivate *_private;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000284fe
- (void)textViewDidChange:(id)arg1;	// IMP=0x00000000000284ba
- (void)_updateParentContents;	// IMP=0x0000000000028436
- (void)_removeControlForAnnotation;	// IMP=0x00000000000283c3
- (void)removeFromSuperview;	// IMP=0x0000000000028356
- (_Bool)becomeFirstResponder;	// IMP=0x0000000000028332
- (void)doneButton:(id)arg1;	// IMP=0x0000000000028320
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;	// IMP=0x00000000000282ac
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;	// IMP=0x000000000002825b
- (void)prepareForPopoverPresentation:(id)arg1;	// IMP=0x00000000000281ee
- (struct CGRect)_popoverControllerSourceRect;	// IMP=0x0000000000027eb0
- (void)_presentViewController:(id)arg1;	// IMP=0x0000000000027e1e
- (void)_presentPopupView_iOS;	// IMP=0x0000000000026fb8
- (void)_presentPopupView;	// IMP=0x0000000000026fa6
- (void)_setupPopupView;	// IMP=0x0000000000026c21
- (id)initWithParentAnnotation:(id)arg1 owningPageView:(id)arg2 owningPDFView:(id)arg3;	// IMP=0x0000000000026ac5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

