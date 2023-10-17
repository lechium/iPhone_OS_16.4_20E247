//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MADService, NSObject, NSString, SSSScreenshot, UIActivity, UIView, VKCImageAnalysisInteraction, VKCImageAnalyzer, _SSSScreenshotContentOverlayController, _SSSScreenshotFullsizeStaticImageView;
@protocol OS_dispatch_queue, SSSScreenshotImageViewDelegate;

@interface _SSSScreenshotImageView
{
    _SSSScreenshotFullsizeStaticImageView *_imageView;	// 8 = 0x8
    MADService *_service;	// 16 = 0x10
    _Bool _useTrilinearMinificationFilter;	// 24 = 0x18
    _Bool _inhibitImageAnalysis;	// 25 = 0x19
    _Bool _hasOutstandingEdits;	// 26 = 0x1a
    int _currentInProcessRequestID;	// 28 = 0x1c
    id <SSSScreenshotImageViewDelegate> _delegate;	// 32 = 0x20
    _SSSScreenshotFullsizeStaticImageView *_cachedOutputImageView;	// 40 = 0x28
    VKCImageAnalyzer *_imageAnalyzer;	// 48 = 0x30
    unsigned long long _interactionMode;	// 56 = 0x38
    VKCImageAnalysisInteraction *_imageInteraction;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_analysisHelperQueue;	// 72 = 0x48
}

+ (void)_saveImageForSysdiagnose:(id)arg1;	// IMP=0x0020000000012581
+ (id)_createDirectoryForSysdiagnoseIfNecessary;	// IMP=0x00100000000124be
- (void).cxx_destruct;	// IMP=0x0020000000012932
@property(nonatomic) int currentInProcessRequestID; // @synthesize currentInProcessRequestID=_currentInProcessRequestID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *analysisHelperQueue; // @synthesize analysisHelperQueue=_analysisHelperQueue;
@property(retain, nonatomic) VKCImageAnalysisInteraction *imageInteraction; // @synthesize imageInteraction=_imageInteraction;
@property(nonatomic) _Bool hasOutstandingEdits; // @synthesize hasOutstandingEdits=_hasOutstandingEdits;
@property(nonatomic) _Bool inhibitImageAnalysis; // @synthesize inhibitImageAnalysis=_inhibitImageAnalysis;
@property(nonatomic) unsigned long long interactionMode; // @synthesize interactionMode=_interactionMode;
@property(retain, nonatomic) VKCImageAnalyzer *imageAnalyzer; // @synthesize imageAnalyzer=_imageAnalyzer;
@property(retain, nonatomic) _SSSScreenshotFullsizeStaticImageView *cachedOutputImageView; // @synthesize cachedOutputImageView=_cachedOutputImageView;
@property(nonatomic) _Bool useTrilinearMinificationFilter; // @synthesize useTrilinearMinificationFilter=_useTrilinearMinificationFilter;
@property(nonatomic) __weak id <SSSScreenshotImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setCachedViewsHidden:(_Bool)arg1;	// IMP=0x00100000000124a1
- (void)generateSnapshotImageIfNecessary:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012159
- (void)enterEditing;	// IMP=0x0010000000011ffe
- (void)imageAnalysisInteraction:(id)arg1 imageAnalysisButtonPressed:(id)arg2;	// IMP=0x0010000000011fec
- (void)imageAnalysisInteraction:(id)arg1 imageAnalysisBarItemPressed:(id)arg2;	// IMP=0x0010000000011fda
- (void)_updateInteractionModeFromAnalysisButtonPress;	// IMP=0x0010000000011f32
- (void)clearImageAnalysisTextSelection;	// IMP=0x0010000000011ef5
- (unsigned long long)feedbackTypeForImageAnalysisInteraction:(id)arg1;	// IMP=0x0010000000011eed
@property(readonly, nonatomic) UIActivity *visionKitFeedbackActivity;
- (struct CGRect)contentsRectForImageAnalysisInteraction:(id)arg1;	// IMP=0x0010000000011ddb
- (void)generatePersonIdResultsFromImage:(id)arg1;	// IMP=0x001000000001171c
- (void)analyzeCurrentImageIfNecessary;	// IMP=0x0010000000010e41
- (void)reanalyzeImage;	// IMP=0x0010000000010de7
@property(readonly, nonatomic) UIView *viewWithScreenshotImage;
@property(nonatomic) __weak SSSScreenshot *screenshot;
- (struct CGSize)intrinsicContentSize;	// IMP=0x0010000000010a5a
- (void)layoutSubviews;	// IMP=0x0010000000010694
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0010000000010642
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00100000000105f0
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0010000000010368
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000100cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) _SSSScreenshotContentOverlayController *overlayController;
@property(nonatomic) _Bool screenshotEditsSnapshotted;
@property(readonly) Class superclass;
@property(nonatomic) double vellumOpacity;

@end
