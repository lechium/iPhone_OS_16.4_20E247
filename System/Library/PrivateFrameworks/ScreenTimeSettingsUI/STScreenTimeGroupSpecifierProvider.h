//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PSSpecifier;

__attribute__((visibility("hidden")))
@interface STScreenTimeGroupSpecifierProvider
{
    PSSpecifier *_usageSummarySpecifier;	// 8 = 0x8
    PSSpecifier *_seeAllActivitySpecifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008aca0
@property(readonly) PSSpecifier *seeAllActivitySpecifier; // @synthesize seeAllActivitySpecifier=_seeAllActivitySpecifier;
@property(readonly) PSSpecifier *usageSummarySpecifier; // @synthesize usageSummarySpecifier=_usageSummarySpecifier;
- (void)_showUsageDetailListController:(id)arg1;	// IMP=0x000000000008ab5e
- (id)_usageDetailsCoordinator:(id)arg1;	// IMP=0x000000000008ab0e
- (void)_hasWatchOSDevicesOnlyDidChange:(_Bool)arg1;	// IMP=0x000000000008aa72
- (void)_refreshingDidChange:(_Bool)arg1;	// IMP=0x000000000008a9e2
- (void)_displayNameDidChangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000008a909
- (void)_usageReportDidChangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000008a5b5
- (void)_screenTimeEnabledDidChange:(_Bool)arg1;	// IMP=0x000000000008a517
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000008a0c3
- (void)setCoordinator:(id)arg1;	// IMP=0x0000000000089f0e
- (id)init;	// IMP=0x0000000000089c98

@end
