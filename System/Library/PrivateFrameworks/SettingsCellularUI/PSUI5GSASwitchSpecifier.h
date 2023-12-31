//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSpecifier.h>

@class CTNRStatus, CTXPCServiceSubscriptionContext, NSString, PSConfirmationSpecifier, PSListController, PSUICoreTelephonyCarrierBundleCache;

__attribute__((visibility("hidden")))
@interface PSUI5GSASwitchSpecifier : PSSpecifier
{
    CTXPCServiceSubscriptionContext *_subscriptionContext;	// 184 = 0xb8
    PSListController *_listController;	// 192 = 0xc0
    PSUICoreTelephonyCarrierBundleCache *_carrierBundleCache;	// 200 = 0xc8
    PSConfirmationSpecifier *_enableSAAlert;	// 208 = 0xd0
    CTNRStatus *_nrStatus;	// 216 = 0xd8
    NSString *_instance;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x0000000000078ee5
- (id)getLogger;	// IMP=0x0000000000078eb7
- (void)refreshSpecifiersInHostController;	// IMP=0x0000000000078e20
- (void)checkNRStatusAndDisableIfNeeded;	// IMP=0x0000000000078d75
- (_Bool)shouldAddCoverageExtensionFooterText;	// IMP=0x0000000000078d11
- (id)groupFooterText;	// IMP=0x00000000000789ad
- (void)set5GSAEnabled:(_Bool)arg1;	// IMP=0x0000000000078814
- (void)disable5GSA;	// IMP=0x0000000000078800
- (void)enable5GSA;	// IMP=0x00000000000787e9
- (void)setUp5GSAAlertSpecifierIfNeeded;	// IMP=0x000000000007835e
- (void)show5GStandaloneExperimentalAlert;	// IMP=0x00000000000782a0
- (void)set5GSASwitch:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000078188
- (id)is5GSAEnabled;	// IMP=0x0000000000078107
- (id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2 carrierBundleCache:(id)arg3;	// IMP=0x0000000000077f09

@end

