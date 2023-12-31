//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSProcessInfo, MISSING_TYPE, NSData, NSString, NSXPCConnection, Optional, XPCServiceCatalog, XPCServiceEntitlements;

@interface XPCServiceClient : NSObject
{
    NSData *_auditTokenData;	// 8 = 0x8
    XPCServiceCatalog *_catalog;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    Optional *_enableDiagnostics;	// 32 = 0x20
    XPCServiceEntitlements *_entitlements;	// 40 = 0x28
    MISSING_TYPE *hasSeenAppStore;	// 48 = 0x30
    AMSProcessInfo *_processInfo;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000012c3aa
- (void)getPersonalizationServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012c302
- (_Bool)isDialogObserverAvailable;	// IMP=0x001000000012c152
- (void)deliverViewPresentationRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000012c052
- (_Bool)hasConnection;	// IMP=0x001000000012c02b
- (void)deliverProgress:(id)arg1 withBarrierBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000012bf69
- (void)deliverNotifications:(id)arg1 withBarrierBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000012bea7
- (void)deliverEngagementRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000012bda7
- (void)deliverDialogRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000012bca7
- (void)deliverAuthenticateRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000012bba7
- (void)getUpdatesServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012baff
- (void)getTestFlightFeedbackServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012ba57
- (void)getStoreKitExternalNotificationServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012b9af
- (void)getSkannerServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012b907
- (void)getRestoreServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012b85f
- (void)getRepairServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012b7b7
- (void)getPurchaseServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012b70f
- (void)getPurchaseHistoryServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012b667
- (void)getMetricsServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012b5bf
- (void)getOcelotServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012b517
- (void)getManagedAppServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012b46f
- (void)getCrossfireServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012b3c7
- (void)getLibraryServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012b31f
- (void)getInstallAttributionServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012b277
- (void)getInstallationServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012b1cf
- (void)getIAPHistoryServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012b127
- (void)getFairPlayServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012b07f
- (void)getDiagnosticServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012afd7
- (void)getClipServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012af2f
- (void)getArcadeServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012ae87
- (void)getAppStoreServiceWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012ab93

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

