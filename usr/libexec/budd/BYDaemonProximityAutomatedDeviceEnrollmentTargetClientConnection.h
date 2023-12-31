//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DMTBuddyDaemonProximityAutomatedDeviceEnrollmentController, NSString;
@protocol BYBuddyDaemonProximityAutomatedDeviceEnrollmentTargetProtocol;

@interface BYDaemonProximityAutomatedDeviceEnrollmentTargetClientConnection
{
    DMTBuddyDaemonProximityAutomatedDeviceEnrollmentController *_enrollmentController;	// 8 = 0x8
}

+ (id)daemonProtocolInterface;	// IMP=0x0020000000003bb4
- (void).cxx_destruct;	// IMP=0x00200000000044f2
@property(readonly, nonatomic) DMTBuddyDaemonProximityAutomatedDeviceEnrollmentController *enrollmentController; // @synthesize enrollmentController=_enrollmentController;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000043f1
- (void)fetchActivationStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004290
- (void)shutDown;	// IMP=0x0010000000004253
- (void)reboot;	// IMP=0x0010000000004241
@property(readonly, nonatomic, getter=isEnrolled) _Bool enrolled;
@property(readonly, nonatomic) id <BYBuddyDaemonProximityAutomatedDeviceEnrollmentTargetProtocol> remoteObjectProxy;
- (void)enrollmentController:(id)arg1 hasUpdatedWithViewModel:(id)arg2;	// IMP=0x00100000000040cb
- (void)enrollmentController:(id)arg1 hasCompletedWithViewModel:(id)arg2;	// IMP=0x0010000000004059
- (void)enrollmentControllerHasPaired:(id)arg1 withInitialViewModel:(id)arg2;	// IMP=0x0010000000003fe7
- (void)enrollmentControllerNeedsToDismissPin:(id)arg1;	// IMP=0x0010000000003fa8
- (void)enrollmentController:(id)arg1 needsToDisplayPin:(id)arg2;	// IMP=0x0010000000003f36
- (void)enrollmentController:(id)arg1 hasBroadcastError:(id)arg2;	// IMP=0x0010000000003ec4
- (void)shutdown;	// IMP=0x0010000000003dd9
- (void)endAdvertisingProximityAutomatedDeviceEnrollment;	// IMP=0x0010000000003cee
- (void)beginAdvertisingProximityAutomatedDeviceEnrollment;	// IMP=0x0010000000003c03
- (id)initWithConnection:(id)arg1 broadcastingProvider:(id)arg2;	// IMP=0x0010000000003bd4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

