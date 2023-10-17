//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTTransport_replayer, MISSING_TYPE;
@protocol OS_dispatch_queue;

@interface GTTransportSource_replayer : NSObject
{
    CDUnknownBlockType _messageHandler;	// 8 = 0x8
    CDUnknownBlockType _cancellationHandler;	// 16 = 0x10
    CDUnknownBlockType _registrationHandler;	// 24 = 0x18
    MISSING_TYPE *_queue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_mqueue;	// 40 = 0x28
    GTTransport_replayer *_transport;	// 48 = 0x30
    struct atomic<int> _state;	// 56 = 0x38
}

- (void)_dispatch:(id)arg1;	// IMP=0x0020000000029360
- (void)_cancel;	// IMP=0x00100000000292d7
- (void)_callCancellationHandler;	// IMP=0x0010000000029297
- (void)_register;	// IMP=0x0010000000029210
- (void)_callRegistrationHandler;	// IMP=0x00100000000291db
@property(copy, nonatomic) CDUnknownBlockType registrationHandler;
- (void)setCancellationHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000290ef
- (CDUnknownBlockType)cancellationHandler;	// IMP=0x00100000000290e5
@property(copy, nonatomic) CDUnknownBlockType messageHandler;
- (_Bool)cancelled;	// IMP=0x001000000002905f
- (void)cancel;	// IMP=0x0010000000029001
- (void)suspend;	// IMP=0x0010000000028ff3
- (void)resume;	// IMP=0x0010000000028fe5
- (void)dealloc;	// IMP=0x0010000000028f5d
- (id)_initWithQueue:(id)arg1 transport:(id)arg2;	// IMP=0x0010000000028d59
- (id)init;	// IMP=0x0010000000028d2e

@end
