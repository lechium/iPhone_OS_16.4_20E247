//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProxCardKit/PRXFeatureListViewController.h>

@class HSProxCardCoordinator, HSSetupStateMachineConfiguration, NSString, PRXFeature, UIViewController;

@interface HSPCFaceRecognitionViewController : PRXFeatureListViewController
{
    _Bool _isPreloaded;	// 8 = 0x8
    HSSetupStateMachineConfiguration *_config;	// 16 = 0x10
    HSProxCardCoordinator *_coordinator;	// 24 = 0x18
    PRXFeature *_identifyPeopleFeature;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000ec7a
@property(retain, nonatomic) PRXFeature *identifyPeopleFeature; // @synthesize identifyPeopleFeature=_identifyPeopleFeature;
@property(nonatomic) _Bool isPreloaded; // @synthesize isPreloaded=_isPreloaded;
@property(retain) HSProxCardCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain) HSSetupStateMachineConfiguration *config; // @synthesize config=_config;
- (void)viewDidLoad;	// IMP=0x001000000000eb7b
- (id)commitConfiguration;	// IMP=0x001000000000eb5b
- (id)initWithCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x001000000000e61c

// Remaining properties
@property(retain, nonatomic) UIViewController *contentVC;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

