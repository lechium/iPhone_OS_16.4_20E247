//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTUIListWithHeaderLoadingGroup, NSString, PSListController, PSUIAppDataUsageSpecifierFactory;

__attribute__((visibility("hidden")))
@interface PSUICellularUsageSchedulingGroup : NSObject
{
    _Bool _refreshInProgress;	// 8 = 0x8
    PSListController *_hostController;	// 16 = 0x10
    CTUIListWithHeaderLoadingGroup *_loadingGroup;	// 24 = 0x18
    PSUIAppDataUsageSpecifierFactory *_appDataUsageSpecifierFactory;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000057402
@property _Bool refreshInProgress; // @synthesize refreshInProgress=_refreshInProgress;
@property(retain, nonatomic) PSUIAppDataUsageSpecifierFactory *appDataUsageSpecifierFactory; // @synthesize appDataUsageSpecifierFactory=_appDataUsageSpecifierFactory;
@property(retain, nonatomic) CTUIListWithHeaderLoadingGroup *loadingGroup; // @synthesize loadingGroup=_loadingGroup;
@property(nonatomic) __weak PSListController *hostController; // @synthesize hostController=_hostController;
- (id)getLogger;	// IMP=0x0000000000057371
- (void)sortGroup;	// IMP=0x0000000000056f6e
- (void)setGroupSpecifierTitle:(id)arg1;	// IMP=0x0000000000056f58
- (void)calculateUsage;	// IMP=0x000000000005680b
- (void)didResetStatistics;	// IMP=0x00000000000566ae
- (void)selectedBillingPeriodChanged:(unsigned long long)arg1;	// IMP=0x0000000000056630
- (void)didFailToSetPolicyForSpecifier:(id)arg1;	// IMP=0x00000000000565be
- (void)prefetchPoliciesFor:(id)arg1;	// IMP=0x0000000000056548
- (id)specifiers;	// IMP=0x00000000000564f8
- (id)initWithListController:(id)arg1 groupSpecifierTitle:(id)arg2;	// IMP=0x0000000000056369

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

