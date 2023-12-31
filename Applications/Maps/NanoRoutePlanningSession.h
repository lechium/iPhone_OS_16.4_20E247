//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOCompanionRouteDetails, GEOComposedRoute, GEOObserverHashTable, NSMutableDictionary, NSString, NanoRoutePlanningMutableRequest, NanoRoutePlanningMutableResponse, NanoRoutePlanningRequest, NanoRoutePlanningResponse, NanoRoutePlanningState;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface NanoRoutePlanningSession : NSObject
{
    NSObject<OS_os_transaction> *_transaction;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_stateIsolationQueue;	// 24 = 0x18
    unsigned long long _origin;	// 32 = 0x20
    _Bool _shouldBroadcast;	// 40 = 0x28
    _Bool _isLoading;	// 41 = 0x29
    long long _state;	// 48 = 0x30
    NanoRoutePlanningState *_stateObject;	// 56 = 0x38
    NanoRoutePlanningMutableRequest *_request;	// 64 = 0x40
    NanoRoutePlanningMutableResponse *_response;	// 72 = 0x48
    _Atomic _Bool _invalidated;	// 80 = 0x50
    NSMutableDictionary *_classesBySessionState;	// 88 = 0x58
    NSMutableDictionary *_userInfo;	// 96 = 0x60
    GEOObserverHashTable *_observers;	// 104 = 0x68
}

+ (void)setDefaultClass:(Class)arg1 forSessionState:(long long)arg2;	// IMP=0x0020000000ac451f
+ (id)_defaultClassesBySessionState;	// IMP=0x0010000000ac43cd
+ (unsigned long long)defaultOrigin;	// IMP=0x0010000000ac3011
- (void).cxx_destruct;	// IMP=0x0010000000ac5b58
@property(retain, nonatomic) GEOObserverHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) _Bool isInvalidated;
- (void)_assertNotInvalidated;	// IMP=0x0010000000ac5b2c
- (void)_endTransaction;	// IMP=0x0010000000ac5a7a
- (void)_startTransaction;	// IMP=0x0010000000ac591e
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000ac581c
- (void)addObserver:(id)arg1;	// IMP=0x0010000000ac570a
- (_Bool)_hasReceivedAllExpectedRoutes;	// IMP=0x0010000000ac5634
- (_Bool)hasReceivedAllExpectedRoutes;	// IMP=0x0010000000ac5528
- (void)_setSelectedRouteWithRouteID:(id)arg1;	// IMP=0x0010000000ac5490
- (void)setSelectedRouteWithRouteID:(id)arg1;	// IMP=0x0010000000ac53e3
@property(retain, nonatomic) GEOCompanionRouteDetails *selectedCompanionRoute;
@property(retain, nonatomic) GEOComposedRoute *selectedRoute;
- (void)_notifyDidChangeFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x0010000000ac4f91
- (void)replaceWithStateOfClass:(Class)arg1;	// IMP=0x0010000000ac4ea3
- (void)_transitionToState:(long long)arg1 withClass:(Class)arg2;	// IMP=0x0010000000ac4c5c
- (void)_transitionToState:(long long)arg1;	// IMP=0x0010000000ac4bfc
- (void)updateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000ac46d5
- (Class)_classForState:(long long)arg1;	// IMP=0x0010000000ac4600
- (void)setNextClass:(Class)arg1 forSessionState:(long long)arg2;	// IMP=0x0010000000ac45a4
- (void)_notifyDidInvalidate;	// IMP=0x0010000000ac4246
- (void)_notifySessionDidFail;	// IMP=0x0010000000ac4092
- (void)_notifySessionDidUpdateResponse;	// IMP=0x0010000000ac3ede
- (void)_notifySessionDidStartLoading;	// IMP=0x0010000000ac3d2a
- (void)_broadcastIfNeeded;	// IMP=0x0010000000ac3b89
- (void)setUserInfoKey:(id)arg1 andValue:(id)arg2;	// IMP=0x0010000000ac3a69
- (id)valueForUserInfoKey:(id)arg1;	// IMP=0x0010000000ac38df
- (void)setResponse:(id)arg1;	// IMP=0x0010000000ac3837
- (void)setRequest:(id)arg1;	// IMP=0x0010000000ac378f
@property(readonly, nonatomic) _Bool isLoading;
@property(nonatomic) _Bool shouldBroadcast;
@property(readonly, nonatomic) NanoRoutePlanningResponse *response;
@property(readonly, nonatomic) NanoRoutePlanningRequest *request;
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) unsigned long long origin;
- (void)_cancelRequestIfNeeded;	// IMP=0x0010000000ac3254
- (void)_prepareForRequest:(id)arg1;	// IMP=0x0010000000ac3163
- (void)_processRequest:(id)arg1;	// IMP=0x0010000000ac30c4
- (void)processRequest:(id)arg1;	// IMP=0x0010000000ac301c
- (void)invalidate;	// IMP=0x0010000000ac2ef7
- (id)_description;	// IMP=0x0010000000ac2e47
@property(readonly, copy) NSString *description;
- (id)initWithOrigin:(unsigned long long)arg1;	// IMP=0x0010000000ac2a68
- (id)init;	// IMP=0x0010000000ac2a2f
- (void)dealloc;	// IMP=0x0010000000ac2928
- (void)_updateWithRequest:(id)arg1 response:(id)arg2;	// IMP=0x0010000000ac5e4b
- (void)_anticipateRoutesWithRequest:(id)arg1;	// IMP=0x0010000000ac5cfd
- (void)updateWithRequest:(id)arg1 response:(id)arg2;	// IMP=0x0010000000ac5bcd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

