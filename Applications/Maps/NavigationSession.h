//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedWaypoint, GEOObserverHashTable, MNNavigationService, MNNavigationTraceInfo, NSMutableArray, NSString, NSTimer, NavigationSessionConfiguration, PlatformController, RouteCollection, _TtC4Maps28NavigationWaypointController;
@protocol NavigationStateProvider, RouteCollectionUpdateProvider;

@interface NavigationSession : NSObject
{
    NSMutableArray *_pendingAutomaticSharingContacts;	// 8 = 0x8
    NSTimer *_automaticSharingRetryTimer;	// 16 = 0x10
    CDUnknownBlockType _suspendCompletionHandler;	// 24 = 0x18
    _Bool _hasStartedNavigation;	// 32 = 0x20
    PlatformController *_platformController;	// 40 = 0x28
    unsigned long long _sessionInitiator;	// 48 = 0x30
    NavigationSessionConfiguration *_configuration;	// 56 = 0x38
    id <NavigationStateProvider> _navigationStateProvider;	// 64 = 0x40
    id <RouteCollectionUpdateProvider> _routeCollectionUpdateProvider;	// 72 = 0x48
    MNNavigationTraceInfo *_currentlyPlayingTraceInfo;	// 80 = 0x50
    _TtC4Maps28NavigationWaypointController *_waypointController;	// 88 = 0x58
    GEOObserverHashTable *_observers;	// 96 = 0x60
    MNNavigationService *_navigationService;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x001000000036cc37
@property(retain, nonatomic) MNNavigationService *navigationService; // @synthesize navigationService=_navigationService;
@property(nonatomic) _Bool hasStartedNavigation; // @synthesize hasStartedNavigation=_hasStartedNavigation;
@property(retain, nonatomic) GEOObserverHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) _TtC4Maps28NavigationWaypointController *waypointController; // @synthesize waypointController=_waypointController;
- (void);	// IMP=0x001000000036cbc3
@property(retain, nonatomic) MNNavigationTraceInfo *currentlyPlayingTraceInfo; // @synthesize currentlyPlayingTraceInfo=_currentlyPlayingTraceInfo;
@property(retain, nonatomic) id <RouteCollectionUpdateProvider> routeCollectionUpdateProvider; // @synthesize routeCollectionUpdateProvider=_routeCollectionUpdateProvider;
@property(retain, nonatomic) id <NavigationStateProvider> navigationStateProvider; // @synthesize navigationStateProvider=_navigationStateProvider;
@property(readonly, nonatomic) NavigationSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) unsigned long long sessionInitiator; // @synthesize sessionInitiator=_sessionInitiator;
@property(nonatomic) __weak PlatformController *platformController; // @synthesize platformController=_platformController;
- (void)routeCollectionUpdateProvider:(id)arg1 didUpdateRouteCollection:(id)arg2;	// IMP=0x001000000036ca4d
- (void)navigationService:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 traffic:(id)arg4;	// IMP=0x001000000036c9e6
- (void)navigationService:(id)arg1 didFinishLoadingTrace:(id)arg2;	// IMP=0x001000000036c9d1
- (void)navigationStateProvider:(id)arg1 didChangeNavigationState:(unsigned long long)arg2;	// IMP=0x001000000036c812
- (void)_retryAutomaticSharing:(id)arg1;	// IMP=0x001000000036c6d6
- (void)_scheduleAutomaticSharingRetry:(unsigned long long)arg1;	// IMP=0x001000000036c547
- (void)_startAutomaticETASharingIfNeeded:(unsigned long long)arg1;	// IMP=0x001000000036bdb3
- (void)cleanupStateReplay;	// IMP=0x001000000036bd76
- (void)replayCurrentState;	// IMP=0x001000000036bcbb
- (void)prepareToReplayCurrentState;	// IMP=0x001000000036bc7e
- (void)suspendWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000036badb
- (void)resume;	// IMP=0x001000000036b8bc
- (void)removeObserver:(id)arg1;	// IMP=0x001000000036b7c6
- (void)addObserver:(id)arg1;	// IMP=0x001000000036b6d0
@property(readonly, nonatomic) unsigned long long sessionState;
@property(readonly, nonatomic) NSString *currentDestinationString;
@property(readonly, nonatomic) long long currentTransportType;
@property(readonly, nonatomic) RouteCollection *currentRouteCollection;
@property(readonly, nonatomic) unsigned long long guidanceType;
@property(readonly, nonatomic) long long navigationType;
@property(readonly, nonatomic) GEOComposedWaypoint *destination;
- (void)dealloc;	// IMP=0x001000000036b175
- (id)initWithInitiator:(unsigned long long)arg1 configuration:(id)arg2 navigationService:(id)arg3;	// IMP=0x001000000036ae66
- (id)initWithInitiator:(unsigned long long)arg1 configuration:(id)arg2;	// IMP=0x001000000036ade0
- (void)selectRoute:(id)arg1;	// IMP=0x00100000001f3846
@property(readonly, nonatomic, getter=isCarNavigationCompatible) _Bool carNavigationCompatible;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
