//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BridgePreferences/BPSSetupMiniFlowController.h>

@class COSScreenTimeSetPasscodeViewController, NSString;

@interface COSScreenTimeSetupController : BPSSetupMiniFlowController
{
    COSScreenTimeSetPasscodeViewController *_firstController;	// 8 = 0x8
}

+ (_Bool)_screenTimeEnabledWithoutPasscodeForFamilyMember:(id)arg1;	// IMP=0x002000000000857f
+ (_Bool)controllerNeedsToRunForBuddyControllerDelegate:(id)arg1;	// IMP=0x0010000000008400
- (void).cxx_destruct;	// IMP=0x0020000000008a39
@property(retain, nonatomic) COSScreenTimeSetPasscodeViewController *firstController; // @synthesize firstController=_firstController;
- (id)familyMemberFirstName;	// IMP=0x00100000000083b0
- (id)familyMember;	// IMP=0x001000000000832c
- (void)miniFlowStepComplete:(id)arg1 nextControllerClass:(Class)arg2;	// IMP=0x001000000000829f
- (void)miniFlowStepComplete:(id)arg1;	// IMP=0x001000000000828b
- (id)viewController;	// IMP=0x0010000000008276
- (id)init;	// IMP=0x0010000000008201

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
