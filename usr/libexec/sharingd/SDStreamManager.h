//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSNetService, NSString, NSTimer;

@interface SDStreamManager : NSObject
{
    NSString *_serviceType;	// 8 = 0x8
    NSNetService *_service;	// 16 = 0x10
    NSMutableDictionary *_managers;	// 24 = 0x18
    NSMutableArray *_companionServices;	// 32 = 0x20
    NSMutableArray *_incomingStreams;	// 40 = 0x28
    NSMutableDictionary *_continuationStreams;	// 48 = 0x30
    long long _connectedStreams;	// 56 = 0x38
    NSTimer *;	// 64 = 0x40
}

+ (id)sharedManager;	// IMP=0x0020000000047632
- (void).cxx_destruct;	// IMP=0x00200000000497b0
@property(retain) NSTimer *publishTimer; // @synthesize publishTimer=_publishTimer;
@property long long connectedStreams; // @synthesize connectedStreams=_connectedStreams;
@property(retain) NSMutableDictionary *continuationStreams; // @synthesize continuationStreams=_continuationStreams;
@property(retain) NSMutableArray *incomingStreams; // @synthesize incomingStreams=_incomingStreams;
@property(retain) NSMutableArray *companionServices; // @synthesize companionServices=_companionServices;
@property(retain) NSMutableDictionary *managers; // @synthesize managers=_managers;
@property(retain) NSNetService *service; // @synthesize service=_service;
@property(retain) NSString *serviceType; // @synthesize serviceType=_serviceType;
- (void)companionStreamClosedStreams:(id)arg1;	// IMP=0x00100000000495ef
- (void)continuationStream:(id)arg1 connectedToService:(id)arg2 withFileHandle:(id)arg3 acceptHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000049302
- (void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;	// IMP=0x00100000000491a5
- (void)netServiceDidStop:(id)arg1;	// IMP=0x0010000000049149
- (void)netService:(id)arg1 didNotPublish:(id)arg2;	// IMP=0x0010000000048fd6
- (void)netServiceDidPublish:(id)arg1;	// IMP=0x0010000000048f31
- (void)unregisterManager:(id)arg1;	// IMP=0x0010000000048ee1
- (void)registerManager:(id)arg1;	// IMP=0x0010000000048e74
- (void)closeStreamsForIdentifier:(id)arg1;	// IMP=0x0010000000048dec
- (void)removeService:(id)arg1;	// IMP=0x0010000000048c95
- (void)addService:(id)arg1;	// IMP=0x0010000000048ae5
- (void)unpublish;	// IMP=0x00100000000489f3
- (void)publish;	// IMP=0x00100000000487c2
- (void)publishTimerFired:(id)arg1;	// IMP=0x00100000000486ed
- (void)restartPublishTimer;	// IMP=0x001000000004862f
- (void)unregisterConnectedStreams;	// IMP=0x001000000004853d
- (void)getContinuationStreamsForMessage:(id)arg1 bundleID:(id)arg2 usingID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000047e59
- (void)registerConnectedStreams;	// IMP=0x0010000000047dc3
- (_Bool)servicesContainIdentifier:(id)arg1;	// IMP=0x0010000000047c05
- (void)activityContinuationPayloadSent:(id)arg1;	// IMP=0x0010000000047a06
- (void)debugInfoRequested:(id)arg1;	// IMP=0x00100000000478b7
- (void)removeObservers;	// IMP=0x0010000000047864
- (void)addObservers;	// IMP=0x00100000000477db
- (void)dealloc;	// IMP=0x001000000004779d
- (id)initWithServiceType:(id)arg1;	// IMP=0x00100000000476a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

