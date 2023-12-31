//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class FCChannelPickerConfig, FRGenericIntroductionScene, FROnboardingCardViewController, FROnboardingCardViewControllerDataManager, NSString;

@interface FRFavoritesPickerViewController : UIViewController
{
    _Bool _shouldSaveOnDismiss;	// 8 = 0x8
    FRGenericIntroductionScene *_favoritesPickerScene;	// 16 = 0x10
    FROnboardingCardViewController *_cardViewController;	// 24 = 0x18
    FROnboardingCardViewControllerDataManager *_cardDataManager;	// 32 = 0x20
    long long _sceneType;	// 40 = 0x28
    FCChannelPickerConfig *_pickerConfig;	// 48 = 0x30
    NSString *_customButtonTitle;	// 56 = 0x38
    CDUnknownBlockType _completionBlock;	// 64 = 0x40
    struct CGPoint _initialTitleCenter;	// 72 = 0x48
    struct CGPoint _initialBodyCenter;	// 88 = 0x58
}

+ (id)viewControllerWithContentContext:(id)arg1 pickerConfig:(id)arg2 subscriptionList:(id)arg3 bundleSubscriptionManager:(id)arg4 feedManager:(id)arg5 tagRanker:(id)arg6 didTapOnItem:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00200000000700f4
+ (id)viewControllerWithContentContext:(id)arg1 sceneType:(long long)arg2 customButtonTitle:(id)arg3 subscriptionList:(id)arg4 bundleSubscriptionManager:(id)arg5 feedManager:(id)arg6 tagRanker:(id)arg7 didTapOnItem:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x001000000006ff51
- (void).cxx_destruct;	// IMP=0x0020000000071879
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) NSString *customButtonTitle; // @synthesize customButtonTitle=_customButtonTitle;
@property(retain, nonatomic) FCChannelPickerConfig *pickerConfig; // @synthesize pickerConfig=_pickerConfig;
@property(nonatomic) long long sceneType; // @synthesize sceneType=_sceneType;
@property(nonatomic) struct CGPoint initialBodyCenter; // @synthesize initialBodyCenter=_initialBodyCenter;
@property(nonatomic) struct CGPoint initialTitleCenter; // @synthesize initialTitleCenter=_initialTitleCenter;
@property(retain, nonatomic) FROnboardingCardViewControllerDataManager *cardDataManager; // @synthesize cardDataManager=_cardDataManager;
@property(nonatomic) __weak FROnboardingCardViewController *cardViewController; // @synthesize cardViewController=_cardViewController;
@property(nonatomic) __weak FRGenericIntroductionScene *favoritesPickerScene; // @synthesize favoritesPickerScene=_favoritesPickerScene;
@property(nonatomic) _Bool shouldSaveOnDismiss; // @synthesize shouldSaveOnDismiss=_shouldSaveOnDismiss;
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x00100000000716b6
- (void)introductionSceneDidLayout:(id)arg1;	// IMP=0x00100000000715d6
- (void)introductionSceneWantsToContinue:(id)arg1;	// IMP=0x0010000000071472
- (void)introductionSceneWantsToSkip:(id)arg1;	// IMP=0x00100000000713fd
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000071354
- (void)_updateOffsets;	// IMP=0x00100000000710eb
- (void)_updatePickerElementsForSize:(struct CGSize)arg1;	// IMP=0x0010000000070de9
- (void)_layoutForSize:(struct CGSize)arg1;	// IMP=0x0010000000070d08
- (void)viewWillLayoutSubviews;	// IMP=0x0010000000070c61
- (void)dealloc;	// IMP=0x0010000000070bc6
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000070a0e
- (void)viewDidLoad;	// IMP=0x0010000000070334

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

