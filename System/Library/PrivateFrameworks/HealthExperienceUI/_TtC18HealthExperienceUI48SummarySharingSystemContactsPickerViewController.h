//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBWelcomeController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC18HealthExperienceUI48SummarySharingSystemContactsPickerViewController : OBWelcomeController
{
    MISSING_TYPE *selectionFlowContext;	// 8 = 0x8
    MISSING_TYPE *healthExperienceStore;	// 16 = 0x10
    MISSING_TYPE *healthStore;	// 56 = 0x38
    MISSING_TYPE *state;	// 64 = 0x40
    MISSING_TYPE *sharingStore;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000001d2430
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;	// IMP=0x00000000001d23d0
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;	// IMP=0x00000000001d2390
- (void)summarySharingEntryStore:(id)arg1 didUpdateReachabilityStatus:(id)arg2 error:(id)arg3;	// IMP=0x00000000001d22e0
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;	// IMP=0x00000000001d1950
- (void)contactPickerDidCancel:(id)arg1;	// IMP=0x00000000001d1900
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000001cff90
- (void)viewDidLoad;	// IMP=0x00000000001cff60

@end
