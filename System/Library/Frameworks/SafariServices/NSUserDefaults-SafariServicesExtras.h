//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUserDefaults.h>

@interface NSUserDefaults (SafariServicesExtras)
+ (id)_sf_safariSharedDefaults;	// IMP=0x003000000003ba65
+ (id)_sf_sfAppDefaults;	// IMP=0x003000000003b9d1
+ (id)_sf_safariDefaults;	// IMP=0x003000000003b9b8
- (_Bool)_sf_passwordManagerIsInDemoMode;	// IMP=0x001000000003c2d0
- (void)_sf_setShouldAutomaticallyDownloadReadingListItems:(_Bool)arg1;	// IMP=0x001000000003c2b4
- (_Bool)_sf_shouldAutomaticallyDownloadReadingListItems;	// IMP=0x001000000003c26b
- (_Bool)_sf_warnAboutFraudulentWebsites;	// IMP=0x001000000003c223
- (_Bool)_sf_javaScriptCanOpenWindowsAutomatically;	// IMP=0x001000000003c1e4
- (_Bool)_sf_javaScriptEnabled;	// IMP=0x001000000003c06b
- (void)_sf_registerSafariDefaults;	// IMP=0x001000000003bb67
- (id)_sf_dateForKey:(id)arg1;	// IMP=0x001000000003bb07
- (id)_sf_stringForKey:(id)arg1 defaultValue:(id)arg2;	// IMP=0x001000000003ba7e
@end
