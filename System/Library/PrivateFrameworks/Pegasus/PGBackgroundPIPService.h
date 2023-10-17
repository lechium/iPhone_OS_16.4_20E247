//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnectionListener, NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol OS_dispatch_queue, PGBackgroundPIPServiceDelegate;

__attribute__((visibility("hidden")))
@interface PGBackgroundPIPService : NSObject
{
    BSServiceConnectionListener *_connectionListener;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableSet *_mutableIdentifiersForAuthorizedActivitySessions;	// 24 = 0x18
    NSMutableSet *_lock_targets;	// 32 = 0x20
    NSMutableDictionary *_lock_targetsByActivitySessionIdentifier;	// 40 = 0x28
    struct os_unfair_lock_s _lock;	// 48 = 0x30
    id <PGBackgroundPIPServiceDelegate> _delegate;	// 56 = 0x38
    NSSet *_identifiersForAuthorizedActivitySessions;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000003018f
@property(readonly, copy, nonatomic) NSSet *identifiersForAuthorizedActivitySessions; // @synthesize identifiersForAuthorizedActivitySessions=_identifiersForAuthorizedActivitySessions;
@property(nonatomic) __weak id <PGBackgroundPIPServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_targetForIdentifier:(id)arg1;	// IMP=0x00000000000300f7
- (void)revokeAuthorizationActivitySessionWithIdentifier:(id)arg1;	// IMP=0x00000000000300b0
- (_Bool)hasAcquiredAuthorizationForActivitySessionWithIdentifier:(id)arg1 appBundleIdentifier:(id)arg2;	// IMP=0x000000000002ff9d
- (void)pipDidStopForRemoteObject:(id)arg1;	// IMP=0x000000000002fdce
- (void)pipDidStartForRemoteObject:(id)arg1;	// IMP=0x000000000002fcae
- (void)backgroundPIPTargetDidInvalidate:(id)arg1;	// IMP=0x000000000002fc9c
- (void)backgroundPIPTargetRequestsAuthorization:(id)arg1;	// IMP=0x000000000002f7cc
- (void)_handleInvalidatedTarget:(id)arg1;	// IMP=0x000000000002f411
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x000000000002edac
- (void)dealloc;	// IMP=0x000000000002ed6a
- (void)startListener;	// IMP=0x000000000002ed54
- (id)init;	// IMP=0x000000000002eb5a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
