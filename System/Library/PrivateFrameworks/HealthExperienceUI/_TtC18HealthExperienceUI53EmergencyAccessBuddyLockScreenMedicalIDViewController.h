//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBTableWelcomeController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC18HealthExperienceUI53EmergencyAccessBuddyLockScreenMedicalIDViewController : OBTableWelcomeController
{
    MISSING_TYPE *healthStore;	// 8 = 0x8
    MISSING_TYPE *medicalIDCache;	// 16 = 0x10
    MISSING_TYPE *initialShowWhenLocked;	// 24 = 0x18
    MISSING_TYPE *switchCell;	// 32 = 0x20
    MISSING_TYPE *diffableDataSource;	// 40 = 0x28
    MISSING_TYPE *tableViewHeight;	// 48 = 0x30
    MISSING_TYPE *$__lazy_storage_$_tableViewHeightLayoutConstraint;	// 56 = 0x38
    MISSING_TYPE *flow;	// 64 = 0x40
    MISSING_TYPE *emergencyStatus;	// 1869901682 = 0x6f746f72
}

- (void).cxx_destruct;	// IMP=0x00000000003ddbb0
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 adoptTableViewScrollView:(_Bool)arg4;	// IMP=0x00000000003ddb50
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 adoptTableViewScrollView:(_Bool)arg4;	// IMP=0x00000000003ddb10
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;	// IMP=0x00000000003ddae0
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3;	// IMP=0x00000000003ddaa0
- (void)viewDidLayoutSubviews;	// IMP=0x00000000003dda70
- (void)didTapNext:(id)arg1;	// IMP=0x00000000003dd3e0
- (void)didTapCancel:(id)arg1;	// IMP=0x00000000003dd110
- (void)viewDidLoad;	// IMP=0x00000000003dd040

@end
