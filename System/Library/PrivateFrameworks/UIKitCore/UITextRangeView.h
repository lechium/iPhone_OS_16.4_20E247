//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSMutableArray, NSString, UIPointerInteraction, UIResponder, UISelectionGrabber, UISelectionGrabberCustomPath, UITextRangeAdjustmentInteraction, UITextSelectionView, UITouch;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UITextRangeView : UIView
{
    UITextSelectionView *m_selectionView;	// 144 = 0x90
    UIResponder<UITextInput> *m_container;	// 152 = 0x98
    int m_mode;	// 160 = 0xa0
    NSArray *m_rects;	// 168 = 0xa8
    NSMutableArray *m_rectViews;	// 176 = 0xb0
    UITouch *m_activeTouch;	// 184 = 0xb8
    struct CGRect m_startEdge;	// 192 = 0xc0
    struct CGRect m_endEdge;	// 224 = 0xe0
    UIView *m_rectContainerView;	// 256 = 0x100
    UISelectionGrabber *m_startGrabber;	// 264 = 0x108
    UISelectionGrabber *m_endGrabber;	// 272 = 0x110
    _Bool m_animateUpdate;	// 280 = 0x118
    _Bool m_commandsWereShowing;	// 281 = 0x119
    _Bool m_willBeginMagnifying;	// 282 = 0x11a
    _Bool m_inGesture;	// 283 = 0x11b
    _Bool m_magnifying;	// 284 = 0x11c
    _Bool m_scrolling;	// 285 = 0x11d
    _Bool m_scaling;	// 286 = 0x11e
    _Bool m_rotating;	// 287 = 0x11f
    _Bool m_inputViewIsChanging;	// 288 = 0x120
    UIPointerInteraction *_pointerInteraction;	// 296 = 0x128
    _Bool m_isClearingRange;	// 304 = 0x130
    _Bool m_shouldStayVisible;	// 305 = 0x131
    UITextRangeAdjustmentInteraction *_adjustmentInteraction;	// 312 = 0x138
    UISelectionGrabberCustomPath *_startCustomPath;	// 320 = 0x140
    UISelectionGrabberCustomPath *_endCustomPath;	// 328 = 0x148
    struct CGPoint m_basePoint;	// 336 = 0x150
    struct CGPoint m_extentPoint;	// 352 = 0x160
    struct CGPoint m_initialExtentPoint;	// 368 = 0x170
    struct CGPoint _activeTouchPoint;	// 384 = 0x180
}

- (void).cxx_destruct;	// IMP=0x00000000011dc780
@property(retain, nonatomic) UISelectionGrabberCustomPath *endCustomPath; // @synthesize endCustomPath=_endCustomPath;
@property(retain, nonatomic) UISelectionGrabberCustomPath *startCustomPath; // @synthesize startCustomPath=_startCustomPath;
@property(retain, nonatomic) UITextRangeAdjustmentInteraction *adjustmentInteraction; // @synthesize adjustmentInteraction=_adjustmentInteraction;
@property(readonly, nonatomic) struct CGPoint activeTouchPoint; // @synthesize activeTouchPoint=_activeTouchPoint;
@property(nonatomic) _Bool shouldStayVisible; // @synthesize shouldStayVisible=m_shouldStayVisible;
@property(nonatomic) _Bool isClearingRange; // @synthesize isClearingRange=m_isClearingRange;
@property(nonatomic) _Bool inputViewIsChanging; // @synthesize inputViewIsChanging=m_inputViewIsChanging;
@property(nonatomic) _Bool rotating; // @synthesize rotating=m_rotating;
@property(nonatomic) _Bool scaling; // @synthesize scaling=m_scaling;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=m_scrolling;
@property(nonatomic) _Bool inGesture; // @synthesize inGesture=m_inGesture;
@property(nonatomic) _Bool magnifying; // @synthesize magnifying=m_magnifying;
@property(nonatomic) _Bool willBeginMagnifying; // @synthesize willBeginMagnifying=m_willBeginMagnifying;
@property(nonatomic) _Bool commandsWereShowing; // @synthesize commandsWereShowing=m_commandsWereShowing;
@property(nonatomic) _Bool animateUpdate; // @synthesize animateUpdate=m_animateUpdate;
@property(retain, nonatomic) UISelectionGrabber *endGrabber; // @synthesize endGrabber=m_endGrabber;
@property(retain, nonatomic) UISelectionGrabber *startGrabber; // @synthesize startGrabber=m_startGrabber;
@property(nonatomic) struct CGPoint initialExtentPoint; // @synthesize initialExtentPoint=m_initialExtentPoint;
@property(readonly, nonatomic) struct CGPoint extentPoint; // @synthesize extentPoint=m_extentPoint;
@property(readonly, nonatomic) struct CGPoint basePoint; // @synthesize basePoint=m_basePoint;
@property(nonatomic) struct CGRect endEdge; // @synthesize endEdge=m_endEdge;
@property(nonatomic) struct CGRect startEdge; // @synthesize startEdge=m_startEdge;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x00000000011dc483
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x00000000011dc336
@property(readonly, nonatomic) _Bool areSelectionRectsVisible;
- (struct CGPoint)convertFromMagnifierPoint:(struct CGPoint)arg1;	// IMP=0x00000000011dc114
- (struct CGPoint)magnifierPoint;	// IMP=0x00000000011dbef1
- (void)_cancelGrabberTransitionOutAnimations:(id)arg1;	// IMP=0x00000000011dbe02
- (void)updateGrabbers;	// IMP=0x00000000011dabfe
- (_Bool)shouldShowGrabbers;	// IMP=0x00000000011dabe6
- (_Bool)shouldHitTestGrabbers;	// IMP=0x00000000011dabac
- (_Bool)_endIsHorizontal;	// IMP=0x00000000011dab55
- (_Bool)_startIsHorizontal;	// IMP=0x00000000011daafe
- (void)updateRectViews;	// IMP=0x00000000011d9ded
- (struct CGRect)_selectionClipRect;	// IMP=0x00000000011d9d69
- (void)beginMagnifying;	// IMP=0x00000000011d9d04
- (void)animateHighlighterDelayedFadeInOnLayer:(id)arg1;	// IMP=0x00000000011d9aad
- (void)animateHighlighterExpanderOnLayer:(id)arg1 withOffset:(struct CGPoint)arg2;	// IMP=0x00000000011d94d5
- (void)animateHighlighterExpanderAnimation;	// IMP=0x00000000011d8e9d
@property(readonly, nonatomic) _Bool autoscrolled;
- (struct CGPoint)applyTouchOffset:(struct CGPoint)arg1;	// IMP=0x00000000011d8e18
- (_Bool)pointCloserToEnd:(struct CGPoint)arg1 startEdge:(struct CGRect)arg2 endEdge:(struct CGRect)arg3;	// IMP=0x00000000011d8dd8
- (void)cancelDelayedActions;	// IMP=0x00000000011d8dbc
- (void)_updateGrabbersVisibility:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000011d8c7d
- (void)stopAnimating;	// IMP=0x00000000011d8bf8
- (void)startAnimating;	// IMP=0x00000000011d8b6d
- (void)updateDots;	// IMP=0x00000000011d8a90
- (void)clearRangeAnimated:(_Bool)arg1;	// IMP=0x00000000011d87e0
- (void)inputViewDidChange;	// IMP=0x00000000011d87b0
- (void)inputViewWillChange;	// IMP=0x00000000011d877d
- (void)didRotate;	// IMP=0x00000000011d8741
- (void)willRotate;	// IMP=0x00000000011d870e
- (void)scaleDidChange;	// IMP=0x00000000011d86de
- (void)scaleWillChange;	// IMP=0x00000000011d86ab
- (void)didScroll;	// IMP=0x00000000011d867b
- (void)willScroll;	// IMP=0x00000000011d8648
- (void)doneMagnifying;	// IMP=0x00000000011d85a1
- (void)prepareForMagnification;	// IMP=0x00000000011d84fd
- (void)updateBaseAndExtentPointsFromEdges;	// IMP=0x00000000011d84e0
- (void)updateBaseIsStartWithDocumentPoint:(struct CGPoint)arg1;	// IMP=0x00000000011d83c4
@property(nonatomic) _Bool baseIsStart;
- (void)updateSelectionWithDocumentPoint:(struct CGPoint)arg1;	// IMP=0x00000000011d832c
@property(retain, nonatomic) NSArray *rects; // @synthesize rects=m_rects;
- (void)updateEdges;	// IMP=0x00000000011d768c
@property(readonly, nonatomic) UIResponder<UITextInput> *container;
@property(readonly, nonatomic) UITextSelectionView *selectionView;
@property(nonatomic) int mode; // @synthesize mode=m_mode;
- (void)updateAfterEffectiveModeChange;	// IMP=0x00000000011d75c7
- (id)containerCoordinateSpaceForTextRangeAdjustmentInteraction:(id)arg1;	// IMP=0x00000000011d753d
- (struct CGRect)caretRectForTextRangeAdjustmentInteraction:(id)arg1;	// IMP=0x00000000011d7495
- (void)textRangeAdjustmentInteractionWasCancelled:(id)arg1;	// IMP=0x00000000011d73f9
- (void)textRangeAdjustmentInteraction:(id)arg1 didEndAtPoint:(struct CGPoint)arg2;	// IMP=0x00000000011d735f
- (void)textRangeAdjustmentInteraction:(id)arg1 selectionMoved:(struct CGPoint)arg2 withTouchPoint:(struct CGPoint)arg3;	// IMP=0x00000000011d72d0
- (void)textRangeAdjustmentInteraction:(id)arg1 didBeginAtPoint:(struct CGPoint)arg2;	// IMP=0x00000000011d716f
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000011d6fd5
- (_Bool)_gestureRecognizerShouldReceiveTouch:(id)arg1;	// IMP=0x00000000011d6fc3
- (void)setMagnifierOrientation;	// IMP=0x00000000011d6f45
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000011d6e62
- (struct CGRect)_endEdgeHitRectWithPrecision:(unsigned long long)arg1;	// IMP=0x00000000011d6dc9
- (struct CGRect)_startEdgeHitRectWithPrecision:(unsigned long long)arg1;	// IMP=0x00000000011d6d30
- (struct CGRect)_edgeHitRectForEdgeRect:(struct CGRect)arg1 grabber:(id)arg2 precision:(unsigned long long)arg3;	// IMP=0x00000000011d6a44
- (void)removeFromSuperview;	// IMP=0x00000000011d68fc
- (id)initWithFrame:(struct CGRect)arg1 selectionView:(id)arg2;	// IMP=0x00000000011d66aa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

