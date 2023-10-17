//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewController.h"

@class IKAppDocument, NSString, SKUIHorizontalLockupView, SKUILayoutCache, SKUIViewElementLayoutContext, SUPlayerStatus, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface SKUIPreviewOverlayViewController : SKUIViewController
{
    long long _backgroundStyle;	// 8 = 0x8
    IKAppDocument *_document;	// 16 = 0x10
    SKUILayoutCache *_layoutCache;	// 24 = 0x18
    SKUIViewElementLayoutContext *_layoutContext;	// 32 = 0x20
    SKUIHorizontalLockupView *_lockupView;	// 40 = 0x28
    SUPlayerStatus *_previewStatus;	// 48 = 0x30
    UITapGestureRecognizer *_tapGestureRecognizer;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000036cb3f
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
- (double)_overlayWidth;	// IMP=0x000000000036ca6e
- (id)_layoutCache;	// IMP=0x000000000036ca19
- (void)_tapAction:(id)arg1;	// IMP=0x000000000036c8e8
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000000036c898
- (void)layoutCacheDidFinishBatch:(id)arg1;	// IMP=0x000000000036c886
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x000000000036c852
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;	// IMP=0x000000000036c646
- (void)loadView;	// IMP=0x000000000036c3e3
- (void)showPreviewProgressWithStatus:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000036c381
- (void)reloadOverlayView;	// IMP=0x000000000036c26e
- (void)prepareOverlayView;	// IMP=0x000000000036bfca
- (void)documentDidUpdate:(id)arg1;	// IMP=0x000000000036bfc4
- (void)dealloc;	// IMP=0x000000000036bec0
- (id)initWithDocument:(id)arg1;	// IMP=0x000000000036be12

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
