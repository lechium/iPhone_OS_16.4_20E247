//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/WBSPerSitePreferenceManager.h>

@class NSString, WBSPerSitePreference, WBSPerSitePreferencesSQLiteStore;

__attribute__((visibility("hidden")))
@interface _SFAppInfoOverlayPreferenceManager : WBSPerSitePreferenceManager
{
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;	// 8 = 0x8
    WBSPerSitePreference *_appInfoOverlayPreference;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007899b
@property(readonly, nonatomic) WBSPerSitePreference *appInfoOverlayPreference; // @synthesize appInfoOverlayPreference=_appInfoOverlayPreference;
- (id)offValueForPreference:(id)arg1;	// IMP=0x000000000007897d
- (id)onValueForPreference:(id)arg1;	// IMP=0x0000000000078970
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1;	// IMP=0x000000000007893b
- (id)preferenceNameForPreference:(id)arg1;	// IMP=0x0000000000078927
@property(readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
- (id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;	// IMP=0x0000000000078844
- (id)valuesForPreference:(id)arg1;	// IMP=0x0000000000078837
- (id)preferences;	// IMP=0x00000000000787cc
- (long long)_defaultPreferenceValue;	// IMP=0x00000000000787c1
- (void)setAppInfoOverlayPreferenceForDomain:(id)arg1 settings:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000007871c
- (void)getAppInfoOverlayPreferenceForDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000785b0
- (id)initWithPerSitePreferencesStore:(id)arg1;	// IMP=0x00000000000784d3
- (id)init;	// IMP=0x00000000000784c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

