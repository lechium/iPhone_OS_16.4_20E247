//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASCAuthorizationPresentationContext, NSString;

__attribute__((visibility("hidden")))
@interface ASCredentialRequestCABLEConsentViewController
{
    ASCAuthorizationPresentationContext *_presentationContext;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002e0f8
@property(readonly, nonatomic) ASCAuthorizationPresentationContext *presentationContext; // @synthesize presentationContext=_presentationContext;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000002e0d5
- (id)_titleText;	// IMP=0x000000000002e001
- (void)_continueButtonPressed;	// IMP=0x000000000002dfb5
- (void)_addHeaderSpacerViewWithCustomSpacingAfter:(double)arg1;	// IMP=0x000000000002deb2
- (void)_setUpContinueButton;	// IMP=0x000000000002dd8f
- (void)_setUpTitleView;	// IMP=0x000000000002dcdf
- (void)_setUpIconView;	// IMP=0x000000000002dc33
- (long long)numberOfTableRows;	// IMP=0x000000000002dc2b
- (void)viewDidLoad;	// IMP=0x000000000002db2a
- (id)initWithPresentationContext:(id)arg1;	// IMP=0x000000000002daa4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
