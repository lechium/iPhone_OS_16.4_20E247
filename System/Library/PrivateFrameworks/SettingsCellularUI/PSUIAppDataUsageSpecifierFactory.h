//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PSBillingPeriodSelectorSpecifier, PSCellularManagementCache, PSDataUsageStatisticsCache, PSListController, PSUICallTimeGroup, PSUICarrierSpaceManager, PSUICellularUsageContentSpecifiers, PSUIResetStatisticsGroup, PSUITotalCellularUsageSubgroup;
@protocol PSAppCellularUsageSpecifierDelegate, PSBillingPeriodSelectorSpecifierDelegate, PSUIResetStatisticsGroupDelegate;

__attribute__((visibility("hidden")))
@interface PSUIAppDataUsageSpecifierFactory : NSObject
{
    PSCellularManagementCache *_managementCache;	// 8 = 0x8
    PSDataUsageStatisticsCache *_statisticsCache;	// 16 = 0x10
    PSUICarrierSpaceManager *_carrierSpaceManager;	// 24 = 0x18
    PSListController *_hostController;	// 32 = 0x20
    id <PSBillingPeriodSelectorSpecifierDelegate> _billingCycleDelegate;	// 40 = 0x28
    id <PSAppCellularUsageSpecifierDelegate> _policySpecifierDelegate;	// 48 = 0x30
    id <PSUIResetStatisticsGroupDelegate> _resetStatisticsDelegate;	// 56 = 0x38
    NSString *_groupSpecifierTitle;	// 64 = 0x40
    NSArray *_savedHeaderSpecifiers;	// 72 = 0x48
    PSUICellularUsageContentSpecifiers *_savedContentSpecifiers;	// 80 = 0x50
    PSUITotalCellularUsageSubgroup *_totalUsageSubgroup;	// 88 = 0x58
    PSUICallTimeGroup *_callTimeGroup;	// 96 = 0x60
    PSUIResetStatisticsGroup *_resetStatisticsGroup;	// 104 = 0x68
    PSBillingPeriodSelectorSpecifier *_billingPeriodSelectorSpecifier;	// 112 = 0x70
    NSArray *_bundleIDs;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000002fb1b
@property(retain, nonatomic) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
@property(retain, nonatomic) PSBillingPeriodSelectorSpecifier *billingPeriodSelectorSpecifier; // @synthesize billingPeriodSelectorSpecifier=_billingPeriodSelectorSpecifier;
@property(retain, nonatomic) PSUIResetStatisticsGroup *resetStatisticsGroup; // @synthesize resetStatisticsGroup=_resetStatisticsGroup;
@property(retain, nonatomic) PSUICallTimeGroup *callTimeGroup; // @synthesize callTimeGroup=_callTimeGroup;
@property(retain, nonatomic) PSUITotalCellularUsageSubgroup *totalUsageSubgroup; // @synthesize totalUsageSubgroup=_totalUsageSubgroup;
@property(retain) PSUICellularUsageContentSpecifiers *savedContentSpecifiers; // @synthesize savedContentSpecifiers=_savedContentSpecifiers;
@property(retain) NSArray *savedHeaderSpecifiers; // @synthesize savedHeaderSpecifiers=_savedHeaderSpecifiers;
@property(retain, nonatomic) NSString *groupSpecifierTitle; // @synthesize groupSpecifierTitle=_groupSpecifierTitle;
@property(nonatomic) __weak id <PSUIResetStatisticsGroupDelegate> resetStatisticsDelegate; // @synthesize resetStatisticsDelegate=_resetStatisticsDelegate;
@property(nonatomic) __weak id <PSAppCellularUsageSpecifierDelegate> policySpecifierDelegate; // @synthesize policySpecifierDelegate=_policySpecifierDelegate;
@property(nonatomic) __weak id <PSBillingPeriodSelectorSpecifierDelegate> billingCycleDelegate; // @synthesize billingCycleDelegate=_billingCycleDelegate;
@property(nonatomic) __weak PSListController *hostController; // @synthesize hostController=_hostController;
@property(retain, nonatomic) PSUICarrierSpaceManager *carrierSpaceManager; // @synthesize carrierSpaceManager=_carrierSpaceManager;
@property(retain, nonatomic) PSDataUsageStatisticsCache *statisticsCache; // @synthesize statisticsCache=_statisticsCache;
@property(retain, nonatomic) PSCellularManagementCache *managementCache; // @synthesize managementCache=_managementCache;
- (id)getLogger;	// IMP=0x000000000002f941
- (void)refreshOrderingOfContentSpecifiers;	// IMP=0x000000000002f808
- (void)addTrailingSpecifiersToContentSpecifiers:(id)arg1;	// IMP=0x000000000002ef09
- (void)addAppUsageSpecifiersToContentSpecifiers:(id)arg1;	// IMP=0x000000000002eb62
- (void)addLeadingSpecifiersToContentSpecifiers:(id)arg1;	// IMP=0x000000000002e7d9
- (id)contentSpecifiers;	// IMP=0x000000000002e624
- (id)headerSpecifiers;	// IMP=0x000000000002e433
- (id)initWithGroupSpecifierTitle:(id)arg1 hostController:(id)arg2 managementCache:(id)arg3 statisticsCache:(id)arg4 carrierSpaceManager:(id)arg5 billingCycleDelegate:(id)arg6 policySpecifierDelegate:(id)arg7 resetStatisticsDelegate:(id)arg8;	// IMP=0x000000000002e2d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

