//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXDispatchTimer, _DUIAccessibilityDragStatus;
@protocol OS_dispatch_queue;

@interface VOTDragOutputManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _dragActive;	// 16 = 0x10
    _Bool _dragMoved;	// 17 = 0x11
    _Bool _dropReadyAnnounced;	// 18 = 0x12
    _DUIAccessibilityDragStatus *_currentStatus;	// 24 = 0x18
    AXDispatchTimer *_timer;	// 32 = 0x20
    double _lastDragMove;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000116802
- (void)_announceDropUnready;	// IMP=0x00100000001167ae
- (void)_announceDropReady;	// IMP=0x001000000011675a
- (void)_announceDragCount;	// IMP=0x0010000000116603
- (void)_announceDragPickup;	// IMP=0x001000000011658b
- (void)dragCancelled;	// IMP=0x0010000000116525
- (void)dragDropped;	// IMP=0x001000000011646a
- (void)currentElementChanged;	// IMP=0x0010000000116409
- (void)dragEnded;	// IMP=0x001000000011638c
- (void)dragStatusChanged:(id)arg1;	// IMP=0x0010000000116021
- (void)dragMoved;	// IMP=0x0010000000115f14
- (void)dragSessionStarted;	// IMP=0x0010000000115eb3
- (id)init;	// IMP=0x0010000000115e01

@end

