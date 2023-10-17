//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSBatchIDQueryController, IDSService, NSNumber, NSString;
@protocol OS_dispatch_queue, STIDSTransportPrimitivesDelegate;

@interface STConcreteIDSTransportPrimitives : NSObject
{
    id <STIDSTransportPrimitivesDelegate> delegate;	// 8 = 0x8
    IDSService *_service;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serviceQueue;	// 24 = 0x18
    NSString *_serviceName;	// 32 = 0x20
    NSNumber *_cachedCanSendStatus;	// 40 = 0x28
    IDSBatchIDQueryController *_primitiveDestinationStatusQueryController;	// 48 = 0x30
}

+ (void)_sortDestinationsToStatus:(id)arg1 intoReachableDestinations:(id *)arg2 unreachableDestinations:(id *)arg3 unknownReachabilityDestinations:(id *)arg4;	// IMP=0x002000000001927f
+ (id)_resourceURLForSendingOversizedData;	// IMP=0x001000000001813d
+ (id)_optionsDictionaryWithFromID:(id)arg1;	// IMP=0x001000000001777f
- (void).cxx_destruct;	// IMP=0x00200000000196e9
@property(retain) IDSBatchIDQueryController *primitiveDestinationStatusQueryController; // @synthesize primitiveDestinationStatusQueryController=_primitiveDestinationStatusQueryController;
@property(retain) NSNumber *cachedCanSendStatus; // @synthesize cachedCanSendStatus=_cachedCanSendStatus;
@property(readonly, copy) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(readonly) NSObject<OS_dispatch_queue> *serviceQueue; // @synthesize serviceQueue=_serviceQueue;
@property(readonly) IDSService *service; // @synthesize service=_service;
@property __weak id <STIDSTransportPrimitivesDelegate> delegate; // @synthesize delegate;
- (void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4;	// IMP=0x001000000001945c
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x00100000000191b2
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000018e69
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000018c58
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x0010000000018bc6
- (void)isCapabilityEnabledForDestination:(id)arg1 capability:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000018778
- (id)refreshedReachabilityOfPrimitiveDestination:(id)arg1;	// IMP=0x0010000000018453
- (void)addObserver:(id)arg1 forReachabilityChangesOfPrimitiveDestinations:(id)arg2;	// IMP=0x00100000000182ca
- (id)addressDestinationFromPrimitiveDestination:(id)arg1;	// IMP=0x00100000000182b5
- (id)rawAddressFromPrimitiveDestination:(id)arg1;	// IMP=0x00100000000182a0
- (id)primitiveDestinationFromRawAddress:(id)arg1;	// IMP=0x0010000000018236
- (id)_sendOversizedData:(id)arg1 toDestinations:(id)arg2 sendOptions:(id)arg3;	// IMP=0x0010000000017dd2
- (void)_sendData:(id)arg1 sendDataBlock:(CDUnknownBlockType)arg2 sendOversizedDataBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000017d6d
- (id)_sendData:(id)arg1 toDestinations:(id)arg2 options:(id)arg3;	// IMP=0x001000000001785b
- (id)sendAcknowledgementMessageForResponseIdentifier:(id)arg1 toDestination:(id)arg2 fromDestination:(id)arg3;	// IMP=0x001000000001764b
- (id)sendData:(id)arg1 toDestinations:(id)arg2 fromDestination:(id)arg3;	// IMP=0x0010000000017567
@property(readonly) _Bool signedInUserHasMultipleDevices;
@property(readonly) _Bool canSend;
- (void)stop;	// IMP=0x001000000001729e
- (void)startOnQueue:(id)arg1;	// IMP=0x0010000000017186
- (void)dealloc;	// IMP=0x001000000001712b
- (id)initWithServiceName:(id)arg1;	// IMP=0x001000000001707e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
