//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GKReporter : NSObject
{
    double _authenticateResponseTimestamp;	// 8 = 0x8
    double _inviteeUILaunchTimestamp;	// 16 = 0x10
    double _connectingDevicesTimestamp;	// 24 = 0x18
    double _programaticInviteTimestamp;	// 32 = 0x20
    double _appLaunchTimestamp;	// 40 = 0x28
    double _totalInviteReceivedTimestamp;	// 48 = 0x30
    double _messageInviteProcessingTimestamp;	// 56 = 0x38
    double _currentRealtimeMatchPersistenceTimestamp;	// 64 = 0x40
}

+ (id)reporter;	// IMP=0x0040000000234c4d
@property(nonatomic) double currentRealtimeMatchPersistenceTimestamp; // @synthesize currentRealtimeMatchPersistenceTimestamp=_currentRealtimeMatchPersistenceTimestamp;
@property(nonatomic) double messageInviteProcessingTimestamp; // @synthesize messageInviteProcessingTimestamp=_messageInviteProcessingTimestamp;
@property(nonatomic) double totalInviteReceivedTimestamp; // @synthesize totalInviteReceivedTimestamp=_totalInviteReceivedTimestamp;
@property(nonatomic) double appLaunchTimestamp; // @synthesize appLaunchTimestamp=_appLaunchTimestamp;
@property(nonatomic) double programaticInviteTimestamp; // @synthesize programaticInviteTimestamp=_programaticInviteTimestamp;
@property(nonatomic) double connectingDevicesTimestamp; // @synthesize connectingDevicesTimestamp=_connectingDevicesTimestamp;
@property(nonatomic) double inviteeUILaunchTimestamp; // @synthesize inviteeUILaunchTimestamp=_inviteeUILaunchTimestamp;
@property(nonatomic) double authenticateResponseTimestamp; // @synthesize authenticateResponseTimestamp=_authenticateResponseTimestamp;
- (void)reportPlayerAuthenticationFailure:(id)arg1;	// IMP=0x0010000000236432
- (void)reportDurationForEvent:(id)arg1 eventType:(id)arg2 withStartTimestamp:(double)arg3;	// IMP=0x00100000002362ee
- (void)reportEvent:(id)arg1 eventType:(id)arg2 duration:(double)arg3 refApp:(id)arg4;	// IMP=0x00100000002361c5
- (void)reportOnboardingEventForType:(id)arg1 withStartTimestamp:(double)arg2 refApp:(id)arg3;	// IMP=0x0010000000236125
- (void)reportScreenTimeEventForType:(id)arg1 withStartTimestamp:(double)arg2;	// IMP=0x0010000000235ff5
- (void)reportCurrentRealtimeMatchPersistenceDuration;	// IMP=0x0010000000235f77
- (void)recordCurrentRealtimeMatchPersistenceTimestamp;	// IMP=0x0010000000235f53
- (void);	// IMP=0x0010000000235ed5
- (void)reportAppLaunchDuration;	// IMP=0x0010000000235e57
- (void)recordAppLaunchAndTotalTimestamp;	// IMP=0x0010000000235e1c
- (void)reportProgramaticInviteDuration;	// IMP=0x0010000000235d9e
- (void)recordProgramaticInviteTimestamp;	// IMP=0x0010000000235d7a
- (void)reportConnectingDevicesDuration;	// IMP=0x0010000000235cfc
- (void)recordConnectingDevicesTimestamp;	// IMP=0x0010000000235cd8
- (void)reportMessageInviteProcessingDuration;	// IMP=0x0010000000235c5a
- (void)recordMessageInviteProcessingTimestamp;	// IMP=0x0010000000235c36
- (void)reportInviteeUILaunchDuration;	// IMP=0x0010000000235bb8
- (void)recordInviteeUILaunchTimestamp;	// IMP=0x0010000000235b94
- (void)reportAuthenticateResponseDuration;	// IMP=0x0010000000235b16
- (void)recordAuthenticateResponseTimestamp;	// IMP=0x0010000000235af2
- (_Bool)isTimeSpanValid:(double)arg1 maxDuration:(double)arg2;	// IMP=0x0010000000235ad4
- (void)reportEvent:(id)arg1 reportable:(id)arg2;	// IMP=0x00100000002358f8
- (void)reportEvent:(id)arg1 target:(id)arg2 keyPath:(id)arg3;	// IMP=0x00100000002357e7
- (void)reportEvent:(id)arg1 type:(id)arg2 scoreRank:(id)arg3;	// IMP=0x00100000002356ed
- (void)reportEvent:(id)arg1 type:(id)arg2 inboxFriendRequestCount:(long long)arg3;	// IMP=0x00100000002355dd
- (void)reportEvent:(id)arg1 type:(id)arg2 count:(long long)arg3;	// IMP=0x00100000002354cd
- (void)reportEvent:(id)arg1 type:(id)arg2 friendsPlayedThisGame:(id)arg3;	// IMP=0x00100000002353d3
- (void)reportEvent:(id)arg1 type:(id)arg2 payload:(id)arg3;	// IMP=0x00100000002352b3
- (void)reportEvent:(id)arg1 type:(id)arg2 adamID:(id)arg3;	// IMP=0x001000000023512e
- (void)reportEvent:(id)arg1 type:(id)arg2 bundleID:(id)arg3;	// IMP=0x0010000000235043
- (void)reportEvent:(id)arg1 type:(id)arg2 startTime:(id)arg3 refApp:(id)arg4;	// IMP=0x0010000000234f33
- (void)reportEvent:(id)arg1 type:(id)arg2 startTime:(id)arg3;	// IMP=0x0010000000234f1e
- (void)reportEvent:(id)arg1 type:(id)arg2;	// IMP=0x0010000000234e45
- (void)reportEvent:(id)arg1 payload:(id)arg2;	// IMP=0x0010000000234ca2

@end

