//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BLSHBacklightEnvironmentPresentation, BLSHPresentationDateSpecifier, NSArray, NSMutableArray, NSMutableSet, NSString;
@protocol BLSHEngineRenderFlipbookSessionDelegate, BLSHFlipbook, BLSHOSInterfaceProviding, BSTimerScheduleQuerying><BSCancellable><BSInvalidatable;

__attribute__((visibility("hidden")))
@interface BLSHEngineRenderFlipbookSession : NSObject
{
    id <BLSHFlipbook> _flipbook;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    BLSHPresentationDateSpecifier *_lock_preparingSpecifier;	// 24 = 0x18
    NSMutableSet *_lock_pendingEnvironments;	// 32 = 0x20
    NSMutableArray *_lock_renderedFrames;	// 40 = 0x28
    id <BSTimerScheduleQuerying><BSCancellable><BSInvalidatable> _lock_timeoutTimer;	// 48 = 0x30
    id <BLSHEngineRenderFlipbookSessionDelegate> _lock_delegate;	// 56 = 0x38
    id <BLSHOSInterfaceProviding> _osInterfaceProvider;	// 64 = 0x40
    unsigned long long _stateHandler;	// 72 = 0x48
    double _sessionStartTime;	// 80 = 0x50
    double _lock_layoutStartTime;	// 88 = 0x58
    double _lock_accumulatedLayoutDuration;	// 96 = 0x60
    double _lock_accumulatedRenderDuration;	// 104 = 0x68
    int _lock_retryRenderCount;	// 112 = 0x70
    _Bool _lock_didFailToRender;	// 116 = 0x74
    _Bool _lock_timedOut;	// 117 = 0x75
    _Bool _lock_invalidated;	// 118 = 0x76
    BLSHBacklightEnvironmentPresentation *_presentation;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000001e921
@property(readonly, nonatomic) BLSHBacklightEnvironmentPresentation *presentation; // @synthesize presentation=_presentation;
- (id)telemetryDataWithEndTime:(double)arg1 reasonEnded:(id)arg2 preventedSleepDuration:(double)arg3;	// IMP=0x000000000001d3c1
- (void)prepareAndRenderFrameSpecifier:(id)arg1;	// IMP=0x000000000001c7ef
- (void)invalidate;	// IMP=0x000000000001c617
@property(readonly, nonatomic) NSArray *renderedFrames;
@property(readonly, nonatomic) unsigned long long memoryUsage;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000001bf95
- (id)initWithDelegate:(id)arg1 flipbook:(id)arg2 presentation:(id)arg3 osInterfaceProvider:(id)arg4;	// IMP=0x000000000001bbcf

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
