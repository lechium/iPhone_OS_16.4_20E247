//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIPercentDrivenInteractiveTransition.h"

@class NSDictionary, NSMutableDictionary, NSString, UIInteractionProgress, _UIStatesFeedbackGenerator;
@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _UIPreviewTransitionController : UIPercentDrivenInteractiveTransition
{
    UIInteractionProgress *_interactionProgress;	// 8 = 0x8
    unsigned long long _targetPresentationPhase;	// 16 = 0x10
    NSDictionary *_viewsParticipatingInCommitTransition;	// 24 = 0x18
    _UIStatesFeedbackGenerator *_feedbackGenerator;	// 32 = 0x20
    NSMutableDictionary *_animationsByPresentationPhase;	// 40 = 0x28
    id <UIViewControllerContextTransitioning> _transitionContext;	// 48 = 0x30
}

+ (id)performCommitTransitionWithDelegate:(id)arg1 forViewController:(id)arg2 previewViewController:(id)arg3 previewInteractionController:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000dd7d1d
- (void).cxx_destruct;	// IMP=0x0000000000dd859f
@property(nonatomic) __weak id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(retain, nonatomic) NSMutableDictionary *animationsByPresentationPhase; // @synthesize animationsByPresentationPhase=_animationsByPresentationPhase;
@property(retain, nonatomic) _UIStatesFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(retain, nonatomic) NSDictionary *viewsParticipatingInCommitTransition; // @synthesize viewsParticipatingInCommitTransition=_viewsParticipatingInCommitTransition;
@property(nonatomic) unsigned long long targetPresentationPhase; // @synthesize targetPresentationPhase=_targetPresentationPhase;
@property(retain, nonatomic) UIInteractionProgress *interactionProgress; // @synthesize interactionProgress=_interactionProgress;
- (void)_completeAnimationWithPresentationPhase:(unsigned long long)arg1 finished:(_Bool)arg2;	// IMP=0x0000000000dd7bac
- (void)_layoutForPresentationPhase:(unsigned long long)arg1;	// IMP=0x0000000000dd7ae6
- (void)_animateCommitTransition:(id)arg1;	// IMP=0x0000000000dd6b23
- (void)_animateDismissTransition:(id)arg1;	// IMP=0x0000000000dd69c7
- (void)_animatePreviewTransition:(id)arg1;	// IMP=0x0000000000dd6821
- (void)_animateRevealTransition:(id)arg1;	// IMP=0x0000000000dd66cb
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;	// IMP=0x0000000000dd65f4
- (void)interactionProgressDidUpdate:(id)arg1;	// IMP=0x0000000000dd6563
- (void)animationEnded:(_Bool)arg1;	// IMP=0x0000000000dd64f2
- (void)finishInteractiveTransition;	// IMP=0x0000000000dd6492
- (void)cancelInteractiveTransition;	// IMP=0x0000000000dd6463
- (void)updateInteractiveTransition:(double)arg1;	// IMP=0x0000000000dd6434
- (void)startInteractiveTransition:(id)arg1;	// IMP=0x0000000000dd637b
- (void)animateTransition:(id)arg1;	// IMP=0x0000000000dd627d
- (double)transitionDuration:(id)arg1;	// IMP=0x0000000000dd626f
- (void)setAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 forPresentationPhase:(unsigned long long)arg3;	// IMP=0x0000000000dd611e
- (id)init;	// IMP=0x0000000000dd6115
- (id)initWithInteractionProgress:(id)arg1 targetPresentationPhase:(unsigned long long)arg2;	// IMP=0x0000000000dd5fc3

// Remaining properties
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionSpeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end

