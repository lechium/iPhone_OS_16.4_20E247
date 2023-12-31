//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MRDIDSService : NSObject
{
    IDSService *_idsService;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableDictionary *_responseHandlers;	// 24 = 0x18
    NSMutableDictionary *_deviceMessageHandlers;	// 32 = 0x20
    NSMutableDictionary *_totalMessageHandlers;	// 40 = 0x28
    unsigned long long _totalOutgoingMessageCount;	// 48 = 0x30
}

+ (id)sharedService;	// IMP=0x0020000000023397
- (void).cxx_destruct;	// IMP=0x0020000000024d87
@property(readonly, nonatomic) unsigned long long totalOutgoingMessageCount; // @synthesize totalOutgoingMessageCount=_totalOutgoingMessageCount;
@property(retain, nonatomic) NSMutableDictionary *totalMessageHandlers; // @synthesize totalMessageHandlers=_totalMessageHandlers;
@property(retain, nonatomic) NSMutableDictionary *deviceMessageHandlers; // @synthesize deviceMessageHandlers=_deviceMessageHandlers;
@property(retain, nonatomic) NSMutableDictionary *responseHandlers; // @synthesize responseHandlers=_responseHandlers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
- (unsigned long long)_generateMessageID;	// IMP=0x0010000000024ccb
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000024210
- (_Bool)_sendMessage:(id)arg1 device:(id)arg2 type:(id)arg3 destination:(id)arg4 session:(id)arg5 options:(id)arg6 priority:(long long)arg7 replyID:(id)arg8 response:(CDUnknownBlockType)arg9;	// IMP=0x0010000000023bea
- (_Bool)sendMessage:(id)arg1 device:(id)arg2 type:(id)arg3 destination:(id)arg4 session:(id)arg5 options:(id)arg6 priority:(long long)arg7 response:(CDUnknownBlockType)arg8;	// IMP=0x0010000000023bac
- (void)removeHandler:(id)arg1;	// IMP=0x0010000000023ab0
- (id)_addMessageHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000239a1
- (id)_addMessageHandlerForDevice:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002381f
- (id)addMessageHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000023770
- (id)addMessageHandlerForDevice:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000236b7
@property(readonly, copy) NSString *debugDescription;
- (id)initWithService:(id)arg1;	// IMP=0x001000000002343d

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

