//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, AMSUIWebClientContext, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebBuyAction
{
    _Bool _legacyBuy;	// 8 = 0x8
    _Bool _makeCurrentAccount;	// 9 = 0x9
    _Bool _requiresAccount;	// 10 = 0xa
    ACAccount *_account;	// 16 = 0x10
    NSString *_buyParams;	// 24 = 0x18
    long long _type;	// 32 = 0x20
    NSString *_contentType;	// 40 = 0x28
    NSDictionary *_metricsOverlay;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000007e623
@property(retain, nonatomic) NSDictionary *metricsOverlay; // @synthesize metricsOverlay=_metricsOverlay;
@property(nonatomic) _Bool requiresAccount; // @synthesize requiresAccount=_requiresAccount;
@property(nonatomic) _Bool makeCurrentAccount; // @synthesize makeCurrentAccount=_makeCurrentAccount;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool legacyBuy; // @synthesize legacyBuy=_legacyBuy;
@property(retain, nonatomic) NSString *buyParams; // @synthesize buyParams=_buyParams;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)_runLegacyBuy;	// IMP=0x000000000007d694
- (id)_runBuyWithContentType:(id)arg1;	// IMP=0x000000000007cfbf
- (id)_runBuy;	// IMP=0x000000000007c775
- (id)_purchasePluginIdentifierForContentType:(id)arg1;	// IMP=0x000000000007c76d
- (id)purchaseContentWithType:(id)arg1;	// IMP=0x000000000007c274
- (void)_makeCurrentAccountIfNeeded:(id)arg1;	// IMP=0x000000000007c147
- (id)_iTunesAccount;	// IMP=0x000000000007c01e
- (void)purchase:(id)arg1 handleEngagementRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000007be0e
- (void)purchase:(id)arg1 handleDialogRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000007bd36
- (void)purchase:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000007bbbd
- (id)runAction;	// IMP=0x000000000007b620
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x000000000007b18b

// Remaining properties
@property(readonly, nonatomic) AMSUIWebClientContext *context;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
