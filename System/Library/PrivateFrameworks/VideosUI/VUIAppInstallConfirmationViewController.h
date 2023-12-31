//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIBarButtonItem, UIButton, VUIAppInstallConfirmationView, VUIAppInstallLockup;
@protocol WLKInstallable;

__attribute__((visibility("hidden")))
@interface VUIAppInstallConfirmationViewController
{
    NSString *_updateTitle;	// 8 = 0x8
    NSString *_updateMessage;	// 16 = 0x10
    CDUnknownBlockType _cancelationHandler;	// 24 = 0x18
    CDUnknownBlockType _actionHandler;	// 32 = 0x20
    CDUnknownBlockType _appStoreHandler;	// 40 = 0x28
    CDUnknownBlockType _secondaryLinkHandler;	// 48 = 0x30
    unsigned long long _state;	// 56 = 0x38
    UIBarButtonItem *_barButtonItem;	// 64 = 0x40
    VUIAppInstallConfirmationView *_confirmationView;	// 72 = 0x48
    id <WLKInstallable> _installable;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000009abb3
@property(retain, nonatomic) id <WLKInstallable> installable; // @synthesize installable=_installable;
@property(retain, nonatomic) VUIAppInstallConfirmationView *confirmationView; // @synthesize confirmationView=_confirmationView;
@property(retain, nonatomic) UIBarButtonItem *barButtonItem; // @synthesize barButtonItem=_barButtonItem;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType secondaryLinkHandler; // @synthesize secondaryLinkHandler=_secondaryLinkHandler;
@property(copy, nonatomic) CDUnknownBlockType appStoreHandler; // @synthesize appStoreHandler=_appStoreHandler;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(copy, nonatomic) CDUnknownBlockType cancelationHandler; // @synthesize cancelationHandler=_cancelationHandler;
- (id)_namedRatingWithRatings:(id)arg1;	// IMP=0x000000000009aa1b
- (id)_fileSizeWithDeviceSizes:(id)arg1;	// IMP=0x000000000009a8a9
- (void)_fetchStoreInfoForAdamID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000009a56e
- (void)_fetchAppInfo;	// IMP=0x0000000000099a60
- (void)_handleSecondaryLink;	// IMP=0x0000000000099a46
- (void)_handleAppStore;	// IMP=0x0000000000099932
- (void)_handleCancel;	// IMP=0x0000000000099814
- (void)_handleAction;	// IMP=0x000000000009970e
- (void)loadView;	// IMP=0x0000000000099432
- (void)setInstallingState;	// IMP=0x00000000000991ed
- (void)setPreInstallState;	// IMP=0x0000000000099015
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000098ef8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000098d29
@property(readonly, nonatomic) UIButton *actionButton;
@property(readonly, nonatomic) VUIAppInstallLockup *lockup;
- (void)setSecondaryLinkTitle:(id)arg1;	// IMP=0x0000000000098c73
- (void)setUpdateTitle:(id)arg1;	// IMP=0x0000000000098c5f
- (void)setUpdateMessage:(id)arg1;	// IMP=0x0000000000098c4b
- (void)setMessage:(id)arg1;	// IMP=0x0000000000098c2e
- (void)setTitle:(id)arg1;	// IMP=0x0000000000098b7c
- (id)initWithInstallable:(id)arg1;	// IMP=0x0000000000098a74
- (id)init;	// IMP=0x0000000000098a35

@end

