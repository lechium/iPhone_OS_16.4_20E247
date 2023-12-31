//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIRedeemStepViewController.h"

@class NSString, NSURL, SKUIPassbookLoader, SKUIRedeemITunesPassLearnMoreView;

__attribute__((visibility("hidden")))
@interface SKUIRedeemITunesPassLearnMoreViewController : SKUIRedeemStepViewController
{
    _Bool _didTapAddPassbookButton;	// 8 = 0x8
    SKUIRedeemITunesPassLearnMoreView *_learnMoreView;	// 16 = 0x10
    SKUIPassbookLoader *_passbookLoader;	// 24 = 0x18
    NSURL *_passbookURL;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000feba1
- (void)_showErrorDialog;	// IMP=0x00000000000fea03
- (void)_loadPassbookURL;	// IMP=0x00000000000fe7e1
- (void)_loadPassbookPass;	// IMP=0x00000000000fe6e0
- (id)_existingPass;	// IMP=0x00000000000fe5fd
- (void)_didLoadPassbookURLString:(id)arg1;	// IMP=0x00000000000fe52a
- (void)_passButtonAction:(id)arg1;	// IMP=0x00000000000fe461
- (void)_doneButtonAction:(id)arg1;	// IMP=0x00000000000fe448
- (id)presentationViewControllerForPassbookLoader:(id)arg1;	// IMP=0x00000000000fe43f
- (void)passbookLoaderDidFinish:(id)arg1;	// IMP=0x00000000000fe301
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000fe190
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000fe141
- (void)loadView;	// IMP=0x00000000000fdf2c
- (void)dealloc;	// IMP=0x00000000000fde94
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000fde46

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

