//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC8Freeform16CRLiOSPencilTray : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *icc;	// 16 = 0x10
    MISSING_TYPE *cvc;	// 24 = 0x18
    MISSING_TYPE *editorController;	// 32 = 0x20
    MISSING_TYPE *documentModeController;	// 40 = 0x28
    MISSING_TYPE *pencilTrayUndoManager;	// 48 = 0x30
    MISSING_TYPE *toolPicker;	// 56 = 0x38
    MISSING_TYPE *lassoEditingView;	// 64 = 0x40
    MISSING_TYPE *lassoEditingViewClippingWorkaround;	// 72 = 0x48
    MISSING_TYPE *wasTearDownCalled;	// 80 = 0x50
    MISSING_TYPE *isInstalled;	// 81 = 0x51
    MISSING_TYPE *isObserving;	// 82 = 0x52
    MISSING_TYPE *isHidden;	// 83 = 0x53
    MISSING_TYPE *lastRectangleObscuringCanvasScrollViewReportedToDelegate;	// 88 = 0x58
    MISSING_TYPE *hasCommandGroupOpenForContinuousColorUpdates;	// 120 = 0x78
    MISSING_TYPE *subscriptions;	// 128 = 0x80
    MISSING_TYPE *observedInfos;	// 136 = 0x88
    MISSING_TYPE *updatingZOrderButtons;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0040000000b566b0
- (id)init;	// IMP=0x0010000000b5c8e0
- (void)bringToFrontWithSender:(id)arg1;	// IMP=0x0010000000b5c660
- (void)bringForwardWithSender:(id)arg1;	// IMP=0x0010000000b5c620
- (void)sendToBackWithSender:(id)arg1;	// IMP=0x0010000000b5c570
- (void)sendBackwardWithSender:(id)arg1;	// IMP=0x0010000000b5c530
- (void)strokeColorChangedFromTrayWithSender:(id)arg1;	// IMP=0x0010000000b5aee0
- (void)fillColorChangedFromTrayWithSender:(id)arg1;	// IMP=0x0010000000b5ad40
- (void)dealloc;	// IMP=0x0010000000b56600

@end
