//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIView;
@protocol LUIProgressAnimationProtocol;

@interface LUIAssignedStudentViewController
{
    _Bool _isFetchingAuthMode;	// 8 = 0x8
}

@property(nonatomic) _Bool isFetchingAuthMode; // @synthesize isFetchingAuthMode=_isFetchingAuthMode;
- (void)_startUnlockingDevice;	// IMP=0x001000000001df87
- (void)_fetchAuthMode;	// IMP=0x001000000001dd16
- (_Bool)shouldUpdateStudentStatusWithClassroom;	// IMP=0x001000000001dd0e
- (void)presentPasscodeViewControllerForUser:(id)arg1 passcodeViewDidAppearAction:(CDUnknownBlockType)arg2 passcodeCanceledAction:(CDUnknownBlockType)arg3 passcodeEnteredAction:(CDUnknownBlockType)arg4;	// IMP=0x001000000001dc3a
@property(readonly, nonatomic) UIView<LUIProgressAnimationProtocol> *progressView;
- (void)bottomLeftVibrantButtonTapped:(id)arg1;	// IMP=0x001000000001db62
- (id)callToActionLabelText;	// IMP=0x001000000001dad1
- (void)userActionTriggered;	// IMP=0x001000000001dabf
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000001d9cc
- (void)viewDidLoad;	// IMP=0x001000000001d910

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
