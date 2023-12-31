//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_os_transaction, PCSIDSMessagingDelegate, PCSIDSMessagingDeviceManager;

@interface PCSIDSTransport : NSObject
{
    _Bool _serviceDelegateSet;	// 8 = 0x8
    id <PCSIDSMessagingDelegate> _delegate;	// 16 = 0x10
    NSMutableDictionary *_pendingReplies;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_internalQueue;	// 32 = 0x20
    IDSService *_service;	// 40 = 0x28
    NSObject<OS_os_transaction> *_transaction;	// 48 = 0x30
    id <PCSIDSMessagingDeviceManager> _deviceManager;	// 56 = 0x38
}

+ (id)transportWithIDSServiceName:(id)arg1;	// IMP=0x002000000000de55
- (void).cxx_destruct;	// IMP=0x002000000000fc8f
@property(nonatomic) __weak id <PCSIDSMessagingDeviceManager> deviceManager; // @synthesize deviceManager=_deviceManager;
@property(retain) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property _Bool serviceDelegateSet; // @synthesize serviceDelegateSet=_serviceDelegateSet;
@property(readonly) IDSService *service; // @synthesize service=_service;
@property(readonly) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(readonly) NSMutableDictionary *pendingReplies; // @synthesize pendingReplies=_pendingReplies;
@property(nonatomic) __weak id <PCSIDSMessagingDelegate> delegate; // @synthesize delegate=_delegate;
- (id)copyLocalPairedDevices;	// IMP=0x001000000000fbe8
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x001000000000fab1
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x001000000000f6b6
- (void)sendResponse:(id)arg1 toMessage:(id)arg2 withPriority:(long long)arg3 timeout:(double)arg4 logDescription:(id)arg5;	// IMP=0x001000000000f041
- (void)sendMessage:(id)arg1 toDevice:(id)arg2 withPriority:(long long)arg3 timeout:(double)arg4 logDescription:(id)arg5 handleReply:(CDUnknownBlockType)arg6;	// IMP=0x001000000000e880
- (id)initWithServiceName:(id)arg1;	// IMP=0x001000000000e0b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

