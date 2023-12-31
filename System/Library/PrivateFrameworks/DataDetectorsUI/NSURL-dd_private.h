//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (dd_private)
+ (id)dd_URLWithPotentiallyInvalidURLString:(id)arg1;	// IMP=0x0050000000047b8f
- (_Bool)dd_previewActionSupported;	// IMP=0x001000000002581f
- (id)dd_productIdentifierFromAppleStoreScheme;	// IMP=0x00100000000256bb
- (id)dd_emailFromValidSchemes:(id)arg1;	// IMP=0x0010000000025589
- (id)dd_phoneNumberFromValidSchemes:(id)arg1;	// IMP=0x001000000002544e
- (id)dd_rdarLinkFromTelScheme;	// IMP=0x0010000000025320
- (id)dd_emailFromFacetimeScheme;	// IMP=0x0010000000025309
- (id)dd_phoneNumberFromFacetimeScheme;	// IMP=0x00100000000252f5
- (id)dd_handleFromFacetimeSchemeFilteringForEmail:(_Bool)arg1;	// IMP=0x001000000002512c
- (id)dd_emailFromMailtoScheme;	// IMP=0x0010000000024fe4
- (id)dd_phoneNumberFromTelSchemeAndExtractBody:(id *)arg1;	// IMP=0x001000000002458a
- (id)dd_emailFromTelScheme;	// IMP=0x0010000000024520
- (id)dd_phoneNumberFromTelScheme;	// IMP=0x00100000000244b6
- (_Bool)dd_isCloudLink;	// IMP=0x0010000000024483
- (_Bool)dd_isAppleStore;	// IMP=0x00100000000243b0
- (_Bool)dd_isAppleTV;	// IMP=0x00100000000242ea
- (_Bool)dd_isApplePodcasts;	// IMP=0x0010000000024224
- (_Bool)dd_isAppleMusic;	// IMP=0x001000000002415e
- (_Bool)dd_isAppleBooks;	// IMP=0x0010000000024098
- (_Bool)dd_isAppleApps;	// IMP=0x0010000000024023
- (_Bool)dd_isAppleiTunesStore;	// IMP=0x0010000000023f75
- (id)dd_AppleOtherSchemes;	// IMP=0x0010000000023f68
- (id)dd_AppleiTunesSchemes;	// IMP=0x0010000000023f5b
- (_Bool)dd_hasHosts:(id)arg1 filterKey:(id)arg2 filterValue:(id)arg3;	// IMP=0x0010000000023d30
- (_Bool)dd_isAnySimpleTelephonyScheme;	// IMP=0x0010000000023cbb
- (_Bool)dd_isMaps:(_Bool)arg1 isDirections:(_Bool *)arg2;	// IMP=0x001000000002392d
- (_Bool)dd_isMaps:(_Bool)arg1;	// IMP=0x0010000000023919
- (id)dd_formattedPhoneNumber;	// IMP=0x0010000000025a94
@end

