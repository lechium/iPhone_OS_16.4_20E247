//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, STIntroductionViewModel, UINavigationController, UIViewController, _TtC20ScreenTimeSettingsUI23SettingsPresetViewModel;
@protocol STContentPrivacyViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STIntroductionController : NSObject
{
    _Bool _updateExistingSettings;	// 8 = 0x8
    _Bool _skipAppLimitsPane;	// 9 = 0x9
    _Bool _showCommunicationSafetyPane;	// 10 = 0xa
    _Bool _allowParentalControls;	// 11 = 0xb
    _Bool _forceParentalControls;	// 12 = 0xc
    _Bool _askForRecoveryAppleID;	// 13 = 0xd
    _Bool _childOrNotSignedIntoiCloud;	// 14 = 0xe
    _Bool _isModalPresentation;	// 15 = 0xf
    NSString *_childName;	// 16 = 0x10
    CDUnknownBlockType _completionBlock;	// 24 = 0x18
    NSNumber *_childAge;	// 32 = 0x20
    NSString *_altDSID;	// 40 = 0x28
    NSNumber *_dsid;	// 48 = 0x30
    NSObject<STContentPrivacyViewModelCoordinator> *_contentPrivacyCoordinator;	// 56 = 0x38
    STIntroductionViewModel *_introductionModel;	// 64 = 0x40
    UINavigationController *_navigationController;	// 72 = 0x48
    _TtC20ScreenTimeSettingsUI23SettingsPresetViewModel *_settingsPresetViewModel;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000006c391
@property(retain, nonatomic) _TtC20ScreenTimeSettingsUI23SettingsPresetViewModel *settingsPresetViewModel; // @synthesize settingsPresetViewModel=_settingsPresetViewModel;
@property(retain) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) _Bool isModalPresentation; // @synthesize isModalPresentation=_isModalPresentation;
@property(readonly) STIntroductionViewModel *introductionModel; // @synthesize introductionModel=_introductionModel;
@property(readonly) NSObject<STContentPrivacyViewModelCoordinator> *contentPrivacyCoordinator; // @synthesize contentPrivacyCoordinator=_contentPrivacyCoordinator;
@property(readonly, copy) NSNumber *dsid; // @synthesize dsid=_dsid;
@property(readonly, copy) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(readonly, copy) NSNumber *childAge; // @synthesize childAge=_childAge;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy) NSString *childName; // @synthesize childName=_childName;
@property(getter=isChildOrNotSignedIntoiCloud) _Bool childOrNotSignedIntoiCloud; // @synthesize childOrNotSignedIntoiCloud=_childOrNotSignedIntoiCloud;
@property _Bool askForRecoveryAppleID; // @synthesize askForRecoveryAppleID=_askForRecoveryAppleID;
@property _Bool forceParentalControls; // @synthesize forceParentalControls=_forceParentalControls;
@property _Bool allowParentalControls; // @synthesize allowParentalControls=_allowParentalControls;
@property _Bool showCommunicationSafetyPane; // @synthesize showCommunicationSafetyPane=_showCommunicationSafetyPane;
@property _Bool skipAppLimitsPane; // @synthesize skipAppLimitsPane=_skipAppLimitsPane;
@property _Bool updateExistingSettings; // @synthesize updateExistingSettings=_updateExistingSettings;
- (id)_viewControllerFollowingViewController:(id)arg1;	// IMP=0x000000000006b99b
- (void)_endIntroductionFlowWithEnablingScreenTime;	// IMP=0x000000000006b8f6
- (void)_endIntroductionFlowWithoutEnablingScreenTime;	// IMP=0x000000000006b82c
- (void)_viewControllerCompleted:(id)arg1;	// IMP=0x000000000006b6a8
@property(readonly) UIViewController *initialViewController;
- (void)presentOverViewController:(id)arg1;	// IMP=0x000000000006b509
- (id)initWithDSID:(id)arg1 childAge:(id)arg2 childName:(id)arg3 updateExistingSettings:(_Bool)arg4 contentPrivacyCoordinator:(id)arg5;	// IMP=0x000000000006b2d8

@end
