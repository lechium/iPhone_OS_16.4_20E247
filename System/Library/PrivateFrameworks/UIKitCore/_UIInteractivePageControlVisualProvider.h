//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class CADisplayLink, CAMediaTimingFunction, NSString, UIDelayedAction, UIImpactFeedbackGenerator, UILongPressGestureRecognizer, UISelectionFeedbackGenerator, UITapGestureRecognizer, UIViewFloatAnimatableProperty, UIVisualEffectView, _UIPageControlContentView, _UIPageControlIndicatorContentView, _UIPageControlInteractor, _UIPageIndicatorFeed, _UIPageIndicatorStore;

__attribute__((visibility("hidden")))
@interface _UIInteractivePageControlVisualProvider <UIGestureRecognizerDelegate>
{
    struct {
        unsigned int scrubbing:1;
        unsigned int platterExpanded:1;
        unsigned int didScrubPastInitialThreshold:1;
    } _state;	// 24 = 0x18
    long long _indicatorStartIndex;	// 32 = 0x20
    long long _numberOfVisibleIndicators;	// 40 = 0x28
    long long _targetPage;	// 48 = 0x30
    long long _currentTick;	// 56 = 0x38
    long long _tickThreshold;	// 64 = 0x40
    double _panDistance;	// 72 = 0x48
    double _indicatorPaddingOffset;	// 80 = 0x50
    double _continuousStartIndex;	// 88 = 0x58
    _UIPageControlContentView *_contentView;	// 96 = 0x60
    _UIPageControlIndicatorContentView *_indicatorContentView;	// 104 = 0x68
    UIVisualEffectView *_backgroundView;	// 112 = 0x70
    CADisplayLink *_displayLink;	// 120 = 0x78
    UITapGestureRecognizer *_tapGestureRecognizer;	// 128 = 0x80
    UILongPressGestureRecognizer *_scrubbingGestureRecognizer;	// 136 = 0x88
    UIDelayedAction *_successiveTapAction;	// 144 = 0x90
    long long _previousMoveDirection;	// 152 = 0x98
    _UIPageIndicatorFeed *_indicatorFeed;	// 160 = 0xa0
    _UIPageIndicatorStore *_indicatorStore;	// 168 = 0xa8
    _UIPageControlInteractor *_interactor;	// 176 = 0xb0
    UIViewFloatAnimatableProperty *_continuousDisplayedPage;	// 184 = 0xb8
    UIViewFloatAnimatableProperty *_scrubProgress;	// 192 = 0xc0
    CAMediaTimingFunction *_indicatorTransformCurve;	// 200 = 0xc8
    long long _resolvedDirection;	// 208 = 0xd0
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;	// 216 = 0xd8
    UIImpactFeedbackGenerator *_joggingFeedbackGenerator;	// 224 = 0xe0
    struct CGPoint _previousTouchLocation;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x00000000011b5db1
@property(retain, nonatomic) UIImpactFeedbackGenerator *joggingFeedbackGenerator; // @synthesize joggingFeedbackGenerator=_joggingFeedbackGenerator;
@property(retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator; // @synthesize selectionFeedbackGenerator=_selectionFeedbackGenerator;
@property(readonly, nonatomic) long long resolvedDirection; // @synthesize resolvedDirection=_resolvedDirection;
@property(retain, nonatomic) CAMediaTimingFunction *indicatorTransformCurve; // @synthesize indicatorTransformCurve=_indicatorTransformCurve;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *scrubProgress; // @synthesize scrubProgress=_scrubProgress;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *continuousDisplayedPage; // @synthesize continuousDisplayedPage=_continuousDisplayedPage;
@property(retain, nonatomic) _UIPageControlInteractor *interactor; // @synthesize interactor=_interactor;
@property(retain, nonatomic) _UIPageIndicatorStore *indicatorStore; // @synthesize indicatorStore=_indicatorStore;
@property(retain, nonatomic) _UIPageIndicatorFeed *indicatorFeed; // @synthesize indicatorFeed=_indicatorFeed;
@property(nonatomic) struct CGPoint previousTouchLocation; // @synthesize previousTouchLocation=_previousTouchLocation;
@property(nonatomic) long long previousMoveDirection; // @synthesize previousMoveDirection=_previousMoveDirection;
@property(retain, nonatomic) UIDelayedAction *successiveTapAction; // @synthesize successiveTapAction=_successiveTapAction;
@property(retain, nonatomic) UILongPressGestureRecognizer *scrubbingGestureRecognizer; // @synthesize scrubbingGestureRecognizer=_scrubbingGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) _UIPageControlIndicatorContentView *indicatorContentView; // @synthesize indicatorContentView=_indicatorContentView;
@property(retain, nonatomic) _UIPageControlContentView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool isPlatterExpanded;
@property(nonatomic) _Bool isScrubbing;
- (void)displayLinkTicked:(id)arg1;	// IMP=0x00000000011b4a9b
- (void)didScrubPageControl:(id)arg1;	// IMP=0x00000000011b4397
- (void)didTapPageControl:(id)arg1;	// IMP=0x00000000011b3c0c
- (void)resetSuccessiveTapInfo;	// IMP=0x00000000011b3bd1
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000011b3b43
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000011b3a5f
- (void)controlEventsGestureRecognizer:(id)arg1 recognizedControlEvent:(unsigned long long)arg2 withEvent:(id)arg3;	// IMP=0x00000000011b3a43
- (id)preferredActiveIndicatorImage;	// IMP=0x00000000011b3335
- (void)setPreferredActiveIndicatorImage:(id)arg1;	// IMP=0x00000000011b3252
- (void)setCustomActiveIndicatorImage:(id)arg1 forPage:(long long)arg2;	// IMP=0x00000000011b30cb
- (id)customActiveIndicatorImageForPage:(long long)arg1;	// IMP=0x00000000011b306c
- (id)preferredIndicatorImage;	// IMP=0x00000000011b301c
- (void)setPreferredIndicatorImage:(id)arg1;	// IMP=0x00000000011b2f39
- (void)setCustomIndicatorImage:(id)arg1 forPage:(long long)arg2;	// IMP=0x00000000011b2db2
- (id)customIndicatorImageForPage:(long long)arg1;	// IMP=0x00000000011b2d53
- (void)configureIndicator:(id)arg1 atPage:(long long)arg2;	// IMP=0x00000000011b2c4b
- (id)indicatorImageForPage:(long long)arg1;	// IMP=0x00000000011b2bd8
- (unsigned long long)maxVisibleIndicators;	// IMP=0x00000000011b2bb6
- (struct CGSize)indicatorSizeForImage:(id)arg1;	// IMP=0x00000000011b2b2e
- (struct CGRect)indicatorFrameForPage:(long long)arg1;	// IMP=0x00000000011b2a5c
- (struct CGSize)sizeForNumberOfPages:(long long)arg1;	// IMP=0x00000000011b27e3
- (void)invalidateIndicators;	// IMP=0x00000000011b264d
- (void)layoutSubviews;	// IMP=0x00000000011b01ef
- (void)setIndicatorOpacity:(double)arg1;	// IMP=0x00000000011b01d2
- (double)indicatorOpacity;	// IMP=0x00000000011b01b5
- (void)updateDisplayedPageToCurrentPage;	// IMP=0x00000000011afd4d
- (void)didUpdateCurrentPageIndicatorTintColor;	// IMP=0x00000000011afd1d
- (void)didUpdatePageIndicatorTintColor;	// IMP=0x00000000011af829
- (void)didUpdateInteractionTypeAvailability;	// IMP=0x00000000011af746
- (void)didUpdateCustomLayoutValues;	// IMP=0x00000000011af6cd
- (void)didUpdateBackgroundEffect;	// IMP=0x00000000011af596
- (void)didUpdateBackgroundStyle;	// IMP=0x00000000011af4f6
- (void)didUpdateNumberOfPages;	// IMP=0x00000000011af327
- (void)traitCollectionDidChangeOnSubtree:(id)arg1;	// IMP=0x00000000011af0e4
- (void)didUpdateLayoutDirection;	// IMP=0x00000000011aef88
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000011aec5a
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000011aec05
- (_Bool)shouldDisableTouchTracking;	// IMP=0x00000000011ae7bb
- (void)pruneArchivedSubviews:(id)arg1;	// IMP=0x00000000011ae749
- (void)prepare;	// IMP=0x00000000011add38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

