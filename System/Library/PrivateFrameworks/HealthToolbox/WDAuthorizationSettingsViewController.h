//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKAuthorizationSettingsViewController.h>

@class WDProfile;

__attribute__((visibility("hidden")))
@interface WDAuthorizationSettingsViewController : HKAuthorizationSettingsViewController
{
    WDProfile *_profile;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000733e8
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000007319f
- (id)specialCellWithIdentifier:(id)arg1 textLabelText:(id)arg2;	// IMP=0x00000000000730af
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000072ee6
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000072e67
- (id)sectionsForAuthController:(id)arg1;	// IMP=0x0000000000072d65
- (void)_applicationWillEnterForeground;	// IMP=0x0000000000072d53
- (id)initWithProfile:(id)arg1 style:(long long)arg2;	// IMP=0x0000000000072c69

@end

