//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUTileViewController.h"

@class NSString, PUBrowsingViewModel, PUReviewScreenBarsModel, PUReviewScreenScrubberBar;

__attribute__((visibility("hidden")))
@interface PUReviewScreenScrubberBarTileViewController : PUTileViewController
{
    PUBrowsingViewModel *_browsingViewModel;	// 8 = 0x8
    PUReviewScreenBarsModel *_barsModel;	// 16 = 0x10
    PUReviewScreenScrubberBar *__scrubberBar;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000417559
@property(retain, nonatomic, setter=_setScrubberBar:) PUReviewScreenScrubberBar *_scrubberBar; // @synthesize _scrubberBar=__scrubberBar;
@property(retain, nonatomic) PUReviewScreenBarsModel *barsModel; // @synthesize barsModel=_barsModel;
@property(retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // @synthesize browsingViewModel=_browsingViewModel;
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x000000000041746f
- (void)becomeReusable;	// IMP=0x0000000000417415
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000417365
- (void)_updateVisibilityAnimated:(_Bool)arg1;	// IMP=0x00000000004171eb
- (void)_updateViews;	// IMP=0x0000000000417104
- (id)loadView;	// IMP=0x0000000000416f49

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

