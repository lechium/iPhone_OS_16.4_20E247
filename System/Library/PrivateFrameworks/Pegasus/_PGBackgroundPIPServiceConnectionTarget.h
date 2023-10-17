//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnection, NSString;
@protocol _PGBackgroundPIPServiceConnectionTargetDelegate;

__attribute__((visibility("hidden")))
@interface _PGBackgroundPIPServiceConnectionTarget : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSString *_lock_activitySessionIdentifier;	// 16 = 0x10
    NSString *_lock_bundleIdentifier;	// 24 = 0x18
    long long _lock_state;	// 32 = 0x20
    BSServiceConnection *_connection;	// 40 = 0x28
    id <_PGBackgroundPIPServiceConnectionTargetDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000013f22
@property(nonatomic) __weak id <_PGBackgroundPIPServiceConnectionTargetDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
- (void)invalidate;	// IMP=0x0000000000013de7
- (oneway void)revokeAuthorization;	// IMP=0x0000000000013dd0
- (oneway void)grantAuthorizationForActivitySessionWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x0000000000013d2a
@property(readonly, nonatomic, getter=isConnectionActive) _Bool connectionActive;
- (void)transitionToStateIfPossible:(long long)arg1;	// IMP=0x0000000000013a67
@property(readonly, nonatomic) long long state;
@property(readonly, copy) NSString *bundleIdentifier;
@property(readonly, copy) NSString *activitySessionIdentifier;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000001392f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
