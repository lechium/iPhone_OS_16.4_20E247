//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKit/WKWebView.h>

@class NSString, UIView, UIViewController, _SFSecurityInfo;

@interface WKWebView (SafariServicesExtras)
@property(readonly, nonatomic) NSString *_sf_suggestedFilename;
- (void)_sf_saveUnsubmittedGeneratedPasswordAndRemoveFormMetadata;	// IMP=0x0020000000154751
- (void)_sf_applicationDidEnterBackgroundOrWillTerminate:(id)arg1;	// IMP=0x00200000001546b0
@property(copy, nonatomic, setter=webui_setLastGeneratedPasswordForCurrentBackForwardItem:) NSString *webui_lastGeneratedPasswordForCurrentBackForwardItem;
- (void)webui_removeFormMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id)arg1;	// IMP=0x0020000000154570
- (void)webui_setFormMetadata:(id)arg1 forLastPasswordGenerationOrSubmitEventInFrame:(id)arg2;	// IMP=0x0020000000154511
- (id)webui_formMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id)arg1;	// IMP=0x002000000015446d
@property(readonly, nonatomic) UIViewController *webui_presentingViewController;
@property(readonly, nonatomic) _Bool webui_privateBrowsingEnabled;
- (CDUnknownBlockType)webui_preventNavigationDuringAutoFillPrompt;	// IMP=0x0020000000154294
@property(retain, nonatomic, setter=_sf_setSecurityInfo:) _SFSecurityInfo *_sf_securityInfo;
@property(readonly, nonatomic) UIView *_sf_effectiveViewToLayOut;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
