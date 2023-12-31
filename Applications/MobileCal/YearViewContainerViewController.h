//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CompactYearViewController, LargeYearViewController, MonthViewContainerViewController, NSString;

@interface YearViewContainerViewController
{
    MonthViewContainerViewController *_cachedMonthViewController;	// 16 = 0x10
    CompactYearViewController *_compactController;	// 24 = 0x18
    LargeYearViewController *_regularController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000013ed9b
@property(retain, nonatomic) LargeYearViewController *regularController; // @synthesize regularController=_regularController;
@property(retain, nonatomic) CompactYearViewController *compactController; // @synthesize compactController=_compactController;
- (void)pushContentViewOfType:(long long)arg1 date:(id)arg2 animated:(_Bool)arg3;	// IMP=0x001000000013ec95
- (id)pushNextLevelMainViewControllerContainerWithDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000013ec83
- (Class)childViewControllerClassForTraits:(id)arg1;	// IMP=0x001000000013ec40
- (id)childViewControllerForRegularWidthRegularHeight;	// IMP=0x001000000013eb29
- (id)childViewControllerForRegularWidthCompactHeight;	// IMP=0x001000000013eb17
- (id)childViewControllerForCompactWidthRegularHeight;	// IMP=0x001000000013ea00
- (id)childViewControllerForUnknownTraits;	// IMP=0x001000000013e9ee
- (id)_pushMonthViewControllerWithDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000013e72f
- (id)pushedNextLevelMainViewControllerContainerAnimated:(_Bool)arg1;	// IMP=0x001000000013e687
- (id)currentChildViewController;	// IMP=0x001000000013e640

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

