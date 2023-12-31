//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIActivityIndicatorView, UIButton, UILabel, UIView;

@interface HomeKitDeviceDetectedStartViewController
{
    UIButton *_dismissButton;	// 32 = 0x20
    UIButton *_setupButton;	// 40 = 0x28
    _Bool _settingUp;	// 48 = 0x30
    UIView *_progressView;	// 56 = 0x38
    UIActivityIndicatorView *_progressIndicator;	// 64 = 0x40
    UILabel *_progressLabel;	// 72 = 0x48
    int _testMode;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000001643a2
- (void)_restoreHomeApp;	// IMP=0x0010000000164241
- (void)_launchHomeApp;	// IMP=0x0010000000163fca
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x0010000000163d92
- (void)handleTapOutsideView:(id)arg1;	// IMP=0x0010000000163d0a
- (void)handleSetupButton:(id)arg1;	// IMP=0x0010000000163c20
- (void)handleDismissButton:(id)arg1;	// IMP=0x0010000000163b98
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0010000000163b15
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000163a91
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000001638ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

