//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUTileViewController.h"

@class NSString, PUBrowsingViewModel, PUReviewScreenBarsModel, PUReviewScreenTopBar;

__attribute__((visibility("hidden")))
@interface PUReviewScreenTopBarTileViewController : PUTileViewController
{
    PUBrowsingViewModel *_browsingViewModel;	// 8 = 0x8
    PUReviewScreenBarsModel *_barsModel;	// 16 = 0x10
    PUReviewScreenTopBar *__topBar;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000418c78
@property(retain, nonatomic, setter=_setTopBar:) PUReviewScreenTopBar *_topBar; // @synthesize _topBar=__topBar;
@property(retain, nonatomic) PUReviewScreenBarsModel *barsModel; // @synthesize barsModel=_barsModel;
@property(retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // @synthesize browsingViewModel=_browsingViewModel;
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x0000000000418b8e
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000418b4c
- (void)_updateVisibilityAnimated:(_Bool)arg1;	// IMP=0x00000000004189d2
- (void)_updateBarLayout;	// IMP=0x0000000000418904
- (void)_updateControls;	// IMP=0x0000000000418821
- (void)_handleRetakeButtonTapped:(id)arg1;	// IMP=0x00000000004186b6
- (void)_handleDoneButtonTapped:(id)arg1;	// IMP=0x0000000000418674
- (void)becomeReusable;	// IMP=0x000000000041861a
- (id)loadView;	// IMP=0x0000000000418541

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

