//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_xpc_event_publisher;

@interface PDXPCEventPublisher : NSObject
{
    _Bool _receivedInitialBarrier;	// 8 = 0x8
    NSObject<OS_xpc_event_publisher> *_publisher;	// 16 = 0x10
    NSString *_streamName;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSMutableArray *_pendingSendEvents;	// 40 = 0x28
    NSMutableArray *_pendingSendEventCompletions;	// 48 = 0x30
    NSMutableSet *_tokens;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000295e48
@property(nonatomic) _Bool receivedInitialBarrier; // @synthesize receivedInitialBarrier=_receivedInitialBarrier;
@property(retain, nonatomic) NSMutableSet *tokens; // @synthesize tokens=_tokens;
@property(retain, nonatomic) NSMutableArray *pendingSendEventCompletions; // @synthesize pendingSendEventCompletions=_pendingSendEventCompletions;
@property(retain, nonatomic) NSMutableArray *pendingSendEvents; // @synthesize pendingSendEvents=_pendingSendEvents;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *streamName; // @synthesize streamName=_streamName;
@property(retain, nonatomic) NSObject<OS_xpc_event_publisher> *publisher; // @synthesize publisher=_publisher;
- (void)sendEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000295957
- (void)sendEvent:(id)arg1;	// IMP=0x0010000000295943
- (void)handleEventWithAction:(unsigned int)arg1 token:(unsigned long long)arg2 descriptor:(id)arg3;	// IMP=0x00100000002954ce
- (id)initWithStreamName:(id)arg1;	// IMP=0x00100000002951ac

@end
