//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FRFavoritePickerDismissAnimationController, FRFavoritesPickerViewController, NSString;
@protocol FRFeldsparContext, TSFollowingEventTracker;

@interface FRFavoritesPickerLauncher : NSObject
{
    id <FRFeldsparContext> _feldsparContext;	// 8 = 0x8
    FRFavoritesPickerViewController *_favoritesPickerViewController;	// 16 = 0x10
    FRFavoritePickerDismissAnimationController *_dismissAnimationController;	// 24 = 0x18
    id <TSFollowingEventTracker> _eventTracker;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000951b8
@property(retain, nonatomic) id <TSFollowingEventTracker> eventTracker; // @synthesize eventTracker=_eventTracker;
@property(retain, nonatomic) FRFavoritePickerDismissAnimationController *dismissAnimationController; // @synthesize dismissAnimationController=_dismissAnimationController;
@property(retain, nonatomic) FRFavoritesPickerViewController *favoritesPickerViewController; // @synthesize favoritesPickerViewController=_favoritesPickerViewController;
@property(retain, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x001000000009513a
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x0010000000095132
- (void)_fireOnboardingCompletionEventWithTagsToSubscribe:(id)arg1 presentationReason:(long long)arg2;	// IMP=0x0010000000094dab
- (void);	// IMP=0x0010000000094793
- (id)createFavoritesPickerWithPresentingViewController:(id)arg1 pickerConfig:(id)arg2 sceneType:(long long)arg3 customButtonTitle:(id)arg4 reason:(long long)arg5 eventTracker:(id)arg6 dismissWhenDone:(_Bool)arg7;	// IMP=0x0010000000093ff2
- (id)createFavoritesPickerWithPresentingViewController:(id)arg1 sceneType:(long long)arg2 customButtonTitle:(id)arg3 reason:(long long)arg4 eventTracker:(id)arg5 dismissWhenDone:(_Bool)arg6;	// IMP=0x0010000000093fc2
- (id)createFavoritesPickerWithPresentingViewController:(id)arg1 pickerConfig:(id)arg2 reason:(long long)arg3 eventTracker:(id)arg4 dismissWhenDone:(_Bool)arg5;	// IMP=0x0010000000093f8f
- (id)initWithContext:(id)arg1;	// IMP=0x0010000000093f0a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

