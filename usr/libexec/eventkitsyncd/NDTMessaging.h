//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NDTLogFacility, NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface NDTMessaging : NSObject
{
    NSMutableDictionary *_outstanding;	// 8 = 0x8
    NSMutableDictionary *_handlers;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_q;	// 24 = 0x18
    IDSService *_service;	// 32 = 0x20
    long long _priority;	// 40 = 0x28
    NDTLogFacility *_logFacility;	// 48 = 0x30
    _Bool _suspended;	// 56 = 0x38
    _Bool _cloudFallback;	// 57 = 0x39
    NSDictionary *_idsOptions;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000012e5a
@property(retain, nonatomic) NSDictionary *idsOptions; // @synthesize idsOptions=_idsOptions;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x0010000000012d55
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x00100000000127d9
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000000123fb
- (void)reply:(id)arg1 to:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000120fa
- (void)sendMessage:(id)arg1 responseHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000011be6
- (id)_rawSendFile:(id)arg1 type:(id)arg2 responseIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000118e6
- (id)_rawSendData:(id)arg1 type:(id)arg2 responseIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000011648
- (id)_makeMessageFromWireData:(id)arg1;	// IMP=0x0010000000011508
- (id)_makeWireMessageType:(id)arg1 content:(id)arg2;	// IMP=0x0010000000011401
- (void)setCloudFallback:(_Bool)arg1;	// IMP=0x00100000000113f8
- (void)setPriority:(unsigned int)arg1;	// IMP=0x00100000000113ce
- (void)resume;	// IMP=0x00100000000113bc
- (void)registerMessageType:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011338
- (id)initWithIDSServiceName:(id)arg1 logging:(id)arg2;	// IMP=0x0010000000011164
- (id)initWithIDSServiceName:(id)arg1;	// IMP=0x0010000000011150

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

