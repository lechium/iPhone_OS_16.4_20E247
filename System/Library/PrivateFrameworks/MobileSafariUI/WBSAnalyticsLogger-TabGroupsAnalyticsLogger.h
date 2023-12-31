//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/WBSAnalyticsLogger.h>

@interface WBSAnalyticsLogger (TabGroupsAnalyticsLogger)
- (void)schedulePeriodicTabGroupsReport;	// IMP=0x00900000000119eb
- (void)_performTabsForNonTabGroupUserReport;	// IMP=0x0090000000011496
- (void)_performTabGroupsReport;	// IMP=0x009000000001109b
- (void)_tabGroupsAnalyticsLogger_updatePeriodicCoreAnalyticsLastReportTime;	// IMP=0x009000000001104b
- (void)schedulePeriodicPrivateBrowsingReport;	// IMP=0x00900000001a0c86
- (void)_performPrivateBrowsingReport;	// IMP=0x00900000001a0a62
- (void)schedulePeriodicStandaloneTabBarReport;	// IMP=0x00900000001b262e
- (void)_performStandaloneTabBarReport;	// IMP=0x00900000001b259f
- (void)_standaloneTabBarAnalyticsLogger_updatePeriodicCoreAnalyticsLastReportTime;	// IMP=0x00900000001b254f
@end

