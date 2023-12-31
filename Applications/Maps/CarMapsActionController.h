//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AppCoordinator, AppStateManager, CarStateManager, IOSChromeViewController, PlatformController;
@protocol ActionCoordination, NavActionCoordination;

@interface CarMapsActionController
{
    CarStateManager *_carStateManager;	// 32 = 0x20
    PlatformController *_platformController;	// 40 = 0x28
    _Bool _isRestoringState;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000008da687
- (void)_applyActivity:(id)arg1 assumedSourceFidelity:(unsigned long long)arg2 source:(long long)arg3;	// IMP=0x00100000008da60a
@property(readonly, nonatomic) CarStateManager *carStateManager;
@property(readonly, nonatomic, getter=isCarPlayOnlyContext) _Bool carPlayOnlyContext;
- (id)initWithPlatformController:(id)arg1;	// IMP=0x00100000008da538

// Remaining properties
@property(readonly, nonatomic) AppCoordinator *appCoordinator;
@property(readonly, nonatomic) AppStateManager *appStateManager;
@property(readonly, nonatomic) IOSChromeViewController *chrome;
@property(readonly, nonatomic) id <ActionCoordination> coordinator;
@property(readonly, nonatomic) id <NavActionCoordination> navActionCoordinator;

@end

