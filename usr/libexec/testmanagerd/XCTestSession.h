//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSError, NSString, NSXPCConnection, RCPEventStreamRecorder, XCTCapabilities, XCTDInternalTelemetryLogger, XCTDSignpostListener, XCTScreenshotRequest;
@protocol OS_dispatch_queue, OS_os_transaction, XCAXManager, XCTDAutomationModeInterface, XCTDAutomationServicesProviding, XCTDDiagnosticsProviding, XCTDProcessManagementServicesProviding, XCTDScreenshotProviding, XCTDTargetBootstrapSessionProviding, XCTestSessionDelegate;

@interface XCTestSession : NSObject
{
    _Bool _valid;	// 8 = 0x8
    _Bool _hasTestingEntitlement;	// 9 = 0x9
    _Bool _hasInternalClientEntitlement;	// 10 = 0xa
    _Bool _recapIsRunning;	// 11 = 0xb
    NSXPCConnection *_connection;	// 16 = 0x10
    id <XCTDAutomationModeInterface> _automationModeInterface;	// 24 = 0x18
    id <XCTDScreenshotProviding> _screenshotProvider;	// 32 = 0x20
    id <XCTDDiagnosticsProviding> _diagnosticsProvider;	// 40 = 0x28
    id <XCTDProcessManagementServicesProviding> _processManagementServices;	// 48 = 0x30
    id <XCTDAutomationServicesProviding> _automationServices;	// 56 = 0x38
    id <XCTDTargetBootstrapSessionProviding> _targetBootstrapSessionProvider;	// 64 = 0x40
    id <XCTestSessionDelegate> _delegate;	// 72 = 0x48
    MISSING_TYPE *_disconnectionHandler;	// 80 = 0x50
    XCTCapabilities *_remoteInterfaceCapabilities;	// 88 = 0x58
    NSString *_clientBundleID;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_queue;	// 104 = 0x68
    NSObject<OS_os_transaction> *_osTransaction;	// 112 = 0x70
    XCTDSignpostListener *_signpostListener;	// 120 = 0x78
    CDUnknownBlockType _automationServicesFactory;	// 128 = 0x80
    NSError *_automationServicesError;	// 136 = 0x88
    XCTDInternalTelemetryLogger *_internalTelemetryLogger;	// 144 = 0x90
    RCPEventStreamRecorder *_recapEventRecorder;	// 152 = 0x98
}

+ (_Bool)supportsHIDEventRecording;	// IMP=0x0020000000011bfe
+ (_Bool)supportsPostingTelemetryData;	// IMP=0x0010000000011a35
+ (_Bool)_isCurrentIdiomIPad;	// IMP=0x001000000000c1dc
+ (id)capabilitiesBuilder;	// IMP=0x001000000000bdcb
- (void).cxx_destruct;	// IMP=0x0010000000012313
@property _Bool recapIsRunning; // @synthesize recapIsRunning=_recapIsRunning;
@property(retain) RCPEventStreamRecorder *recapEventRecorder; // @synthesize recapEventRecorder=_recapEventRecorder;
@property(readonly) XCTDInternalTelemetryLogger *internalTelemetryLogger; // @synthesize internalTelemetryLogger=_internalTelemetryLogger;
@property(retain) NSError *automationServicesError; // @synthesize automationServicesError=_automationServicesError;
@property(readonly) CDUnknownBlockType automationServicesFactory; // @synthesize automationServicesFactory=_automationServicesFactory;
@property(readonly) XCTDSignpostListener *signpostListener; // @synthesize signpostListener=_signpostListener;
@property(retain) NSObject<OS_os_transaction> *osTransaction; // @synthesize osTransaction=_osTransaction;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(retain) XCTCapabilities *remoteInterfaceCapabilities; // @synthesize remoteInterfaceCapabilities=_remoteInterfaceCapabilities;
@property(readonly) _Bool hasInternalClientEntitlement; // @synthesize hasInternalClientEntitlement=_hasInternalClientEntitlement;
@property(readonly) _Bool hasTestingEntitlement; // @synthesize hasTestingEntitlement=_hasTestingEntitlement;
@property(copy) CDUnknownBlockType disconnectionHandler; // @synthesize disconnectionHandler=_disconnectionHandler;
@property(getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property __weak id <XCTestSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) id <XCTDTargetBootstrapSessionProviding> targetBootstrapSessionProvider; // @synthesize targetBootstrapSessionProvider=_targetBootstrapSessionProvider;
@property(retain) id <XCTDAutomationServicesProviding> automationServices; // @synthesize automationServices=_automationServices;
@property(readonly) id <XCTDProcessManagementServicesProviding> processManagementServices; // @synthesize processManagementServices=_processManagementServices;
@property(readonly) id <XCTDDiagnosticsProviding> diagnosticsProvider; // @synthesize diagnosticsProvider=_diagnosticsProvider;
@property(readonly) id <XCTDScreenshotProviding> screenshotProvider; // @synthesize screenshotProvider=_screenshotProvider;
@property(readonly) id <XCTDAutomationModeInterface> automationModeInterface; // @synthesize automationModeInterface=_automationModeInterface;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)_XCT_playBackHIDEventRecordingFromData:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011f4e
- (void)_XCT_stopHIDEventRecordingWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000011e28
- (void)_XCT_startHIDEventRecordingWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000011c0f
- (void)_XCT_postTelemetryData:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011a46
- (void)_XCT_requestCurrentKeyboardModifierFlagsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000118a2
- (void)_XCT_resetAuthorizationStatusForBundleIdentifier:(id)arg1 resourceIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000011763
- (void)_XCT_injectVoiceRecognitionAudioInputPaths:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011641
- (void)_XCT_injectAssistantRecognitionStrings:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001151f
- (void)_XCT_startSiriUIRequestWithAudioFileURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000113fd
- (void)_XCT_startSiriUIRequestWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000112db
- (void)_XCT_requestSiriEnabledStatus:(CDUnknownBlockType)arg1;	// IMP=0x00100000000111fc
- (void)_XCT_getInterfaceOrientationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000110e8
- (void)_XCT_sendString:(id)arg1 maximumFrequency:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000011009
- (void)_XCT_performDeviceEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010eb6
- (void)_XCT_synthesizeEvent:(id)arg1 implicitConfirmationInterval:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000010d47
- (void)_XCT_synthesizeEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010bf4
- (void)_XCT_requestPressureEventsSupported:(CDUnknownBlockType)arg1;	// IMP=0x0010000000010b31
- (void)_XCT_hasHardwareButton:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010a2f
- (void)_XCT_requestProcessSpecifierForPID:(int)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010835
- (void)_XCT_requestBundleIDForPID:(int)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000106b2
- (void)_XCT_startMonitoringApplicationWithBundleID:(id)arg1 path:(id)arg2;	// IMP=0x001000000001060c
- (void)_XCT_startMonitoringApplicationWithBundleID:(id)arg1;	// IMP=0x00100000000105f8
- (void)_XCT_openURL:(id)arg1 usingApplication:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000104ee
- (void)_XCT_openDefaultApplicationForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000103fa
- (void)_XCT_terminateApplicationWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000103e3
- (void)_XCT_terminateApplicationWithBundleID:(id)arg1 pid:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000010296
- (void)_XCT_launchApplicationWithBundleID:(id)arg1 path:(id)arg2 arguments:(id)arg3 environment:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000010102
- (void)_XCT_launchApplicationWithBundleID:(id)arg1 arguments:(id)arg2 environment:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000100d8
- (void)applicationDidUpdateState:(id)arg1;	// IMP=0x001000000000fceb
- (void)orientationManagerDidUpdateInterfaceOrientation:(long long)arg1;	// IMP=0x001000000000fc41
- (void)orientationManagerDidUpdateDeviceOrientation:(long long)arg1;	// IMP=0x001000000000fb97
- (void)_XCT_getDeviceOrientationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000fa2b
- (void)_XCT_updateDeviceOrientation:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f910
- (void)_XCT_enableFauxCollectionViewCells:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f854
- (void)_XCT_setLocalizableStringsDataGatheringEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f78c
- (void)_XCT_requestElementAtPoint:(struct CGPoint)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f67e
- (void)_XCT_fetchParameterizedAttribute:(id)arg1 forElement:(id)arg2 parameter:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000f50e
- (void)_XCT_fetchParameterizedAttributeForElement:(id)arg1 attributes:(id)arg2 parameter:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000f3c4
- (void)_XCT_setAttribute:(id)arg1 value:(id)arg2 element:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000f294
- (void)_XCT_fetchAttributes:(id)arg1 forElement:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000f143
- (void)_XCT_runAccessibilityAuditForElement:(id)arg1 withConfiguration:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000eff2
- (_Bool)ensureUITestingIsReadyWithError:(id *)arg1;	// IMP=0x001000000000efd8
- (void)_XCT_fetchSnapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000eb4f
- (void)_XCT_requestSnapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000ea04
- (void)_XCT_snapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000e984
- (void)_XCT_unregisterForAccessibilityNotification:(int)arg1 withRegistrationToken:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000e893
- (void)_XCT_registerForAccessibilityNotification:(int)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e496
- (void)_XCT_performAccessibilityAction:(int)arg1 onElement:(id)arg2 withValue:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000e393
- (void)_XCT_setAXTimeout:(double)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e2d2
- (void)_XCT_loadAccessibilityWithTimeout:(double)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e1b1
- (void)_XCT_unloadAccessibility:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e133
- (void)_XCT_fetchAttributesForElement:(id)arg1 attributes:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000e0b3
- (_Bool)ensureUITestingIsReadyWithTimeout:(double)arg1 error:(id *)arg2;	// IMP=0x001000000000ddcf
- (void)_XCT_setSimulatedLocation:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000dc52
- (void)_XCT_getSimulatedLocationWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000db2d
- (void)_XCT_clearSimulatedLocationWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000da28
- (void)_XCT_getAppearanceModeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000d8ed
- (void)_XCT_updateAppearanceMode:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d791
- (void)_XCT_requestBackgroundAssertionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000d6d4
- (void)_XCT_requestBackgroundAssertionForPID:(int)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d63e
- (void)_XCT_unregisterForSignpostsWithToken:(id)arg1;	// IMP=0x001000000000d5cc
- (void)_XCT_registerForSignpostsFromSubsystem:(id)arg1 category:(id)arg2 intervalTimeout:(double)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000d3bd
- (void)_XCT_requestTailspinWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d201
- (void)_XCT_requestSpindumpWithSpecification:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d001
- (void)_XCT_requestScreenshot:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000cfef
- (void)_XCT_requestScreenshotOfScreenWithID:(unsigned int)arg1 withRect:(struct CGRect)arg2 uti:(id)arg3 compressionQuality:(double)arg4 withReply:(CDUnknownBlockType)arg5;	// IMP=0x001000000000cf6f
- (void)_XCT_requestScreenshotWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ceef
- (void)_XCT_requestDTServiceHubConnectionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000cd9a
- (void)_XCT_requestUnsupportedBundleIdentifiersForAutomationSessions:(CDUnknownBlockType)arg1;	// IMP=0x001000000000cb88
- (void)_XCT_requestEndpointForTestTargetWithPID:(int)arg1 preferredBackendPath:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000c8d0
- (void)_XCT_requestSerializedTransportWrapperForIDESessionWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000c6ff
- (void)_XCT_enableAutomationModeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000c506
- (void)_XCT_requestSocketForSessionIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000c35c
- (void)_XCT_exchangeCapabilities:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000c220
- (void)_XCT_exchangeProtocolVersion:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000bd17
@property(readonly, nonatomic) id <XCAXManager> axManager;
- (id)gesturePerformer;	// IMP=0x001000000000bc77
- (id)systemConfiguration;	// IMP=0x001000000000bc27
- (id)orientationManager;	// IMP=0x001000000000bbd7
- (id)remoteObjectProxy;	// IMP=0x001000000000ba2e
- (_Bool)isAuthorizedInternalClientWithProcessID:(int)arg1;	// IMP=0x001000000000b9da
@property(readonly, nonatomic) _Bool allowsUITestControl;
@property(readonly) int processIdentifier;
- (void)_takeAssertionForAndMonitorConnectionProcess;	// IMP=0x001000000000b5f3
@property(readonly, copy) NSString *description;
- (id)initWithNSXPCConnection:(id)arg1 delegate:(id)arg2 automationModeInterface:(id)arg3 diagnosticsProvider:(id)arg4 screenshotProvider:(id)arg5 processManagementServices:(id)arg6 targetBootstrapSessionProvider:(id)arg7 automationServicesFactory:(CDUnknownBlockType)arg8;	// IMP=0x001000000000af06
- (id)initWithNSXPCConnection:(id)arg1 delegate:(id)arg2 diagnosticsProvider:(id)arg3 processManagementServices:(id)arg4 targetBootstrapSessionProvider:(id)arg5;	// IMP=0x001000000000ad6e
- (id)initWithNSXPCConnection:(id)arg1 delegate:(id)arg2 diagnosticsProvider:(id)arg3 targetBootstrapSessionProvider:(id)arg4;	// IMP=0x001000000000acac
- (void)invalidate;	// IMP=0x001000000000a9ad
- (void)dealloc;	// IMP=0x001000000000a880
- (void)_XCT_requestScreenshot:(XCTScreenshotRequest *)arg1 completion:(void (^)(XCTImage *, NSError *))arg2;	// IMP=0x001000000004b283
- (void)_loadAccessibilityWithTimeout:(double)arg1 reply:(void (^)(_Bool, NSError *))arg2;	// IMP=0x001000000004ba72
- (void)_XCT_resetAuthorizationStatusOfProtectedResourceWithIdentifier:(NSString *)arg1 bundleIdentifier:(NSString *)arg2 auditToken:(CDStruct_6ad76789)arg3 completion:(void (^)(NSError *))arg4;	// IMP=0x001000000004f20d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

