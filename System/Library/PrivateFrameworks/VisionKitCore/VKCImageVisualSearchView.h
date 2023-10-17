//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableSet, NSString, VKCVisualSearchResult;
@protocol VKCImageVisualSearchViewDelegate;

__attribute__((visibility("hidden")))
@interface VKCImageVisualSearchView
{
    _Bool _didAddVisualSearchCornerView;	// 8 = 0x8
    _Bool _shouldAutomaticallyShowVisualSearchResult;	// 9 = 0x9
    VKCVisualSearchResult *_visualSearchResult;	// 16 = 0x10
    id <VKCImageVisualSearchViewDelegate> _delegate;	// 24 = 0x18
    NSMutableArray *_resultViews;	// 32 = 0x20
    NSMutableSet *_cachedResultItemsWithFocalDot;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000065e6d
@property(retain, nonatomic) NSMutableSet *cachedResultItemsWithFocalDot; // @synthesize cachedResultItemsWithFocalDot=_cachedResultItemsWithFocalDot;
@property(nonatomic) _Bool shouldAutomaticallyShowVisualSearchResult; // @synthesize shouldAutomaticallyShowVisualSearchResult=_shouldAutomaticallyShowVisualSearchResult;
@property(retain, nonatomic) NSMutableArray *resultViews; // @synthesize resultViews=_resultViews;
@property(nonatomic) _Bool didAddVisualSearchCornerView; // @synthesize didAddVisualSearchCornerView=_didAddVisualSearchCornerView;
@property(nonatomic) __weak id <VKCImageVisualSearchViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) VKCVisualSearchResult *visualSearchResult; // @synthesize visualSearchResult=_visualSearchResult;
- (void)sendDismissedAnalyticsEventEventWithItem:(id)arg1;	// IMP=0x0000000000065c84
- (void)sendProcessingAnalyticsEventEventWithItem:(id)arg1 duration:(double)arg2;	// IMP=0x0000000000065b52
- (void)visualSearchItemView:(id)arg1 didProcessResultsWithDuration:(double)arg2;	// IMP=0x0000000000065af9
- (void)submitVisualSearchUserFeedbackForReportIdentifier:(id)arg1 userFeedbackPayload:(id)arg2 sfReportData:(id)arg3;	// IMP=0x0000000000065a64
- (void)generateVisualSearchResultForItems:(id)arg1 queryID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000659d6
- (void)visualSearchItemViewDidDismissController:(id)arg1;	// IMP=0x000000000006581c
- (void)visualSearchItemView:(id)arg1 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect)arg2;	// IMP=0x0000000000065685
- (_Bool)visualSearchItemView:(id)arg1 shouldBeginAtPoint:(struct CGPoint)arg2;	// IMP=0x00000000000655d0
- (_Bool)containsVisualSearchItemAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000006542c
- (_Bool)_shouldShowPulsingDot:(id)arg1;	// IMP=0x00000000000653a5
- (void)addMetadataToVSFeedbackItem:(id)arg1;	// IMP=0x0000000000065333
- (void)showTopVisualSearchResult;	// IMP=0x00000000000652f6
- (void)automaticallyShowVisualSearchResults;	// IMP=0x0000000000065267
- (id)topResultView;	// IMP=0x000000000006512b
- (void)updateUIForVisualSearchResultsClearExistingResults:(_Bool)arg1;	// IMP=0x0000000000064af4
- (void)setNormalizedVisibleRect:(struct CGRect)arg1;	// IMP=0x0000000000064a2b
- (void)hideDots;	// IMP=0x00000000000648fe
- (void)animateDotsIn;	// IMP=0x000000000006459d
- (void)setHidden:(_Bool)arg1;	// IMP=0x0000000000064531
- (void)triggerTapToRadar;	// IMP=0x000000000006445b
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000643f9
- (void)_layoutResultViews;	// IMP=0x00000000000642cc
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000064229
- (void)layoutSubviews;	// IMP=0x00000000000641e8
- (id)init;	// IMP=0x0000000000064185

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
