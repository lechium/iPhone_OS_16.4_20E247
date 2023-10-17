//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UISwipeActionController, _UIStatesFeedbackGenerator, _UISwipeActionPanGestureRecognizer, _UISwipeDismissalGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UISwipeHandler : NSObject <UIGestureRecognizerDelegate>
{
    struct {
        unsigned int didProcessBegan:1;
    } _flags;	// 8 = 0x8
    _UISwipeDismissalGestureRecognizer *_dismissalGestureRecognizer;	// 16 = 0x10
    _UISwipeActionPanGestureRecognizer *_swipeActionPanRecognizer;	// 24 = 0x18
    CDStruct_324b76a9 _currentSwipeConfig;	// 32 = 0x20
    unsigned long long _currentSwipeState;	// 64 = 0x40
    _Bool _resetSwipeWhileInitiating;	// 72 = 0x48
    double _initialTranslation;	// 80 = 0x50
    double _confirmationTranslationAdjustment;	// 88 = 0x58
    _Bool _active;	// 96 = 0x60
    _UIStatesFeedbackGenerator *_swipeFeedbackGenerator;	// 104 = 0x68
    UISwipeActionController *_swipeController;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000102c960
@property(nonatomic) __weak UISwipeActionController *swipeController; // @synthesize swipeController=_swipeController;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) _UIStatesFeedbackGenerator *swipeFeedbackGenerator; // @synthesize swipeFeedbackGenerator=_swipeFeedbackGenerator;
@property(readonly, nonatomic) unsigned long long currentSwipeState; // @synthesize currentSwipeState=_currentSwipeState;
- (void)_moveSwipedItemToOffset:(double)arg1 animated:(_Bool)arg2 usingSpringWithStiffness:(double)arg3 isTracking:(_Bool)arg4;	// IMP=0x000000000102c86b
- (CDStruct_b06b0113)_currentSwipeInfoWithTargetOffset:(double)arg1 animated:(_Bool)arg2 usingSpringWithStiffness:(double)arg3;	// IMP=0x000000000102c613
@property(readonly, nonatomic) CDStruct_324b76a9 currentSwipeConfig;
- (_Bool)_delegateWantsToDismissOnTouchDownForGestureRecognizer:(id)arg1;	// IMP=0x000000000102c540
- (void)_cancelExistingSwipe;	// IMP=0x000000000102c4b5
- (void)_cancelExistingSwipeForGestureBeganIfNecessary:(id)arg1;	// IMP=0x000000000102c442
- (void)resetSwipe;	// IMP=0x000000000102c40f
- (void)initiateSwipeWithDirection:(unsigned long long)arg1 configuration:(id)arg2 location:(struct CGPoint)arg3 userInitiated:(_Bool)arg4;	// IMP=0x000000000102c2ce
- (void)_swipeRecognizerEnded:(id)arg1 wasCancelled:(_Bool)arg2;	// IMP=0x000000000102bf7f
- (void)_swipeRecognizerChanged:(id)arg1;	// IMP=0x000000000102b8f7
- (void)_swipeRecognizerBegan:(id)arg1;	// IMP=0x000000000102b697
- (void)_swipeRecognizerDidRecognize:(id)arg1;	// IMP=0x000000000102b4d9
- (unsigned long long)_directionForGestureRecognizer:(id)arg1;	// IMP=0x000000000102b406
- (void)_dismissalRecognizerDidRecognize:(id)arg1;	// IMP=0x000000000102b3c3
- (_Bool)gestureRecognizerShouldDismissForTouchUp:(id)arg1;	// IMP=0x000000000102b305
- (_Bool)gestureRecognizerShouldDismissForTouchDown:(id)arg1;	// IMP=0x000000000102b2f3
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000102b176
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000000102b0bf
@property(readonly, nonatomic, getter=isInteracting) _Bool interacting;
- (void)dealloc;	// IMP=0x000000000102afcf
- (void)_setUp;	// IMP=0x000000000102ae25
- (id)initWithSwipeController:(id)arg1;	// IMP=0x000000000102ada8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
