//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol CBXpcConnectionDelegate, OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface CBXpcConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_eventQueue;	// 8 = 0x8
    NSMutableDictionary *_options;	// 16 = 0x10
    int _sessionType;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_xpcQueue;	// 32 = 0x20
    NSObject<OS_xpc_object> *_xpcConnection;	// 40 = 0x28
    _Bool _uiAppIsBackgrounded;	// 48 = 0x30
    CDUnknownBlockType _whbReplyHandler;	// 56 = 0x38
    NSMutableDictionary *_whbRemoteToLocalUuidMap;	// 64 = 0x40
    id <CBXpcConnectionDelegate> _delegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000004f0c0
@property(nonatomic) __weak id <CBXpcConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_applicationWillEnterForegroundNotification;	// IMP=0x000000000004f070
- (void)_applicationDidEnterBackgroundNotification;	// IMP=0x000000000004f050
- (void)_handleConnectionEvent:(id)arg1;	// IMP=0x000000000004eef0
- (void)_handleFinalized;	// IMP=0x000000000004ee80
- (void)_handleInvalid;	// IMP=0x000000000004ed90
- (void)_handleReset;	// IMP=0x000000000004ec90
- (void)_handleMsg:(id)arg1;	// IMP=0x000000000004e9e0
- (id)_allocXpcMsg:(unsigned short)arg1 args:(id)arg2;	// IMP=0x000000000004e920
- (id)_nameForMessage:(unsigned short)arg1;	// IMP=0x000000000004e8c0
- (void)_sendBarrier;	// IMP=0x000000000004e7d0
- (void)_checkOut;	// IMP=0x000000000004e7b0
- (void)_checkIn;	// IMP=0x000000000004e630
- (void)setTargetQueue:(id)arg1;	// IMP=0x000000000004e5e0
- (void)disconnect;	// IMP=0x000000000004e560
- (void)removeWhbRemoteId:(id)arg1;	// IMP=0x000000000004e480
- (id)getWhbLocalIdForRemoteId:(id)arg1;	// IMP=0x000000000004e460
- (void)setWhbLocalId:(id)arg1 forRemoteId:(id)arg2;	// IMP=0x000000000004e330
- (void)setWhbReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004dea0
- (void)didReceiveForwardedDelegateCallbackMessage:(id)arg1;	// IMP=0x000000000004dc20
- (void)didReceiveForwardedMessage:(id)arg1;	// IMP=0x000000000004d920
- (void)forwardWhbMsg:(unsigned short)arg1 args:(id)arg2 cnx:(id)arg3;	// IMP=0x000000000004d580
- (void)sendMsgWithReply:(unsigned short)arg1 args:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000004d330
- (id)sendSyncMsg:(unsigned short)arg1 args:(id)arg2;	// IMP=0x000000000004cf00
- (void)sendMsg:(unsigned short)arg1 args:(id)arg2;	// IMP=0x000000000004cd90
- (id)getEventQueue;	// IMP=0x000000000004cd80
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3 sessionType:(int)arg4;	// IMP=0x000000000004c8c0

@end
