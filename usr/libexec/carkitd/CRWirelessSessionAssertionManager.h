//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CARConnectionTimeServiceAgent, CARMessagingServiceConnector, CARSessionStatus, NSString, NSTimer;
@protocol OS_os_transaction;

@interface CRWirelessSessionAssertionManager : NSObject
{
    CARSessionStatus *_sessionStatus;	// 8 = 0x8
    NSTimer *_timeoutTimer;	// 16 = 0x10
    NSObject<OS_os_transaction> *_processTransaction;	// 24 = 0x18
    CARConnectionTimeServiceAgent *_connectionTimeService;	// 32 = 0x20
    CARMessagingServiceConnector *_messagingConnector;	// 40 = 0x28
}

+ (id)_descriptionForTransportType:(unsigned long long)arg1;	// IMP=0x002000000003d558
- (void).cxx_destruct;	// IMP=0x002000000003da2c
@property(readonly, nonatomic) CARMessagingServiceConnector *messagingConnector; // @synthesize messagingConnector=_messagingConnector;
@property(readonly, nonatomic) CARConnectionTimeServiceAgent *connectionTimeService; // @synthesize connectionTimeService=_connectionTimeService;
@property(retain, nonatomic) NSObject<OS_os_transaction> *processTransaction; // @synthesize processTransaction=_processTransaction;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) CARSessionStatus *sessionStatus; // @synthesize sessionStatus=_sessionStatus;
- (void)stopWaitingForConnection;	// IMP=0x001000000003d919
- (void)startWaitingForConnection;	// IMP=0x001000000003d848
- (void)sessionDidDisconnect:(id)arg1;	// IMP=0x001000000003d706
- (void)sessionDidConnect:(id)arg1;	// IMP=0x001000000003d5f7
- (void)cancelledConnectionAttemptOnTransport:(unsigned long long)arg1;	// IMP=0x001000000003d57c
- (void)startedConnectionAttemptOnTransport:(unsigned long long)arg1;	// IMP=0x001000000003d355
- (void)handleTimeout:(id)arg1;	// IMP=0x001000000003d24c
- (void)stopTimeoutTimer;	// IMP=0x001000000003d1f2
- (void)startTimeoutTimer;	// IMP=0x001000000003d10d
- (void)dealloc;	// IMP=0x001000000003d0a9
- (id)initWithSessionStatus:(id)arg1 connectionTimeServiceAgent:(id)arg2 messagingConnector:(id)arg3;	// IMP=0x001000000003cfaf

// Remaining properties
// Error: Property attributes should begin with the type ('T') attribute, property name: debugDescription
// Property attributes: (null)

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

