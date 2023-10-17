//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSpecifier.h>

@class CTXPCServiceSubscriptionContext, NSString, PSConfirmationSpecifier, PSListController, PSUICoreTelephonyCallCache, PSUICoreTelephonyCapabilitiesCache, PSUICoreTelephonyCarrierBundleCache;

__attribute__((visibility("hidden")))
@interface PSUIVoNRSwitchSpecifier : PSSpecifier
{
    CTXPCServiceSubscriptionContext *_subscriptionContext;	// 184 = 0xb8
    PSListController *_listController;	// 192 = 0xc0
    PSConfirmationSpecifier *_phoneCallWillEndWarning;	// 200 = 0xc8
    PSConfirmationSpecifier *_vonrUnoptimizedWarning;	// 208 = 0xd0
    PSUICoreTelephonyCallCache *_callCache;	// 216 = 0xd8
    PSUICoreTelephonyCapabilitiesCache *_capabilitiesCache;	// 224 = 0xe0
    PSUICoreTelephonyCarrierBundleCache *_carrierBundleCache;	// 232 = 0xe8
    PSSpecifier *_parentSpecifier;	// 240 = 0xf0
    NSString *_instance;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x0000000000023431
- (id)getLogger;	// IMP=0x0000000000023403
- (id)groupFooterText;	// IMP=0x000000000002338c
- (void)reloadSelfInListController;	// IMP=0x00000000000232ef
- (void)setVoNROff;	// IMP=0x00000000000232bf
- (void)setVoNROn;	// IMP=0x000000000002328c
- (void)setVoNREnabled:(_Bool)arg1;	// IMP=0x00000000000231a4
- (void)setUpVoNRUnoptimizedSpecifierIfNeeded;	// IMP=0x0000000000022d19
- (void)showVoNRUnoptimizedWarning;	// IMP=0x0000000000022c5b
- (_Bool)shouldShowVoNRUnoptimizedWarning;	// IMP=0x0000000000022c30
- (_Bool)showEnableVoNRWarningsIfNeeded;	// IMP=0x0000000000022bfc
- (void)setUpPhoneCallWillEndWarningSpecifier;	// IMP=0x000000000002283d
- (void)showPhoneCallWillEndWarning;	// IMP=0x000000000002277f
- (_Bool)shouldShowCallWillEndWarning;	// IMP=0x0000000000022762
- (_Bool)showDisableVoNRWarningsIfNeeded;	// IMP=0x000000000002272e
- (_Bool)showWarningsIfNeededForEnableState:(_Bool)arg1;	// IMP=0x000000000002270c
- (void)setVoNREnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000002261c
- (id)getVoNREnabled;	// IMP=0x000000000002251c
- (_Bool)shouldEnableVoNRSwitchCell;	// IMP=0x00000000000224d6
- (id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2;	// IMP=0x00000000000223e7
- (id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2 callCache:(id)arg3 capabilitiesCache:(id)arg4 carrierBundleCache:(id)arg5;	// IMP=0x000000000002211c

@end
