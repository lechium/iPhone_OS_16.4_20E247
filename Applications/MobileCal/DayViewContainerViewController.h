//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CompactDayViewController, LargeDayViewController;

@interface DayViewContainerViewController
{
    CompactDayViewController *_compactController;	// 16 = 0x10
    LargeDayViewController *_regularController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000d20e2
@property(retain, nonatomic) LargeDayViewController *regularController; // @synthesize regularController=_regularController;
@property(retain, nonatomic) CompactDayViewController *compactController; // @synthesize compactController=_compactController;
- (Class)childViewControllerClassForTraits:(id)arg1;	// IMP=0x00100000000d2055
- (id)childViewControllerForRegularWidthRegularHeight;	// IMP=0x00100000000d1f4e
- (id)childViewControllerForRegularWidthCompactHeight;	// IMP=0x00100000000d1f3c
- (id)childViewControllerForCompactWidthRegularHeight;	// IMP=0x00100000000d1e35
- (id)childViewControllerForUnknownTraits;	// IMP=0x00100000000d1e23
- (id)currentChildViewController;	// IMP=0x00100000000d1ddc

@end
