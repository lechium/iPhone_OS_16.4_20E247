//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IKShowcaseTemplate, NSArray, NSDictionary, NSString, VideosExtrasCarouselViewController, VideosExtrasImageBrowserViewController, VideosExtrasZoomingImageTransitionController;

__attribute__((visibility("hidden")))
@interface VideosExtrasShowcaseTemplateViewController
{
    _Bool _supportsOneupMode;	// 8 = 0x8
    VideosExtrasZoomingImageTransitionController *_activeZoomingImageInteractiveTransitionController;	// 16 = 0x10
    NSArray *_bannerButtonElements;	// 24 = 0x18
    NSArray *_carouselLockupElements;	// 32 = 0x20
    VideosExtrasCarouselViewController *_carouselViewController;	// 40 = 0x28
    VideosExtrasImageBrowserViewController *_imageBrowserViewController;	// 48 = 0x30
    NSDictionary *_overriddenFullscreenImages;	// 56 = 0x38
    unsigned long long _autohighlightIndex;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000242b57
@property(nonatomic) unsigned long long autohighlightIndex; // @synthesize autohighlightIndex=_autohighlightIndex;
@property(nonatomic) _Bool supportsOneupMode; // @synthesize supportsOneupMode=_supportsOneupMode;
@property(retain, nonatomic) NSDictionary *overriddenFullscreenImages; // @synthesize overriddenFullscreenImages=_overriddenFullscreenImages;
@property(retain, nonatomic) VideosExtrasImageBrowserViewController *imageBrowserViewController; // @synthesize imageBrowserViewController=_imageBrowserViewController;
@property(retain, nonatomic) VideosExtrasCarouselViewController *carouselViewController; // @synthesize carouselViewController=_carouselViewController;
@property(retain, nonatomic) NSArray *carouselLockupElements; // @synthesize carouselLockupElements=_carouselLockupElements;
@property(retain, nonatomic) NSArray *bannerButtonElements; // @synthesize bannerButtonElements=_bannerButtonElements;
@property(retain, nonatomic) VideosExtrasZoomingImageTransitionController *activeZoomingImageInteractiveTransitionController; // @synthesize activeZoomingImageInteractiveTransitionController=_activeZoomingImageInteractiveTransitionController;
- (void)_pushImageBrowserWithVisibleItemIndex:(unsigned long long)arg1;	// IMP=0x0000000000242868
- (id)_mainChildViewController;	// IMP=0x000000000024281f
- (void)_loadTextElement:(id)arg1 textAttributes:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002426b8
@property(readonly, nonatomic) unsigned long long indexOfVisibleItem;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(_Bool)arg2;	// IMP=0x00000000002423cb
- (void)performZoomingImageTransitionWithContext:(id)arg1;	// IMP=0x0000000000242151
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;	// IMP=0x0000000000241f3f
- (void)handlePinchGestureForZoomingImageInteractiveTransitionWithContext:(id)arg1;	// IMP=0x0000000000241cd4
- (id)animationControllerForNavigationOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;	// IMP=0x000000000024193a
- (void)imageBrowserViewController:(id)arg1 loadDescriptionAtIndex:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000024172d
- (void)imageBrowserViewController:(id)arg1 loadSubtitleAtIndex:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000241520
- (void)imageBrowserViewController:(id)arg1 loadTitleAtIndex:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000241327
- (void)imageBrowserViewController:(id)arg1 loadImageAtIndex:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000240fd7
- (unsigned long long)numberOfImagesForBrowserViewController:(id)arg1;	// IMP=0x0000000000240f93
- (void)carouselViewController:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000240d90
- (void)carouselViewController:(id)arg1 didHighlightItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000240d01
- (unsigned long long)carouselSize;	// IMP=0x0000000000240cef
- (void)carouselViewController:(id)arg1 configureCarouselCollectionViewCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3 withThumbnailImageContainerSize:(struct CGSize)arg4;	// IMP=0x000000000023fe1c
- (unsigned long long)numberOfItemsInCarouselViewController:(id)arg1;	// IMP=0x000000000023fdd8
- (void)_prepareLayout;	// IMP=0x000000000023fd69
- (_Bool)showsPlaceholder;	// IMP=0x000000000023fd61
@property(readonly, nonatomic) IKShowcaseTemplate *templateElement;
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000023fc59
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000023fb90
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000023f9c3
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000023f969
- (void)viewDidLoad;	// IMP=0x000000000023f4bc
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000023f368
- (void)dealloc;	// IMP=0x000000000023f1f7
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;	// IMP=0x000000000023ed37

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
