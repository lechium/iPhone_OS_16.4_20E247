//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FMXPCSession, NSString, SPLocationFetchContext;
@protocol SPOwnerSessionXPCProtocol;

__attribute__((visibility("hidden")))
@interface SPOwnerSessionLocationFetch : NSObject
{
    FMXPCSession *_session;	// 8 = 0x8
    id <SPOwnerSessionXPCProtocol> _proxy;	// 16 = 0x10
    CDUnknownBlockType _locationUpdates;	// 24 = 0x18
    CDUnknownBlockType _locationFetchSessionInvalidationBlock;	// 32 = 0x20
    unsigned long long _retryCount;	// 40 = 0x28
    SPLocationFetchContext *_lastContext;	// 48 = 0x30
}

+ (id)remoteInterface;	// IMP=0x001000000003acda
+ (id)exportedInterface;	// IMP=0x001000000003ac6e
- (void).cxx_destruct;	// IMP=0x000000000003b711
@property(copy, nonatomic) SPLocationFetchContext *lastContext; // @synthesize lastContext=_lastContext;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(copy, nonatomic) CDUnknownBlockType locationFetchSessionInvalidationBlock; // @synthesize locationFetchSessionInvalidationBlock=_locationFetchSessionInvalidationBlock;
@property(copy, nonatomic) CDUnknownBlockType locationUpdates; // @synthesize locationUpdates=_locationUpdates;
@property(retain, nonatomic) id <SPOwnerSessionXPCProtocol> proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) FMXPCSession *session; // @synthesize session=_session;
- (void)setInvalidationBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003b674
- (void)locationForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003b400
- (void)unsubscribeLocationUpdatesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003b313
- (void)subscribeAndFetchLocationForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003af57
- (void)setLocationUpdateBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003af45
- (void)receivedUpdatedLocation:(id)arg1;	// IMP=0x000000000003ad46
- (void)invalidationHandler:(id)arg1;	// IMP=0x000000000003a755
- (double)_decayedWaitIntervalForRetryCount:(unsigned long long)arg1;	// IMP=0x000000000003a721
- (void)interruptionHandler:(id)arg1;	// IMP=0x000000000003a433
- (id)init;	// IMP=0x000000000003a404

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

