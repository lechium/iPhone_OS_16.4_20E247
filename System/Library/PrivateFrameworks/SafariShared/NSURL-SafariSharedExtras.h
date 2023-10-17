//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (SafariSharedExtras)
+ (id)safari_aboutBlankURL;	// IMP=0x00200000000ada93
+ (id)safari_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;	// IMP=0x00200000000ad990
+ (id)safari_URLWithDataAsString:(id)arg1;	// IMP=0x00200000000ad96c
+ (id)safari_URLWithUserTypedString:(id)arg1;	// IMP=0x00200000000ad94d
- (_Bool)safari_isEqualToURL:(id)arg1;	// IMP=0x00100000000afd87
@property(readonly, nonatomic) _Bool safari_isSharedTabGroupURL;
@property(readonly, nonatomic) _Bool safari_isTelURL;
@property(readonly, nonatomic) _Bool safari_isJavaScriptURL;
@property(readonly, copy, nonatomic) NSString *safari_defaultStatusMessageString;
@property(readonly, copy, nonatomic) NSString *safari_mailtoURLStatusMessage;
@property(readonly, nonatomic) NSString *safari_stringForListDisplay;
- (id)safari_stringForListDisplayWithAdditionalSimplificationOptions:(unsigned long long)arg1;	// IMP=0x00100000000af563
- (id)safari_relativePathToURL:(id)arg1;	// IMP=0x00100000000af374
- (id)safari_wellKnownResponseCodeReliabilityURL;	// IMP=0x00100000000af2ac
@property(readonly, nonatomic) _Bool safari_isURLTooLongToDisplay;
- (id)safari_userVisibleStringConsideringLongURLs;	// IMP=0x00100000000af1ab
- (_Bool)safari_shouldBeAssociatedWithFaviconFromRedirectedURL:(id)arg1;	// IMP=0x00100000000aeea0
@property(readonly, nonatomic) _Bool safari_isTopLevelURL;
- (id)safari_URLWithUniqueFilename;	// IMP=0x00100000000aebaf
- (id)safari_userVisibleHostWithoutWWWSubdomain;	// IMP=0x00100000000aeb4b
@property(readonly, copy, nonatomic) NSString *safari_userVisibleHostOrExtensionDisplayName;
- (id)safari_userVisibleHost;	// IMP=0x00100000000aea72
- (id)safari_userVisibleString;	// IMP=0x00100000000aea68
- (id)safari_originalDataAsString;	// IMP=0x00100000000ae9f8
- (id)safari_displayNameWithTitle:(id)arg1;	// IMP=0x00100000000ae834
- (_Bool)safari_hasCharactersBeyondPath;	// IMP=0x00100000000ae797
@property(readonly, copy, nonatomic) NSString *safari_simplifiedURLStringForDeduping;
@property(readonly, nonatomic) NSURL *safari_canonicalURLForStartPage;
- (id)safari_URLByDeletingUserAndPassword;	// IMP=0x00100000000ae4ff
- (_Bool)safari_hasUserOrPassword;	// IMP=0x00100000000ae40f
- (id)safari_URLByReplacingHostWithString:(id)arg1;	// IMP=0x00100000000ae35b
@property(readonly, nonatomic) _Bool safari_isOTPAuthURL;
@property(readonly, nonatomic) _Bool safari_isEligibleToShowNotSecureWarning;
@property(readonly, nonatomic) _Bool safari_isEligibleToBeOpenedByServiceWorkers;
@property(readonly, nonatomic) _Bool safari_isLocalOrPrivateNetworkURL;
- (id)safari_URLByNormalizingSafariSpecificURL;	// IMP=0x00100000000ae082
@property(readonly, nonatomic) _Bool safari_isSafariSpecificURL;
@property(readonly, nonatomic) _Bool safari_isSafariExtensionURL;
@property(readonly, nonatomic) _Bool safari_isSafariWebExtensionURL;
@property(readonly, nonatomic) _Bool safari_isAboutBlankURL;
@property(readonly, nonatomic) _Bool safari_isSafariResourceURL;
@property(readonly, nonatomic) _Bool safari_isMailtoURL;
@property(readonly, nonatomic) _Bool safari_isBlobURL;
@property(readonly, nonatomic) _Bool safari_hasCustomScheme;
@property(readonly, nonatomic) _Bool safari_isDataURL;
@property(readonly, nonatomic) _Bool safari_isSecureURL;
@property(readonly, nonatomic) _Bool safari_isHTTPSURL;
@property(readonly, nonatomic) _Bool safari_isHTTPURL;
@property(readonly, nonatomic) _Bool safari_hasLocalScheme;
- (_Bool)safari_hasScheme:(id)arg1;	// IMP=0x00100000000adce2
@property(readonly, copy, nonatomic) NSString *safari_identityPreferenceDomain;
@property(readonly, nonatomic) NSString *safari_fileType;
- (id)safari_path;	// IMP=0x00100000000adab3
@end
