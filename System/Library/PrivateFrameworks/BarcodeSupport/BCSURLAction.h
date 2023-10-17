//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BCSAction.h"

@class LSApplicationRecord, NSArray, NSURL;

__attribute__((visibility("hidden")))
@interface BCSURLAction : BCSAction
{
    NSArray *_appLinks;	// 8 = 0x8
    LSApplicationRecord *_userVisibleAppRecord;	// 16 = 0x10
    NSArray *_upiApplicationRecords;	// 24 = 0x18
    _Bool _deviceDataIsUnavailable;	// 32 = 0x20
    NSURL *_appStoreSearchURLForUnsupportedScheme;	// 40 = 0x28
    _Bool _hasPreferredAppLink;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000024b89
@property(readonly, nonatomic) _Bool hasPreferredAppLink; // @synthesize hasPreferredAppLink=_hasPreferredAppLink;
- (id)_passkeyRegistrationActionDescription;	// IMP=0x0000000000024b5a
- (id)_passkeyAssertionActionDescription;	// IMP=0x0000000000024b3b
- (_Bool)isPasskeyRegistrationAction;	// IMP=0x0000000000024b21
- (_Bool)isPasskeyAssertionAction;	// IMP=0x0000000000024b07
- (_Bool)isPasskeyAction;	// IMP=0x0000000000024ace
- (unsigned long long)menuElementsCount;	// IMP=0x00000000000249e8
- (id)menuElements;	// IMP=0x000000000002476d
- (id)_menuElementForActionPicker:(id)arg1;	// IMP=0x0000000000024637
- (id)contentPreviewString;	// IMP=0x000000000002456c
- (_Bool)isAMSAction;	// IMP=0x00000000000244d0
- (_Bool)_isVisualCode;	// IMP=0x000000000002447e
- (_Bool)_isCodeFromQRScanner;	// IMP=0x00000000000243ec
- (_Bool)_shouldBlockHandlingURL:(id)arg1;	// IMP=0x0000000000024376
- (_Bool)_shouldOpenInAppForAppLink:(id)arg1;	// IMP=0x0000000000024345
- (id)_actionDescriptionWithoutTargetApplicationForURL:(id)arg1;	// IMP=0x0000000000024272
- (id)_actionDescriptionForURL:(id)arg1 application:(id)arg2 shouldShowHostNameForSafariURL:(_Bool)arg3;	// IMP=0x0000000000023d76
- (id)_actionDescriptionForAppClip;	// IMP=0x0000000000023c00
- (id)preferredBundleID;	// IMP=0x0000000000023b91
@property(readonly, nonatomic) LSApplicationRecord *targetApplication;
- (void)_queryApplicationRecordForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002330d
- (void)_resolveTargetApplicationForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022f5d
@property(readonly, nonatomic) unsigned long long appLinkCount;
- (id)appLinks;	// IMP=0x0000000000022f2b
@property(readonly, nonatomic) _Bool mustOpenAppLinkInApp;
- (void)determineActionabilityWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022cc3
- (void)_resolveAppClipForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002278b
- (void)performAction;	// IMP=0x0000000000022740
- (void)performDefaultAction;	// IMP=0x000000000002272c
- (void)performDefaultActionWithFBOptions:(id)arg1;	// IMP=0x0000000000021e08
- (void)performActionWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021cc4
- (_Bool)hasSensitiveURL;	// IMP=0x0000000000021be1
- (id)_appclipLaunchReason;	// IMP=0x0000000000021a66
- (id)actionPickerItems;	// IMP=0x000000000002147b
- (id)_actionPickerItemsForUnlockedAppLinks;	// IMP=0x00000000000210d7
- (id)_actionPickerItemsForLockScreenVisibleApps;	// IMP=0x0000000000020e5b
- (id)actionIcon;	// IMP=0x0000000000020cb0
- (id)shortDescription;	// IMP=0x0000000000020a09
- (_Bool)_willOpenInSafari;	// IMP=0x0000000000020963
- (id)_actionPickerItemsForAppClip;	// IMP=0x000000000002084b
- (id)_additionalActionPickerItems;	// IMP=0x0000000000020631
- (id)_commonActionPickerItemsForURL;	// IMP=0x00000000000202d2
- (id)debugDescriptionExtraInfoDictionary;	// IMP=0x0000000000020198
- (id)defaultActionTargetApplicationBundleIdentifier;	// IMP=0x0000000000020148
- (id)localizedDefaultActionDescription;	// IMP=0x000000000001ffe0
- (id)localizedDefaultActionTitle;	// IMP=0x000000000001ffa2
- (_Bool)shouldRequireUserToPickTargetApp;	// IMP=0x000000000001ff62
- (id)url;	// IMP=0x000000000001ff12
- (id)urlThatCanBeOpened;	// IMP=0x000000000001ff00
- (id)initWithData:(id)arg1 codePayload:(id)arg2;	// IMP=0x000000000001fe4d

@end
