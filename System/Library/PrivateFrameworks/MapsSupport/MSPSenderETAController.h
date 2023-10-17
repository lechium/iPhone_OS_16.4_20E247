//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSPGroupSessionStorage, MSPNavigationListener, MSPSenderLiveStrategy, MSPSenderMessageStrategy, MSPSenderMinimalStrategy, MSPSharedTripGroupSession, MSPSharedTripRelay, MSPSharedTripStorageController, NSArray, NSMutableSet, NSString;
@protocol MSPSenderETAControllerDelegate, OS_os_transaction;

__attribute__((visibility("hidden")))
@interface MSPSenderETAController : NSObject
{
    NSObject<OS_os_transaction> *_transaction;	// 8 = 0x8
    MSPNavigationListener *_navigationListener;	// 16 = 0x10
    NSMutableSet *_destinations;	// 24 = 0x18
    MSPSharedTripRelay *_idsRelay;	// 32 = 0x20
    MSPSharedTripGroupSession *_groupSession;	// 40 = 0x28
    MSPSenderMinimalStrategy *_minimalSender;	// 48 = 0x30
    MSPSenderLiveStrategy *_liveSender;	// 56 = 0x38
    MSPSenderMessageStrategy *_messageSender;	// 64 = 0x40
    MSPGroupSessionStorage *_sessionStorage;	// 72 = 0x48
    MSPSharedTripStorageController *_storageController;	// 80 = 0x50
    NSObject<MSPSenderETAControllerDelegate> *_delegate;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000ac220
@property(nonatomic) __weak NSObject<MSPSenderETAControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)groupSessionEnded:(id)arg1 withError:(id)arg2;	// IMP=0x00000000000ac1a7
- (void)groupSession:(id)arg1 participantDidLeave:(id)arg2;	// IMP=0x00000000000ac044
- (void)groupSession:(id)arg1 participantDidJoin:(id)arg2;	// IMP=0x00000000000abee1
- (void)navigationListenerStopped:(id)arg1;	// IMP=0x00000000000abe6a
- (void)navigationListenerResumed:(id)arg1;	// IMP=0x00000000000abdf6
- (void)navigationListenerArrived:(id)arg1;	// IMP=0x00000000000abd82
- (void)navigationListenerTrafficUpdated:(id)arg1;	// IMP=0x00000000000abd37
- (void)navigationListenerRouteUpdated:(id)arg1;	// IMP=0x00000000000abcec
- (void)navigationListenerETAUpdated:(id)arg1;	// IMP=0x00000000000abc78
- (void)navigationListenerIsReady:(id)arg1;	// IMP=0x00000000000abbf7
- (void)navigationListenerWaypointsUpdated:(id)arg1;	// IMP=0x00000000000abb76
- (void)touchedRules;	// IMP=0x00000000000abb60
- (id)rulesForParticipant:(id)arg1;	// IMP=0x00000000000abb4a
- (_Bool)_validateNavigationState:(id *)arg1;	// IMP=0x00000000000ab8ea
- (void)_stopNavigationListener;	// IMP=0x00000000000ab840
- (void)_startNavigationListener;	// IMP=0x00000000000ab795
- (void)_invalidateActiveHandles;	// IMP=0x00000000000ab6e5
- (void)_invalidateSharedTripWithError:(id)arg1;	// IMP=0x00000000000ab5af
- (void)_sendFinishedToIdentifiers:(id)arg1;	// IMP=0x00000000000ab377
- (void)_cleanObjects;	// IMP=0x00000000000ab2b9
@property(readonly, nonatomic) NSArray *activeHandles;
- (void)stopSharing;	// IMP=0x00000000000ab237
- (void)stopSharingWithGroup:(id)arg1;	// IMP=0x00000000000ab231
- (_Bool)startSharingWithGroup:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ab229
- (_Bool)startSharingWithMessages:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ab04c
- (void)stopSharingWith:(id)arg1;	// IMP=0x00000000000aaaf5
- (_Bool)startSharingWith:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000aa7eb
- (void)_startingGroupSession;	// IMP=0x00000000000aa77f
- (void)_createGroupSessionIfNeededWithIdentifier:(id)arg1;	// IMP=0x00000000000aa515
- (void)_restoreLastSession;	// IMP=0x00000000000a9f45
- (void)_updateStorage;	// IMP=0x00000000000a9d3c
- (void)dealloc;	// IMP=0x00000000000a9c83
- (id)initWithRelay:(id)arg1;	// IMP=0x00000000000a9bae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
