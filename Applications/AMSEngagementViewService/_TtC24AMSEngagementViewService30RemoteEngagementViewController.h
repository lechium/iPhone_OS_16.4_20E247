//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class MISSING_TYPE;

@interface _TtC24AMSEngagementViewService30RemoteEngagementViewController : SBUIRemoteAlertServiceViewController
{
    MISSING_TYPE *connection;	// 8 = 0x8
    MISSING_TYPE *presenter;	// 16 = 0x10
    MISSING_TYPE *task;	// 24 = 0x18
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x0020000000009fb0
- (void).cxx_destruct;	// IMP=0x004000000000bce0
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000e0c0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000000df70
- (void)dealloc;	// IMP=0x001000000000bc70
- (void)didReceiveMemoryWarning;	// IMP=0x001000000000a760
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000000a6a0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000000a5c0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000000a540
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000000a520
- (void)viewDidLoad;	// IMP=0x001000000000a490
- (void);	// IMP=0x001000000000a3d0
- (void)handleButtonActions:(id)arg1;	// IMP=0x001000000000a350
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;	// IMP=0x0010000000009fc0
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000009fa0
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009ef0
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009880

@end
