//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PSSpecifier;

__attribute__((visibility("hidden")))
@interface STScreenTimeUsageGroupSpecifierProvider
{
    PSSpecifier *_usageSummaryGraphSpecifier;	// 8 = 0x8
    PSSpecifier *_weeklyTotalSpecifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008c221
@property(retain, nonatomic) PSSpecifier *weeklyTotalSpecifier; // @synthesize weeklyTotalSpecifier=_weeklyTotalSpecifier;
@property(retain, nonatomic) PSSpecifier *usageSummaryGraphSpecifier; // @synthesize usageSummaryGraphSpecifier=_usageSummaryGraphSpecifier;
- (void)_specifierIdentifierDidChange:(id)arg1;	// IMP=0x000000000008c137
- (void)_headerButtonPressed:(id)arg1;	// IMP=0x000000000008bf9d
- (id)_weeklyTotal:(id)arg1;	// IMP=0x000000000008be58
- (id)_usageDetailsCoordinator:(id)arg1;	// IMP=0x000000000008be08
- (void)_refreshingDidChange:(_Bool)arg1;	// IMP=0x000000000008bd78
- (void)_selectedUsageReportDidChangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000008b8e4
- (void)_lastUpdatedDateDidChangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000008b5e6
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000008b1b1
- (void)setCoordinator:(id)arg1;	// IMP=0x000000000008b035
- (id)init;	// IMP=0x000000000008acfa

@end

