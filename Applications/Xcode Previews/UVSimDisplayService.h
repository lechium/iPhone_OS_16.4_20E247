//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSDisplayMonitor, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UISApplicationSupportService;
@protocol UVSimDisplayServiceDelegate;

@interface UVSimDisplayService : NSObject
{
    NSMutableSet *_connectedDisplays;	// 8 = 0x8
    NSMutableDictionary *_pendingDisplays;	// 16 = 0x10
    NSMutableArray *_availableDisplayNames;	// 24 = 0x18
    FBSDisplayMonitor *_monitor;	// 32 = 0x20
    struct __SFBConnection *_simConnection;	// 40 = 0x28
    UISApplicationSupportService *_applicationSupportService;	// 48 = 0x30
    id <UVSimDisplayServiceDelegate> _delegate;	// 56 = 0x38
}

+ (id)shared;	// IMP=0x00200000000026a0
- (void).cxx_destruct;	// IMP=0x0020000000004832
@property __weak id <UVSimDisplayServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_resetSimDisplay:(struct __SFBDisplay *)arg1;	// IMP=0x001000000000463c
- (void)_resetAllSimDisplays;	// IMP=0x001000000000452b
- (void)_resetDisplayName:(id)arg1 displayID:(unsigned int)arg2;	// IMP=0x00100000000044b5
- (id)service:(id)arg1 initializeClient:(id)arg2;	// IMP=0x0010000000004140
- (id)_pendingDisplayNamed:(id)arg1;	// IMP=0x0010000000003f13
- (void)_handleDisplayTimedOutForToken:(id)arg1;	// IMP=0x0010000000003bfb
- (void)_handleDisplayConnectionFailed:(id)arg1 error:(id)arg2;	// IMP=0x0010000000003975
- (void)_handleDisplayConnectionSucceeded:(id)arg1 configuration:(id)arg2;	// IMP=0x0010000000003628
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;	// IMP=0x0010000000003583
- (void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3;	// IMP=0x001000000000356b
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;	// IMP=0x0010000000003553
- (void)recycleDisplay:(id)arg1;	// IMP=0x001000000000343b
- (void)cancelPreparingDisplayForToken:(id)arg1;	// IMP=0x00100000000032cc
- (void)_connectPendingDisplay:(id)arg1;	// IMP=0x0010000000002b9b
- (id)prepareNewDisplayWithPointSize:(struct CGSize)arg1 scale:(double)arg2 capabilitiesPath:(id)arg3 maskPath:(id)arg4 successHandler:(CDUnknownBlockType)arg5 failureHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000002930
- (id)init;	// IMP=0x00100000000026f5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

