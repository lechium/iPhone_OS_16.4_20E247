//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CEKBadgeTextView, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString, NSTimer, NUComposition, NUCropModel, PLImageGeometry, PLPhotoEditRenderer, PUAdjustmentsViewController, PUCropAspect, PUCropAspectFlipperView, PUCropAspectViewController, PUCropHandleView, PUCropOverlayView, PUCropPerspectiveAdjustmentsDataSource, PUCropPerspectiveView, PUCropToolControllerSpec, PUEditActionActivity, PUVideoScrubberView, PXUIButton, UIButton, UIImage, UILongPressGestureRecognizer, UIView;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PUCropToolController
{
    _Bool _imageLoadingInProgress;	// 16 = 0x10
    _Bool _contentViewsHidden;	// 17 = 0x11
    _Bool _wantsPreviewViewHidden;	// 18 = 0x12
    _Bool _ignoreTrackingUpdates;	// 19 = 0x13
    _Bool _trackingAdjustmentControl;	// 20 = 0x14
    _Bool _toolBadgeDoesHide;	// 21 = 0x15
    _Bool _modelLoadingSuspended;	// 22 = 0x16
    _Bool _loadingStateFromModel;	// 23 = 0x17
    _Bool _wasLoadingStateFromModelWhenTrackingBegan;	// 24 = 0x18
    _Bool _needsImageLoad;	// 25 = 0x19
    _Bool _initialImageLoaded;	// 26 = 0x1a
    _Bool _needsMediaLoad;	// 27 = 0x1b
    _Bool _activeTool;	// 28 = 0x1c
    _Bool _needsModelLoad;	// 29 = 0x1d
    _Bool _modelChangeLocal;	// 30 = 0x1e
    _Bool _gridVisible;	// 31 = 0x1f
    _Bool _hasAutoAppliedCropSuggestion;	// 32 = 0x20
    _Bool _hasAppliedCropSuggestion;	// 33 = 0x21
    _Bool _hasRequestedCropSuggestion;	// 34 = 0x22
    _Bool _hasAutoAppliedPerspectiveSuggestion;	// 35 = 0x23
    _Bool _hasAppliedPerspectiveSuggestion;	// 36 = 0x24
    _Bool _hasRequestedPerspectiveSuggestion;	// 37 = 0x25
    _Bool _videoScrubberIsInteracting;	// 38 = 0x26
    _Bool _mediaViewLoadingInProgress;	// 39 = 0x27
    _Bool _imageHasReframeData;	// 40 = 0x28
    _Bool _imageHasOriginalCrop;	// 41 = 0x29
    _Bool _imageIsUsingReframe;	// 42 = 0x2a
    _Bool _autoButtonInReframeMode;	// 43 = 0x2b
    _Bool _disableSourceSwitch;	// 44 = 0x2c
    float _gainMapValue;	// 48 = 0x30
    long long _initialAction;	// 56 = 0x38
    struct CGImage *_gainMapImage;	// 64 = 0x40
    PUAdjustmentsViewController *_adjustmentsViewController;	// 72 = 0x48
    UIView *_containerView;	// 80 = 0x50
    UIView *_adjustmentPickerView;	// 88 = 0x58
    PXUIButton *_autoButton;	// 96 = 0x60
    long long _autoButtonMode;	// 104 = 0x68
    PXUIButton *_rotateButton;	// 112 = 0x70
    PXUIButton *_flipButton;	// 120 = 0x78
    PXUIButton *_aspectButton;	// 128 = 0x80
    PUEditActionActivity *_overcaptureSourceToggleActivity;	// 136 = 0x88
    PUCropPerspectiveView *_cropView;	// 144 = 0x90
    UIView *_cropCanvasView;	// 152 = 0x98
    PUCropOverlayView *_cropOverlayView;	// 160 = 0xa0
    NSDictionary *_cropHandleViewsByHandle;	// 168 = 0xa8
    PUCropHandleView *_selectedCropHandleView;	// 176 = 0xb0
    UIView *_rotateSnapshotView;	// 184 = 0xb8
    PUCropAspectViewController *_cropAspectViewController;	// 192 = 0xc0
    PUCropAspectFlipperView *_cropAspectFlipperView;	// 200 = 0xc8
    UIButton *_aspectRatioLockButton;	// 208 = 0xd0
    PUCropPerspectiveAdjustmentsDataSource *_dataSource;	// 216 = 0xd8
    NSMutableDictionary *_initialLocationsInHandlesByHandle;	// 224 = 0xe0
    NSMutableDictionary *_animationsByKeyPath;	// 232 = 0xe8
    NSMutableDictionary *_animationTargetsByKeyPath;	// 240 = 0xf0
    unsigned long long _rotatingAnimationCount;	// 248 = 0xf8
    unsigned long long _contentViewsHiddenAnimationCount;	// 256 = 0x100
    NSTimer *_badgeShowingExpirationTimer;	// 264 = 0x108
    NUComposition *_lastKnownComposition;	// 272 = 0x110
    PLPhotoEditRenderer *_renderer;	// 280 = 0x118
    PLImageGeometry *_geometry;	// 288 = 0x120
    NUCropModel *_cropModel;	// 296 = 0x128
    UIImage *_image;	// 304 = 0x130
    double _straightenAngle;	// 312 = 0x138
    double _pitchAngle;	// 320 = 0x140
    double _yawAngle;	// 328 = 0x148
    PUCropAspect *_cropAspect;	// 336 = 0x150
    double _suggestedStraightenAngle;	// 344 = 0x158
    double _suggestedPitchAngle;	// 352 = 0x160
    double _suggestedYawAngle;	// 360 = 0x168
    PUVideoScrubberView *_videoScrubberView;	// 368 = 0x170
    double _screenScale;	// 376 = 0x178
    NSObject<OS_dispatch_queue> *_imageLoadingQueue;	// 384 = 0x180
    NSMutableArray *_imageLoadingQueueCompletionBlocks;	// 392 = 0x188
    UILongPressGestureRecognizer *_accessibilityLongPressGestureRecognizer;	// 400 = 0x190
    CEKBadgeTextView *_badgeView;	// 408 = 0x198
    NSArray *_toolKeyCommands;	// 416 = 0x1a0
    struct CGSize _minimumViewCropRectSizeForHandleGesture;	// 424 = 0x1a8
    struct CGSize _screenSize;	// 440 = 0x1b8
    CDStruct_1b6d18a9 _videoScrubberSeekTime;	// 456 = 0x1c8
    struct CGRect _initialHandlePanCropRect;	// 480 = 0x1e0
    struct UIEdgeInsets _previewViewInsets;	// 512 = 0x200
    struct CGRect _cropViewFrameForLastModelLoad;	// 544 = 0x220
    struct CGRect _inputExtent;	// 576 = 0x240
    struct CGRect _viewCropRect;	// 608 = 0x260
    struct CGRect _suggestedCrop;	// 640 = 0x280
}

- (void).cxx_destruct;	// IMP=0x000000000013b94e
@property(readonly, nonatomic) NSArray *toolKeyCommands; // @synthesize toolKeyCommands=_toolKeyCommands;
@property(nonatomic) _Bool disableSourceSwitch; // @synthesize disableSourceSwitch=_disableSourceSwitch;
@property(nonatomic) _Bool autoButtonInReframeMode; // @synthesize autoButtonInReframeMode=_autoButtonInReframeMode;
@property(nonatomic) _Bool imageIsUsingReframe; // @synthesize imageIsUsingReframe=_imageIsUsingReframe;
@property(nonatomic) _Bool imageHasOriginalCrop; // @synthesize imageHasOriginalCrop=_imageHasOriginalCrop;
@property(nonatomic) _Bool imageHasReframeData; // @synthesize imageHasReframeData=_imageHasReframeData;
@property(retain, nonatomic) CEKBadgeTextView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UILongPressGestureRecognizer *accessibilityLongPressGestureRecognizer; // @synthesize accessibilityLongPressGestureRecognizer=_accessibilityLongPressGestureRecognizer;
@property(nonatomic) _Bool mediaViewLoadingInProgress; // @synthesize mediaViewLoadingInProgress=_mediaViewLoadingInProgress;
@property(retain, nonatomic) NSMutableArray *imageLoadingQueueCompletionBlocks; // @synthesize imageLoadingQueueCompletionBlocks=_imageLoadingQueueCompletionBlocks;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *imageLoadingQueue; // @synthesize imageLoadingQueue=_imageLoadingQueue;
@property(nonatomic) double screenScale; // @synthesize screenScale=_screenScale;
@property(nonatomic) struct CGSize screenSize; // @synthesize screenSize=_screenSize;
@property(nonatomic) _Bool videoScrubberIsInteracting; // @synthesize videoScrubberIsInteracting=_videoScrubberIsInteracting;
@property(nonatomic) CDStruct_1b6d18a9 videoScrubberSeekTime; // @synthesize videoScrubberSeekTime=_videoScrubberSeekTime;
@property(retain, nonatomic) PUVideoScrubberView *videoScrubberView; // @synthesize videoScrubberView=_videoScrubberView;
@property(nonatomic) _Bool hasRequestedPerspectiveSuggestion; // @synthesize hasRequestedPerspectiveSuggestion=_hasRequestedPerspectiveSuggestion;
@property(nonatomic) _Bool hasAppliedPerspectiveSuggestion; // @synthesize hasAppliedPerspectiveSuggestion=_hasAppliedPerspectiveSuggestion;
@property(nonatomic) _Bool hasAutoAppliedPerspectiveSuggestion; // @synthesize hasAutoAppliedPerspectiveSuggestion=_hasAutoAppliedPerspectiveSuggestion;
@property(nonatomic) double suggestedYawAngle; // @synthesize suggestedYawAngle=_suggestedYawAngle;
@property(nonatomic) double suggestedPitchAngle; // @synthesize suggestedPitchAngle=_suggestedPitchAngle;
@property(nonatomic) _Bool hasRequestedCropSuggestion; // @synthesize hasRequestedCropSuggestion=_hasRequestedCropSuggestion;
@property(nonatomic) _Bool hasAppliedCropSuggestion; // @synthesize hasAppliedCropSuggestion=_hasAppliedCropSuggestion;
@property(nonatomic) _Bool hasAutoAppliedCropSuggestion; // @synthesize hasAutoAppliedCropSuggestion=_hasAutoAppliedCropSuggestion;
@property(nonatomic) double suggestedStraightenAngle; // @synthesize suggestedStraightenAngle=_suggestedStraightenAngle;
@property(nonatomic) struct CGRect suggestedCrop; // @synthesize suggestedCrop=_suggestedCrop;
@property(nonatomic) _Bool gridVisible; // @synthesize gridVisible=_gridVisible;
@property(retain, nonatomic) PUCropAspect *cropAspect; // @synthesize cropAspect=_cropAspect;
@property(nonatomic) double yawAngle; // @synthesize yawAngle=_yawAngle;
@property(nonatomic) double pitchAngle; // @synthesize pitchAngle=_pitchAngle;
@property(nonatomic) double straightenAngle; // @synthesize straightenAngle=_straightenAngle;
@property(nonatomic) struct CGRect viewCropRect; // @synthesize viewCropRect=_viewCropRect;
@property(nonatomic) struct CGRect inputExtent; // @synthesize inputExtent=_inputExtent;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NUCropModel *cropModel; // @synthesize cropModel=_cropModel;
@property(retain, nonatomic) PLImageGeometry *geometry; // @synthesize geometry=_geometry;
@property(retain, nonatomic) PLPhotoEditRenderer *renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) NUComposition *lastKnownComposition; // @synthesize lastKnownComposition=_lastKnownComposition;
@property(nonatomic, getter=isModelChangeLocal) _Bool modelChangeLocal; // @synthesize modelChangeLocal=_modelChangeLocal;
@property(nonatomic) struct CGRect cropViewFrameForLastModelLoad; // @synthesize cropViewFrameForLastModelLoad=_cropViewFrameForLastModelLoad;
@property(nonatomic) _Bool needsModelLoad; // @synthesize needsModelLoad=_needsModelLoad;
@property(nonatomic, getter=isActiveTool) _Bool activeTool; // @synthesize activeTool=_activeTool;
@property(nonatomic) _Bool needsMediaLoad; // @synthesize needsMediaLoad=_needsMediaLoad;
@property(nonatomic) _Bool initialImageLoaded; // @synthesize initialImageLoaded=_initialImageLoaded;
@property(nonatomic) _Bool needsImageLoad; // @synthesize needsImageLoad=_needsImageLoad;
@property(nonatomic) _Bool wasLoadingStateFromModelWhenTrackingBegan; // @synthesize wasLoadingStateFromModelWhenTrackingBegan=_wasLoadingStateFromModelWhenTrackingBegan;
@property(nonatomic) _Bool loadingStateFromModel; // @synthesize loadingStateFromModel=_loadingStateFromModel;
@property(nonatomic) _Bool modelLoadingSuspended; // @synthesize modelLoadingSuspended=_modelLoadingSuspended;
@property(nonatomic) _Bool toolBadgeDoesHide; // @synthesize toolBadgeDoesHide=_toolBadgeDoesHide;
@property(retain, nonatomic) NSTimer *badgeShowingExpirationTimer; // @synthesize badgeShowingExpirationTimer=_badgeShowingExpirationTimer;
@property(nonatomic, getter=isTrackingAdjustmentControl) _Bool trackingAdjustmentControl; // @synthesize trackingAdjustmentControl=_trackingAdjustmentControl;
@property(nonatomic) unsigned long long contentViewsHiddenAnimationCount; // @synthesize contentViewsHiddenAnimationCount=_contentViewsHiddenAnimationCount;
@property(nonatomic) unsigned long long rotatingAnimationCount; // @synthesize rotatingAnimationCount=_rotatingAnimationCount;
@property(retain, nonatomic) NSMutableDictionary *animationTargetsByKeyPath; // @synthesize animationTargetsByKeyPath=_animationTargetsByKeyPath;
@property(retain, nonatomic) NSMutableDictionary *animationsByKeyPath; // @synthesize animationsByKeyPath=_animationsByKeyPath;
@property(nonatomic) _Bool ignoreTrackingUpdates; // @synthesize ignoreTrackingUpdates=_ignoreTrackingUpdates;
@property(nonatomic) _Bool wantsPreviewViewHidden; // @synthesize wantsPreviewViewHidden=_wantsPreviewViewHidden;
@property(nonatomic) struct UIEdgeInsets previewViewInsets; // @synthesize previewViewInsets=_previewViewInsets;
@property(nonatomic) _Bool contentViewsHidden; // @synthesize contentViewsHidden=_contentViewsHidden;
@property(nonatomic) struct CGRect initialHandlePanCropRect; // @synthesize initialHandlePanCropRect=_initialHandlePanCropRect;
@property(retain, nonatomic) NSMutableDictionary *initialLocationsInHandlesByHandle; // @synthesize initialLocationsInHandlesByHandle=_initialLocationsInHandlesByHandle;
@property(retain, nonatomic) PUCropPerspectiveAdjustmentsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIButton *aspectRatioLockButton; // @synthesize aspectRatioLockButton=_aspectRatioLockButton;
@property(nonatomic) struct CGSize minimumViewCropRectSizeForHandleGesture; // @synthesize minimumViewCropRectSizeForHandleGesture=_minimumViewCropRectSizeForHandleGesture;
@property(retain, nonatomic) PUCropAspectFlipperView *cropAspectFlipperView; // @synthesize cropAspectFlipperView=_cropAspectFlipperView;
@property(retain, nonatomic) PUCropAspectViewController *cropAspectViewController; // @synthesize cropAspectViewController=_cropAspectViewController;
@property(retain, nonatomic) UIView *rotateSnapshotView; // @synthesize rotateSnapshotView=_rotateSnapshotView;
@property(retain, nonatomic) PUCropHandleView *selectedCropHandleView; // @synthesize selectedCropHandleView=_selectedCropHandleView;
@property(retain, nonatomic) NSDictionary *cropHandleViewsByHandle; // @synthesize cropHandleViewsByHandle=_cropHandleViewsByHandle;
@property(retain, nonatomic) PUCropOverlayView *cropOverlayView; // @synthesize cropOverlayView=_cropOverlayView;
@property(retain, nonatomic) UIView *cropCanvasView; // @synthesize cropCanvasView=_cropCanvasView;
@property(retain, nonatomic) PUCropPerspectiveView *cropView; // @synthesize cropView=_cropView;
@property(retain, nonatomic) PUEditActionActivity *overcaptureSourceToggleActivity; // @synthesize overcaptureSourceToggleActivity=_overcaptureSourceToggleActivity;
@property(retain, nonatomic) PXUIButton *aspectButton; // @synthesize aspectButton=_aspectButton;
@property(retain, nonatomic) PXUIButton *flipButton; // @synthesize flipButton=_flipButton;
@property(retain, nonatomic) PXUIButton *rotateButton; // @synthesize rotateButton=_rotateButton;
@property(nonatomic) long long autoButtonMode; // @synthesize autoButtonMode=_autoButtonMode;
@property(retain, nonatomic) PXUIButton *autoButton; // @synthesize autoButton=_autoButton;
@property(retain, nonatomic) UIView *adjustmentPickerView; // @synthesize adjustmentPickerView=_adjustmentPickerView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) PUAdjustmentsViewController *adjustmentsViewController; // @synthesize adjustmentsViewController=_adjustmentsViewController;
@property(nonatomic) float gainMapValue; // @synthesize gainMapValue=_gainMapValue;
@property(retain, nonatomic) struct CGImage *gainMapImage; // @synthesize gainMapImage=_gainMapImage;
@property(nonatomic) long long initialAction; // @synthesize initialAction=_initialAction;
@property(nonatomic) _Bool imageLoadingInProgress; // @synthesize imageLoadingInProgress=_imageLoadingInProgress;
- (void)_accessibilityLongPressChanged:(id)arg1;	// IMP=0x000000000013ab3a
- (void)_preferredContentSizeCategoryChanged;	// IMP=0x000000000013aaa4
- (id)adjustmentsRenderer:(id)arg1;	// IMP=0x000000000013aa45
- (void)adjustmentsDataChanged:(id)arg1;	// IMP=0x000000000013aa28
- (void)cropAspectFlipperView:(id)arg1 cropOrientationSelected:(long long)arg2;	// IMP=0x000000000013a929
- (void)cropAspectController:(id)arg1 cropAspectSelected:(id)arg2;	// IMP=0x000000000013a887
- (void)_toggleOvercaptureSource;	// IMP=0x000000000013a261
- (long long)toolControllerTag;	// IMP=0x000000000013a256
- (void)_cropToggleTapped:(id)arg1;	// IMP=0x000000000013a18f
- (void)_aspectButtonTapped:(id)arg1;	// IMP=0x0000000000139d30
- (void)_closeAspectRatioPicker;	// IMP=0x0000000000139c0c
- (void)_gridButtonTapped:(id)arg1;	// IMP=0x0000000000139aea
- (void)_flipButtonTapped:(id)arg1;	// IMP=0x0000000000139a00
- (void)_rotateButtonTapped:(id)arg1;	// IMP=0x0000000000139931
- (void)_rotateByApplyingOrientation:(long long)arg1;	// IMP=0x00000000001398b4
- (void)rotateAssetsClockwise:(id)arg1;	// IMP=0x000000000013989d
- (void)rotateAssetsCounterclockwise:(id)arg1;	// IMP=0x0000000000139886
- (void)editValuesCalculatorHasChangedGeometricValues:(id)arg1;	// IMP=0x000000000013983e
- (_Bool)installTogglePreviewGestureRecognizer:(id)arg1;	// IMP=0x0000000000139836
- (id)offlineKeyCommands;	// IMP=0x0000000000139824
- (id)trailingToolbarViews;	// IMP=0x0000000000139799
- (id)centerToolbarView;	// IMP=0x0000000000139787
- (id)leadingToolbarViews;	// IMP=0x00000000001396c8
- (_Bool)wantsSecondaryToolbarVisible;	// IMP=0x00000000001396c0
- (void)didResignActiveTool;	// IMP=0x0000000000139660
- (void)handleResigningCropTool;	// IMP=0x0000000000139259
- (void)prepareForSave:(_Bool)arg1;	// IMP=0x0000000000139241
- (void)willResignActiveTool;	// IMP=0x0000000000139001
- (void)didBecomeActiveTool;	// IMP=0x0000000000138fa9
- (void)_installRenderedImageAndDisplayIfNeeded;	// IMP=0x0000000000138def
- (void)_performInitialAction;	// IMP=0x0000000000138d89
- (void)willBecomeActiveTool;	// IMP=0x0000000000138aff
- (_Bool)canBecomeActiveTool;	// IMP=0x0000000000138ae8
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000138690
- (void)_setContentViewsHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000138465
- (void)_setContentViewsHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000138450
- (void)decreaseSliderValue:(_Bool)arg1;	// IMP=0x000000000013841f
- (void)increaseSliderValue:(_Bool)arg1;	// IMP=0x0000000000138402
- (_Bool)wantsSliderKeyControl;	// IMP=0x00000000001383fa
- (_Bool)supportsPreviewingOriginal;	// IMP=0x00000000001383f2
- (_Bool)handlesMediaViewInsets;	// IMP=0x00000000001383ea
- (_Bool)handlesVideoPlaying;	// IMP=0x00000000001383e2
- (_Bool)suppressesEditUpdates;	// IMP=0x00000000001383da
- (_Bool)wantsDefaultPreviewView;	// IMP=0x00000000001383c5
- (struct UIEdgeInsets)preferredPreviewViewInsets;	// IMP=0x00000000001383a6
- (void)resetToDefaultValueAnimated:(_Bool)arg1;	// IMP=0x0000000000138394
- (id)localizedResetToolActionTitle;	// IMP=0x0000000000138383
- (_Bool)canResetToDefaultValue;	// IMP=0x00000000001382c6
- (id)toolbarIcon;	// IMP=0x000000000013824d
- (id)localizedName;	// IMP=0x000000000013823c
- (void)prepareForToolTransitionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000013815b
- (void)cropTransformedImageViewDidEndTracking:(id)arg1;	// IMP=0x0000000000137f7b
- (void)cropTransformedImageViewDidTrack:(id)arg1;	// IMP=0x0000000000137e49
- (void)cropTransformedImageViewWillBeginTracking:(id)arg1;	// IMP=0x0000000000137c74
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000137c6c
- (void)updateVideoFrameWithScrubber;	// IMP=0x0000000000137ba5
- (void)videoScrubberViewInteractionDone;	// IMP=0x0000000000137b75
- (void)videoScrubberViewDidScrubTo:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000137b1c
- (void)showBadgeView:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000137a06
- (void)createVideoScrubber;	// IMP=0x0000000000137248
- (void)setAspectRatioLocked:(_Bool)arg1;	// IMP=0x000000000013712f
- (void)_aspectLockButtonTapped;	// IMP=0x0000000000137047
- (void)updateAspectRatioLockButton;	// IMP=0x0000000000136e7c
- (void)aspectRatioLockChanged;	// IMP=0x0000000000136e6a
- (void)updateCropAspectRatioOrientation:(long long)arg1;	// IMP=0x0000000000136cb3
- (void)_recomposeCropRectAnimated:(_Bool)arg1;	// IMP=0x0000000000136b4e
- (struct CGRect)_suggestedCropRectForImageRect:(struct CGRect)arg1;	// IMP=0x0000000000136a8b
- (struct CGRect)_cropCanvasFrame;	// IMP=0x0000000000136a25
- (struct CGPoint)_pointForHandle:(unsigned long long)arg1 onCropRect:(struct CGRect)arg2;	// IMP=0x0000000000136937
- (struct CGPoint)_pointForHandle:(unsigned long long)arg1;	// IMP=0x00000000001368d6
- (struct CGVector)_deltaMaskForHandle:(unsigned long long)arg1;	// IMP=0x000000000013689f
- (struct CGVector)_correctInputVector:(struct CGVector)arg1 forHandle:(unsigned long long)arg2 onCropRect:(struct CGRect)arg3 lockDirection:(_Bool)arg4;	// IMP=0x00000000001364f2
- (struct CGRect)_addHeight:(double)arg1 toRect:(struct CGRect)arg2 anchorTop:(_Bool)arg3;	// IMP=0x0000000000136409
- (struct CGRect)_addWidth:(double)arg1 toRect:(struct CGRect)arg2 anchorLeft:(_Bool)arg3;	// IMP=0x0000000000136320
- (struct CGRect)_cropRectFromPanningHandle:(unsigned long long)arg1 byAmount:(struct CGVector)arg2;	// IMP=0x000000000013596f
- (void)resetToolLabelHidingTimer;	// IMP=0x0000000000135826
- (void)showVideoScrubber:(_Bool)arg1;	// IMP=0x00000000001357c2
- (void)showToolLabel;	// IMP=0x00000000001357a6
- (struct CGVector)_applyAspectOfCropRect:(struct CGRect)arg1 toHandleMovement:(struct CGVector)arg2;	// IMP=0x000000000013569f
- (void)_handleCropHandlePan:(id)arg1;	// IMP=0x00000000001353ba
- (void)_handleTouchingGesture:(id)arg1;	// IMP=0x00000000001350ae
- (void)_cancelDelayedRecomposeCropRect;	// IMP=0x0000000000135088
- (void)_recomposeCropRectDelayed;	// IMP=0x0000000000135016
- (void)_autoRecomposeCropRect;	// IMP=0x0000000000134e91
- (_Bool)_needsRecomposeCropRect;	// IMP=0x0000000000134d7f
- (void)_showMaskedContentAndCancelDelayedHide;	// IMP=0x0000000000134d14
- (void)_hideMaskedContentDelayed;	// IMP=0x0000000000134c92
- (void)_hideMaskedContent;	// IMP=0x0000000000134c4e
- (void)_showGridAndCancelDelayedHide;	// IMP=0x0000000000134be3
- (void)_hideGridDelayed;	// IMP=0x0000000000134b61
- (void)_hideGrid;	// IMP=0x0000000000134b01
- (void)updateViewOrdering;	// IMP=0x00000000001348c9
- (void)_updateAspectRatioControls;	// IMP=0x0000000000134871
- (void)_updateCropViewsForInteraction;	// IMP=0x000000000013420f
- (void)_updateCropToggleButton;	// IMP=0x0000000000133eb8
- (void)_updateCropToggleButtonMode;	// IMP=0x0000000000133e4e
- (void)_updateOvercaptureSourceSwitchActivity;	// IMP=0x0000000000133ca4
- (void)_updateCropActionButtons;	// IMP=0x0000000000132fec
- (_Bool)_hasPerspectiveSuggestion;	// IMP=0x000000000013299b
- (void)_loadPerspectiveSuggestionIfNeeded;	// IMP=0x0000000000132922
- (void)_toggleCropAndPerspective;	// IMP=0x00000000001325e3
- (_Bool)_hasCropSuggestion;	// IMP=0x00000000001325a6
- (void)_applyReframeOrDynamicCrop;	// IMP=0x0000000000132380
- (void)_applyCropAndPerspectiveSuggestion;	// IMP=0x00000000001322e1
- (void)_applyCropRect:(struct CGRect)arg1 straightenAngle:(double)arg2 pitchAngle:(double)arg3 yawAngle:(double)arg4 isAutoCrop:(_Bool)arg5 isSmartCrop:(_Bool)arg6 isOriginalCrop:(_Bool)arg7;	// IMP=0x0000000000131db0
- (void)_autoApplyCropAndPerspectiveSuggestionIfNeeded;	// IMP=0x0000000000131c84
- (void)_loadCropSuggestionIfNeeded;	// IMP=0x0000000000131bba
- (void)basePhotoInvalidated;	// IMP=0x0000000000131b6e
- (void)baseMediaInvalidated;	// IMP=0x0000000000131b24
- (void)_resetAllValuesAnimated:(_Bool)arg1 skipLayerTransformUpdate:(_Bool)arg2;	// IMP=0x0000000000131671
- (void)_resetAllValuesAnimated:(_Bool)arg1;	// IMP=0x000000000013165d
- (struct CGRect)_defaultViewCropRect;	// IMP=0x00000000001315fd
- (struct CGRect)_defaultImageCropRect;	// IMP=0x000000000013159f
- (long long)_defaultOrientation;	// IMP=0x0000000000131594
- (double)_defaultYawAngle;	// IMP=0x000000000013158b
- (double)_defaultPitchAngle;	// IMP=0x0000000000131582
- (double)_defaultStraightenAngle;	// IMP=0x0000000000131579
- (_Bool)setLockedCropAspectIfNeededIgnoringCurrentLock:(_Bool)arg1;	// IMP=0x000000000013129d
- (void)_loadStateFromModelAnimated:(_Bool)arg1;	// IMP=0x0000000000131247
- (void)compositionControllerDidChangeForAdjustments:(id)arg1;	// IMP=0x0000000000131147
- (void)_updatePreviewViewInsets;	// IMP=0x0000000000130d05
- (id)_animateValueFromValue:(double)arg1 toValue:(double)arg2 interpolation:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000130b21
- (void)_setAnimationTarget:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x0000000000130966
- (id)_animationTargetForKeyPath:(id)arg1;	// IMP=0x00000000001308e3
- (void)_setAnimation:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x0000000000130841
- (id)_animationForKeyPath:(id)arg1;	// IMP=0x00000000001307be
- (void)_cancelAnimationForKeyPath:(id)arg1;	// IMP=0x000000000013073a
- (void)_setYawAngle:(double)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000130643
- (void)_setPitchAngle:(double)arg1 animated:(_Bool)arg2;	// IMP=0x000000000013054c
- (void)_setStraightenAngle:(double)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000130455
- (void)_setViewCropRect:(struct CGRect)arg1 animated:(_Bool)arg2;	// IMP=0x000000000013020e
- (void)_setCropAspect:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000012fd5f
- (void)_removeSnapshotView:(id)arg1;	// IMP=0x000000000012fba3
- (void)_performGeometryChange:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;	// IMP=0x000000000012f5ee
- (void)_handleRenderedVideoWithURL:(id)arg1 originalLivePhoto:(id)arg2 success:(_Bool)arg3 error:(id)arg4;	// IMP=0x000000000012f29c
- (void)_handleDidCreateEditedImage:(id)arg1 inputExtent:(struct CGRect)arg2;	// IMP=0x000000000012edd9
- (void)_setupCropModelFromCompositionController:(id)arg1;	// IMP=0x000000000012ec6e
- (void)_loadMediaIfNeeded;	// IMP=0x000000000012eacf
- (void)_loadImageIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000012e897
- (void)_createRendererIfNeeded;	// IMP=0x000000000012e79d
- (void)_updateRendererWithCurrentComposition;	// IMP=0x000000000012e675
- (_Bool)_overcaptureSourceUsed;	// IMP=0x000000000012e5f8
- (_Bool)_forceOvercaptureSourceForCrop;	// IMP=0x000000000012e4df
- (void)_performLocalCropModelChanges:(CDUnknownBlockType)arg1;	// IMP=0x000000000012e44d
- (void)_performLocalModelChanges:(CDUnknownBlockType)arg1;	// IMP=0x000000000012e2d7
- (void)setDelegate:(id)arg1;	// IMP=0x000000000012e25d
- (id)filter;	// IMP=0x000000000012e255
- (void)_updateCropToggleConstraintsIfNeeded;	// IMP=0x000000000012d771
- (void)_updateCropCanvasConstraintsIfNeeded;	// IMP=0x000000000012d2e3
- (_Bool)_hasConstraintsForKey:(id)arg1;	// IMP=0x000000000012d26c
- (void)_invalidateConstraintsForKey:(id)arg1;	// IMP=0x000000000012d1f4
- (void)_updateBadgeTextWithInfo:(id)arg1;	// IMP=0x000000000012d101
- (void)adjustmentsViewControllerSliderDidEndScrubbing:(id)arg1;	// IMP=0x000000000012d0c4
- (void)adjustmentsViewControllerSliderWillBeginScrubbing:(id)arg1;	// IMP=0x000000000012d082
- (void)adjustmentsViewControllerToolDidEndScrubbing:(id)arg1;	// IMP=0x000000000012d04b
- (void)adjustmentsViewControllerToolWillBeginScrubbing:(id)arg1;	// IMP=0x000000000012d014
- (void)adjustmentsViewControllerDidUpdateSelectedControl:(id)arg1;	// IMP=0x000000000012cf8b
- (void)setupWithAsset:(id)arg1 compositionController:(id)arg2 editSource:(id)arg3 overcaptureEditSource:(id)arg4 valuesCalculator:(id)arg5;	// IMP=0x000000000012cecb
- (void)updateViewConstraints;	// IMP=0x000000000012cdfa
- (void)viewDidLayoutSubviews;	// IMP=0x000000000012ca2e
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000012c96f
- (void)_layoutAdjustmentTools;	// IMP=0x000000000012c10a
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000012bf21
- (void)viewDidLoad;	// IMP=0x000000000012a8cb
- (void)dealloc;	// IMP=0x000000000012a84d
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000012a6d3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) PUCropToolControllerSpec *toolControllerSpec; // @dynamic toolControllerSpec;

@end

