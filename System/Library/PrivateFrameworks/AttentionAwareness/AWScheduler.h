//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AWAttentionSampler, AWAttentionStreamer, NSMutableArray, NSMutableDictionary;
@protocol AWSchedulerObserver, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AWScheduler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_timer;	// 16 = 0x10
    NSMutableArray *_clients;	// 24 = 0x18
    NSMutableDictionary *_streamingClients;	// 32 = 0x20
    NSMutableDictionary *_interruptedStreamingClients;	// 40 = 0x28
    AWAttentionSampler *_attentionSampler;	// 48 = 0x30
    AWAttentionStreamer *_attentionStreamer;	// 56 = 0x38
    struct mach_timebase_info _timebase;	// 64 = 0x40
    id <AWSchedulerObserver> _observer;	// 72 = 0x48
}

+ (id)sharedUnitTestScheduler;	// IMP=0x0060000000004a8c
+ (id)sharedScheduler;	// IMP=0x0060000000004a5c
- (void).cxx_destruct;	// IMP=0x0000000000004328
@property(readonly, nonatomic) AWAttentionSampler *attentionSampler; // @synthesize attentionSampler=_attentionSampler;
@property(nonatomic) __weak id <AWSchedulerObserver> observer; // @synthesize observer=_observer;
- (double)calculateTimeDelta:(unsigned long long)arg1 endTime:(unsigned long long)arg2 timebase:(struct mach_timebase_info)arg3;	// IMP=0x00000000000042bd
- (void)setClientAsInterrupted:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000408e
- (void)handleNotification:(unsigned long long)arg1;	// IMP=0x0000000000004028
- (id)cancelFaceDetectStream:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0000000000003bab
- (id)streamFaceDetectEvents;	// IMP=0x0000000000003854
- (void)removeStreamingClientwithIdentifier:(int)arg1;	// IMP=0x00000000000034eb
- (id)addStreamingClient:(id)arg1 withIdentifier:(int)arg2;	// IMP=0x0000000000002ed4
- (void)reevaluate;	// IMP=0x0000000000002d9b
- (void)armEvents;	// IMP=0x0000000000002793
- (void)setSmartCoverClosed:(_Bool)arg1;	// IMP=0x0000000000002740
- (void)processHIDEvent:(struct __IOHIDEvent *)arg1 mask:(unsigned long long)arg2 timestamp:(unsigned long long)arg3;	// IMP=0x00000000000025cb
- (void)removeInvalidClients;	// IMP=0x00000000000025b7
- (void)removeInvalidClientsWithConnection:(id)arg1;	// IMP=0x0000000000002271
- (void)addClient:(id)arg1;	// IMP=0x0000000000001f04
- (id)description;	// IMP=0x0000000000001e6e
- (id)initForUnitTest:(_Bool)arg1;	// IMP=0x0000000000001b70

@end

