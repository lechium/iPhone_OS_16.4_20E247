//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SBCPlaybackPositionSyncService;
@protocol OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface VUIPlaybackPositionController : NSObject
{
    NSObject<OS_os_log> *_logObject;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    SBCPlaybackPositionSyncService *_syncService;	// 24 = 0x18
    _Bool _running;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x006000000006636e
- (void).cxx_destruct;	// IMP=0x0000000000066b99
@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
- (void)_onQueue_updateEntityWithPlaybackPositionInfo:(id)arg1 forTrack:(id)arg2;	// IMP=0x0000000000066735
- (void)_onQueue_endCapturingEvents;	// IMP=0x00000000000666e3
- (void)_onQueue_beginCapturingEvents;	// IMP=0x000000000006668e
- (id)_init;	// IMP=0x000000000006658b
- (void)persistPlaybackPositionInfo:(id)arg1 forTrack:(id)arg2;	// IMP=0x00000000000664a3
- (void)endCapturingEvents;	// IMP=0x0000000000066442
- (void)beginCapturingEvents;	// IMP=0x00000000000663e1
- (id)init;	// IMP=0x00000000000663d3

@end
