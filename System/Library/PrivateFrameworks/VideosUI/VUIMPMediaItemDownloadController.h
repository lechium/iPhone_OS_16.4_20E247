//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPMediaItem, NSHashTable, VUIMPMediaItemDownloadControllerState;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VUIMPMediaItemDownloadController : NSObject
{
    NSObject<OS_dispatch_queue> *_observerDispatchQueue;	// 8 = 0x8
    MPMediaItem *_mediaItem;	// 16 = 0x10
    VUIMPMediaItemDownloadControllerState *_state;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;	// 32 = 0x20
    NSHashTable *_observers;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001c26dc
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // @synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue;
@property(copy, nonatomic) VUIMPMediaItemDownloadControllerState *state; // @synthesize state=_state;
@property(retain, nonatomic) MPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *observerDispatchQueue; // @synthesize observerDispatchQueue=_observerDispatchQueue;
- (void)_notifyObservers:(id)arg1 stateDidChange:(id)arg2;	// IMP=0x00000000001c24f0
- (void)_onProcessingQueue_setState:(id)arg1;	// IMP=0x00000000001c22e8
- (void)_enqueueObserverQueueBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001c2236
- (void)_enqueueAsyncProcessingQueueBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001c2184
- (void)_enqueueAsyncStrongSelfProcessingQueueBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001c2075
- (void)_onProcessingQueue_resumeDownload;	// IMP=0x00000000001c206f
- (void)_onProcessingQueue_pauseDownload;	// IMP=0x00000000001c2069
- (void)_onProcessingQueue_cancelDownload;	// IMP=0x00000000001c2063
- (void)_onProcessingQueue_invalidate;	// IMP=0x00000000001c205d
- (void)_setState:(id)arg1;	// IMP=0x00000000001c1fb3
- (void)removeObserver:(id)arg1;	// IMP=0x00000000001c1e9d
- (void)addObserver:(id)arg1;	// IMP=0x00000000001c1d87
- (void)resumeDownload;	// IMP=0x00000000001c1d29
- (void)pauseDownload;	// IMP=0x00000000001c1ccb
- (void)cancelDownload;	// IMP=0x00000000001c1c6d
- (void)invalidate;	// IMP=0x00000000001c1c3f
@property(readonly, nonatomic, getter=isRestoreDownload) _Bool restoreDownload;
@property(readonly, nonatomic) _Bool supportsCancellation;
@property(readonly, nonatomic) _Bool supportsPausing;
- (id)init;	// IMP=0x00000000001c1b4f
- (id)initWithMediaItem:(id)arg1 state:(id)arg2 serialProcessingDispatchQueue:(id)arg3;	// IMP=0x00000000001c1a29

@end

