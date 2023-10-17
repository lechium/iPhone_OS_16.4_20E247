//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedGuidanceEvent, GEOComposedRoute, MNAnnouncementEngine, MNAnnouncementPlanEvent, MNGuidanceSignInfo, MNJunctionViewImageLoader, MNLocation, MNNavigationSessionState, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol MNGuidanceManagerDelegate;

__attribute__((visibility("hidden")))
@interface MNGuidanceManager : NSObject
{
    MNAnnouncementEngine *_announcementEngine;	// 8 = 0x8
    NSMutableDictionary *_announcementsSpoken;	// 16 = 0x10
    NSMutableSet *_exclusiveSetAnnouncementsSpoken;	// 24 = 0x18
    NSMutableDictionary *_specialSpokenEvents;	// 32 = 0x20
    NSMutableDictionary *_specialSignEvents;	// 40 = 0x28
    NSMutableDictionary *_specialAREvents;	// 48 = 0x30
    NSMutableArray *_events;	// 56 = 0x38
    NSDictionary *_eventIndexes;	// 64 = 0x40
    GEOComposedGuidanceEvent *_nextEvent;	// 72 = 0x48
    _Bool _hasBeenOnRouteOnce;	// 80 = 0x50
    _Bool _canSpeakReturnToRouteAnnouncement;	// 81 = 0x51
    double _timeLastAnnouncementStarted;	// 88 = 0x58
    double _timeLastAnnouncementEnded;	// 96 = 0x60
    _Bool _hasPersistentEvents;	// 104 = 0x68
    MNAnnouncementPlanEvent *_lastAnnouncementEvent;	// 112 = 0x70
    NSMutableDictionary *_hapticsTriggered;	// 120 = 0x78
    MNGuidanceSignInfo *_signInfo;	// 128 = 0x80
    NSArray *_arEvents;	// 136 = 0x88
    NSArray *_previousSignEvents;	// 144 = 0x90
    GEOComposedGuidanceEvent *_currentLaneGuidanceEvent;	// 152 = 0x98
    GEOComposedGuidanceEvent *_previousLaneGuidanceEvent;	// 160 = 0xa0
    MNJunctionViewImageLoader *_junctionViewImageLoader;	// 168 = 0xa8
    GEOComposedGuidanceEvent *_pendingJunctionViewGuidanceEvent;	// 176 = 0xb0
    GEOComposedGuidanceEvent *_currentJunctionViewGuidanceEvent;	// 184 = 0xb8
    MNLocation *_location;	// 192 = 0xc0
    double _speed;	// 200 = 0xc8
    NSMutableArray *_validEvents;	// 208 = 0xd0
    NSMutableDictionary *_feedback;	// 216 = 0xd8
    _Bool _isInPreArrivalState;	// 224 = 0xe0
    _Bool _shouldShowChargingInfo;	// 225 = 0xe1
    id <MNGuidanceManagerDelegate> _delegate;	// 232 = 0xe8
    MNNavigationSessionState *_navigationSessionState;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x000000000007ef41
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(retain, nonatomic) MNLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) MNNavigationSessionState *navigationSessionState; // @synthesize navigationSessionState=_navigationSessionState;
@property(nonatomic) _Bool shouldShowChargingInfo; // @synthesize shouldShowChargingInfo=_shouldShowChargingInfo;
@property(nonatomic) _Bool isInPreArrivalState; // @synthesize isInPreArrivalState=_isInPreArrivalState;
@property(nonatomic) __weak id <MNGuidanceManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)timeManagerDidChangeProvider:(id)arg1;	// IMP=0x000000000007ee79
- (unsigned long long)_trafficColorForRoute:(id)arg1 routeCoordinate:(CDStruct_3f2a7a20)arg2;	// IMP=0x000000000007ecab
- (void)_notifyAnalyticsForNewEvents:(id)arg1 previousEvents:(id)arg2;	// IMP=0x000000000007e203
- (double)durationOfAnnouncement:(id)arg1;	// IMP=0x000000000007e188
- (double)durationOfEvent:(id)arg1 announcementIndex:(unsigned long long)arg2 distance:(double)arg3;	// IMP=0x000000000007deba
- (double)_distanceToEndOfRoute;	// IMP=0x000000000007ddf7
- (double)_distanceToManeuverStart;	// IMP=0x000000000007dd11
- (double)_distanceToRouteCoordinate:(CDStruct_3f2a7a20)arg1;	// IMP=0x000000000007dc7a
- (double)_timeUntilEventTrigger:(id)arg1;	// IMP=0x000000000007db5f
- (double)timeUntilNextAnnouncement;	// IMP=0x000000000007db31
- (double)timeSinceLastAnnouncement;	// IMP=0x000000000007db08
- (double)_timeRemainingForEvent:(id)arg1;	// IMP=0x000000000007da63
- (int)_indexForEventUUID:(id)arg1;	// IMP=0x000000000007d88a
- (_Bool)_isEVChargingEvent:(id)arg1;	// IMP=0x000000000007d794
- (_Bool)_isValidEvent:(id)arg1;	// IMP=0x000000000007d54a
- (double)_adjustedVehicleSpeed;	// IMP=0x000000000007d4cb
- (void)_markEventSpoken:(id)arg1;	// IMP=0x000000000007d3c4
- (_Bool)_eventWasSpoken:(id)arg1;	// IMP=0x000000000007d2e8
- (id)_specialSpokenEvents:(int)arg1 forLegIndex:(unsigned long long)arg2;	// IMP=0x000000000007d18a
- (_Bool)_isInArrivalState;	// IMP=0x000000000007d0fc
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;	// IMP=0x000000000007d0e3
- (id)_junctionViewEvents;	// IMP=0x000000000007cf0f
- (void)_handleJunctionViewInfo:(id)arg1;	// IMP=0x000000000007cbc9
- (id)_nextJunctionViewGuidanceEvent;	// IMP=0x000000000007ca59
- (void)_considerJunctionViewGuidance;	// IMP=0x000000000007c4c7
- (_Bool)_hasPersistentEvents;	// IMP=0x000000000007c38f
- (void)_considerPersistence;	// IMP=0x000000000007c338
- (double)_headingForArEvent:(id)arg1;	// IMP=0x000000000007c07f
- (int)_maneuverTypeForAREvent:(id)arg1;	// IMP=0x000000000007be57
- (id)_specialAREvents:(int)arg1 forLeg:(unsigned long long)arg2;	// IMP=0x000000000007bd98
- (id)_arrivalARGuidanceEventsForLeg:(unsigned long long)arg1;	// IMP=0x000000000007bac8
- (id)_closestContinueAREventToRouteCoordinate:(CDStruct_3f2a7a20)arg1;	// IMP=0x000000000007b8f6
- (id)_validEventsForARGuidance;	// IMP=0x000000000007b033
- (id)_createArGuidanceInfosForEvent:(id)arg1 forStep:(id)arg2;	// IMP=0x0000000000079f2a
- (void)_considerARGuidance;	// IMP=0x0000000000079b68
- (id)_signForGuidanceEvent:(id)arg1 isPrimary:(_Bool)arg2 shouldOverridePrimaryDistances:(_Bool)arg3 distance:(out double *)arg4;	// IMP=0x0000000000079522
- (id)_sortedSignEventsFromValidSignEvents:(id)arg1;	// IMP=0x00000000000792c6
- (id)_specialSignEvents:(int)arg1 forLeg:(unsigned long long)arg2;	// IMP=0x0000000000079168
- (id)_validEventsForSignGuidance:(out _Bool *)arg1;	// IMP=0x0000000000078c85
- (void)_considerSignGuidance;	// IMP=0x000000000007880b
- (id)_nextLaneGuidanceEvent;	// IMP=0x000000000007866f
- (void)_considerLaneGuidance;	// IMP=0x00000000000780fe
- (void)_considerHaptics;	// IMP=0x0000000000077dbd
- (id)_durationsForEvent:(id)arg1;	// IMP=0x0000000000077aaa
- (id)_serverStringDictionaryForChargingEvent:(id)arg1;	// IMP=0x00000000000778f2
- (id)_serverStringDictionaryForEvent:(id)arg1 distance:(double)arg2 validDistance:(double)arg3 spoken:(_Bool)arg4 waypoints:(id)arg5;	// IMP=0x000000000007779a
- (id)_selectAnnouncementForEvent:(id)arg1 withTimeRemaining:(double)arg2 withMinWaypointCategory:(int)arg3 selectedWaypointCategory:(out int *)arg4 waypoints:(id)arg5;	// IMP=0x0000000000077003
- (void)_notifySpeechEvent:(id)arg1 waypointCategory:(int)arg2 ignorePromptStyle:(_Bool)arg3;	// IMP=0x00000000000766db
- (id)_spokenEventsRemainingInStep;	// IMP=0x00000000000762fa
- (void)_planAnnouncements;	// IMP=0x00000000000756e1
- (void)_repeatSpokenEvent:(id)arg1;	// IMP=0x0000000000075624
- (_Bool)_considerOtherSpecialAnnouncements;	// IMP=0x00000000000754e3
- (_Bool)_considerArrivalAnnouncements;	// IMP=0x000000000007538f
- (_Bool)_considerChargingAnnouncements;	// IMP=0x000000000007514d
- (_Bool)_considerGetOnRouteAnnouncements;	// IMP=0x0000000000075004
- (_Bool)_considerStartingAnnouncements;	// IMP=0x0000000000074edb
- (void)_considerAnnouncements;	// IMP=0x0000000000074dc6
- (void)_filterValidEvents;	// IMP=0x0000000000074c24
- (void)updateGuidanceForLocation:(id)arg1 navigatorState:(int)arg2;	// IMP=0x0000000000074a0b
- (void)updateSessionStateForReroute:(id)arg1 reason:(unsigned long long)arg2 location:(id)arg3;	// IMP=0x0000000000074878
- (void)updateDestination:(id)arg1;	// IMP=0x00000000000747e4
- (_Bool)repeatLastGuidanceAnnouncement:(id)arg1;	// IMP=0x0000000000074455
- (void)stop;	// IMP=0x00000000000743c1
@property(readonly, nonatomic) unsigned long long currentLegIndex;
@property(readonly, nonatomic) GEOComposedRoute *route;
@property(readonly, nonatomic) NSArray *events;
- (void)_resetLastAnnouncementTime;	// IMP=0x0000000000073fb1
- (void)reset;	// IMP=0x0000000000073af4
- (void)dealloc;	// IMP=0x0000000000073a7f
- (void)_initSpecialGuidanceEventsForRoute:(id)arg1;	// IMP=0x0000000000073627
- (id)initWithNavigationSessionState:(id)arg1 andIsReconnecting:(_Bool)arg2 announcementsToIgnore:(id)arg3;	// IMP=0x00000000000730f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
