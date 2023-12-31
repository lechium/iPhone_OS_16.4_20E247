//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SLDServiceProxy;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SLShareableContentObserver : NSObject
{
    SLDServiceProxy *_serviceProxy;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serviceQueue;	// 16 = 0x10
    unsigned long long _state;	// 24 = 0x18
    _Bool _needsRefresh;	// 32 = 0x20
}

+ (id)sharedObserver;	// IMP=0x001000000004886b
- (void).cxx_destruct;	// IMP=0x000000000004965a
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool needsRefresh; // @synthesize needsRefresh=_needsRefresh;
- (void)serviceProxyDidDisconnect:(id)arg1;	// IMP=0x00000000000495d2
- (void)serviceProxyDidConnect:(id)arg1;	// IMP=0x00000000000494e0
- (void)userActivityWasCreated:(id)arg1;	// IMP=0x00000000000493ac
- (void)willResignActiveNotification:(id)arg1;	// IMP=0x00000000000492c6
- (void)didEnterBackgroundNotification:(id)arg1;	// IMP=0x00000000000491e0
- (void)didBecomeActiveNotification:(id)arg1;	// IMP=0x00000000000490fa
- (void)reset;	// IMP=0x0000000000049071
- (void)pause;	// IMP=0x0000000000048ff9
- (void)connectAndRefreshNow;	// IMP=0x0000000000048dfb
- (void)refreshIfNeeded;	// IMP=0x0000000000048d23
- (_Bool)needsToRefresh;	// IMP=0x0000000000048ce8
- (void)resumeIfNeeded;	// IMP=0x0000000000048c1f
- (_Bool)needsToResume;	// IMP=0x0000000000048be5
- (_Bool)applicationIsActive;	// IMP=0x0000000000048b96
- (void)setNeedsRefresh;	// IMP=0x0000000000048b0e
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;
@property(readonly, nonatomic) SLDServiceProxy *serviceProxy;
- (void)addObservers;	// IMP=0x000000000004894e
- (id)init;	// IMP=0x00000000000488f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

