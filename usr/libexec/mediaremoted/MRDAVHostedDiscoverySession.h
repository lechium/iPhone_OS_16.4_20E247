//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDHostedRoutingController, MRDMediaRemoteClient, MROSTransaction, MRXPCConnectionMonitor, NSArray, NSDate, NSString, NSXPCConnection;
@protocol MRDAVHostedDiscoverySessionDelegate, OS_dispatch_queue;

@interface MRDAVHostedDiscoverySession : NSObject
{
    _Bool _enableThrottling;	// 8 = 0x8
    _Bool _endpointsDelayed;	// 9 = 0x9
    _Bool _devicesDelayed;	// 10 = 0xa
    unsigned int _discoveryMode;	// 12 = 0xc
    NSXPCConnection *_connection;	// 16 = 0x10
    MRDHostedRoutingController *_hostedRoutingController;	// 24 = 0x18
    id <MRDAVHostedDiscoverySessionDelegate> _delegate;	// 32 = 0x20
    MROSTransaction *_transaction;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_serialQueue;	// 48 = 0x30
    NSArray *_updatedEndpoints;	// 56 = 0x38
    NSArray *_updatedOutputDevices;	// 64 = 0x40
    NSArray *_pendingEndpoints;	// 72 = 0x48
    NSArray *_pendingOutputDevices;	// 80 = 0x50
    MRXPCConnectionMonitor *_connectionMonitor;	// 88 = 0x58
    NSString *_bundleIdentifier;	// 96 = 0x60
    NSDate *_lastDiscoveryModeEnableDate;	// 104 = 0x68
    NSDate *_lastDiscoveryModeDisableDate;	// 112 = 0x70
    MRDMediaRemoteClient *_xpcClient;	// 120 = 0x78
    NSString *_clientIdentifier;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x002000000003b1b6
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain, nonatomic) MRDMediaRemoteClient *xpcClient; // @synthesize xpcClient=_xpcClient;
@property(retain, nonatomic) NSDate *lastDiscoveryModeDisableDate; // @synthesize lastDiscoveryModeDisableDate=_lastDiscoveryModeDisableDate;
@property(retain, nonatomic) NSDate *lastDiscoveryModeEnableDate; // @synthesize lastDiscoveryModeEnableDate=_lastDiscoveryModeEnableDate;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) MRXPCConnectionMonitor *connectionMonitor; // @synthesize connectionMonitor=_connectionMonitor;
@property(nonatomic) _Bool devicesDelayed; // @synthesize devicesDelayed=_devicesDelayed;
@property(nonatomic) _Bool endpointsDelayed; // @synthesize endpointsDelayed=_endpointsDelayed;
@property(retain, nonatomic) NSArray *pendingOutputDevices; // @synthesize pendingOutputDevices=_pendingOutputDevices;
@property(retain, nonatomic) NSArray *pendingEndpoints; // @synthesize pendingEndpoints=_pendingEndpoints;
@property(retain, nonatomic) NSArray *updatedOutputDevices; // @synthesize updatedOutputDevices=_updatedOutputDevices;
@property(retain, nonatomic) NSArray *updatedEndpoints; // @synthesize updatedEndpoints=_updatedEndpoints;
@property(nonatomic) _Bool enableThrottling; // @synthesize enableThrottling=_enableThrottling;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) MROSTransaction *transaction; // @synthesize transaction=_transaction;
@property(nonatomic) __weak id <MRDAVHostedDiscoverySessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MRDHostedRoutingController *hostedRoutingController; // @synthesize hostedRoutingController=_hostedRoutingController;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) unsigned int discoveryMode; // @synthesize discoveryMode=_discoveryMode;
- (void)_maybeWakeClient;	// IMP=0x001000000003aed6
- (void)_resumeConnection;	// IMP=0x001000000003aab0
- (void)_notifyAvailableEndpointsDidChange:(id)arg1;	// IMP=0x001000000003a853
- (void)_notifyAvailableOutputDevicesDidChange:(id)arg1;	// IMP=0x001000000003a5f6
- (void)_invalidate;	// IMP=0x001000000003a5a2
- (void)connectionDidResume:(id)arg1;	// IMP=0x001000000003a590
- (void)getAvailableOutputDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003a52e
- (void)getAvailableEndpointsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003a4cc
- (void)setDiscoveryMode:(unsigned int)arg1 enableThrottling:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003a416
- (void)getDiscoveryModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003a403
- (void)getDevicePresenceDetectedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003a3b4
- (void)hostedRoutingController:(id)arg1 outputDevicesDidChange:(id)arg2 forFeature:(unsigned int)arg3;	// IMP=0x001000000003a24d
- (void)hostedRoutingController:(id)arg1 endpointsDidChange:(id)arg2;	// IMP=0x001000000003a0e6
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;	// IMP=0x0010000000039c2c
- (id)initWithConnection:(id)arg1 hostedRoutingController:(id)arg2;	// IMP=0x00100000000397a7

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
