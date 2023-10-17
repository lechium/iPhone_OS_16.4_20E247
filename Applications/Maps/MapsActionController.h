//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AppCoordinator, AppStateManager, CarStateManager, IOSChromeViewController, RichMapsActivity;
@protocol ActionCoordination, NavActionCoordination;

@interface MapsActionController : NSObject
{
    RichMapsActivity *_pendingActivityToApplyAfterNavEnd;	// 8 = 0x8
    _Bool _isRestoringState;	// 16 = 0x10
    AppCoordinator *_appCoordinator;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000008da512
@property(nonatomic) __weak AppCoordinator *appCoordinator; // @synthesize appCoordinator=_appCoordinator;
- (void)_applyActivity:(id)arg1 assumedSourceFidelity:(unsigned long long)arg2 source:(long long)arg3;	// IMP=0x00100000008da46e
- (void)_performAction:(id)arg1;	// IMP=0x00100000008da452
- (void)applyRichMapsActivity:(id)arg1;	// IMP=0x00100000008d9d46
- (void)getUserLocationIfneededFor:(id)arg1;	// IMP=0x00100000008d9981
- (void)applyRichMapsActivityOrWaitForLocation:(id)arg1;	// IMP=0x00100000008d97ee
- (void)navigationEnded;	// IMP=0x00100000008d9692
- (_Bool)pendingAction;	// IMP=0x00100000008d9684
- (void)entryPointsCoordinator:(id)arg1 didMergedRichMapsActivity:(id)arg2;	// IMP=0x00100000008d9159
- (void)entryPointsCoordinator:(id)arg1 performErrorAction:(id)arg2;	// IMP=0x00100000008d9094
@property(readonly, nonatomic) CarStateManager *carStateManager;
@property(readonly, nonatomic, getter=isCarPlayOnlyContext) _Bool carPlayOnlyContext;
- (_Bool)isNavigationTurnByTurnOrStepping;	// IMP=0x00100000008d904d
@property(readonly, nonatomic, getter=isRestoringState) _Bool isRestoringState;
@property(readonly, nonatomic) AppStateManager *appStateManager;
@property(readonly, nonatomic) id <NavActionCoordination> navActionCoordinator;
@property(readonly, nonatomic) id <ActionCoordination> coordinator;
@property(readonly, nonatomic) IOSChromeViewController *chrome;
- (id)init;	// IMP=0x00100000008d8e38
- (void)checkHandlersForActionClasses;	// IMP=0x00100000008d8e32

@end
