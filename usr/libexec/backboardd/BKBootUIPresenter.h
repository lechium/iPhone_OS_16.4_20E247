//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKBootUIOverlayVendor, BKDisplayRenderOverlay, BKDisplayRenderOverlayManager, BKFirstBootDetector, BKSystemShellSentinel, NSString, SWSystemActivityAssertion;
@protocol BSInvalidatable, OS_dispatch_queue;

@interface BKBootUIPresenter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    BKBootUIOverlayVendor *_bootUIOverlayVendor;	// 16 = 0x10
    BKSystemShellSentinel *_systemAppSentinel;	// 24 = 0x18
    BKFirstBootDetector *_firstBootDetector;	// 32 = 0x20
    BKDisplayRenderOverlayManager *_renderOverlayManager;	// 40 = 0x28
    id <BSInvalidatable> _systemShellObserving;	// 48 = 0x30
    BKDisplayRenderOverlay *_underlay;	// 56 = 0x38
    BKDisplayRenderOverlay *_overlay;	// 64 = 0x40
    SWSystemActivityAssertion *_systemActivityAssertion;	// 72 = 0x48
    unsigned long long _addOverlayGeneration;	// 80 = 0x50
    int _screenOwnerPID;	// 88 = 0x58
    NSString *_screenOwnerBundleIdentifier;	// 96 = 0x60
    _Bool _isOverlaySustained;	// 104 = 0x68
}

+ (id)sharedInstance;	// IMP=0x0020000000099fa4
- (void).cxx_destruct;	// IMP=0x002000000009966c
@property(retain, nonatomic) BKDisplayRenderOverlay *overlay; // @synthesize overlay=_overlay;
@property(retain, nonatomic) BKDisplayRenderOverlay *underlay; // @synthesize underlay=_underlay;
@property(retain, nonatomic) SWSystemActivityAssertion *systemActivityAssertion; // @synthesize systemActivityAssertion=_systemActivityAssertion;
- (void)_queue_removeUnderlay;	// IMP=0x001000000009957a
- (void)_queue_addUnderlay;	// IMP=0x00100000000993f5
- (void)_queue_addOverlayForReason:(id)arg1;	// IMP=0x00100000000990ef
- (void)_queue_acquireActivityAssertionForReason:(id)arg1 generation:(unsigned long long)arg2 continuation:(CDUnknownBlockType)arg3;	// IMP=0x0010000000098dd5
- (void)_queue_continueAddingOverlayForReason:(id)arg1 generation:(unsigned long long)arg2;	// IMP=0x0000000000098c1a
- (void)_queue_removeOverlayWithAnimationSettings:(id)arg1;	// IMP=0x0010000000098b38
- (void)_queue_updateOverlayForReason:(id)arg1;	// IMP=0x0010000000098338
- (void)_queue_setScreenOwnerPID:(int)arg1;	// IMP=0x00100000000980e9
- (void)_sync;	// IMP=0x00100000000980d4
- (void)systemShellChangedWithPrimary:(id)arg1;	// IMP=0x0010000000098049
- (void)systemShellDidFinishLaunching:(id)arg1;	// IMP=0x0010000000097fbe
- (void)firstBootDetectorDidFinishFirstBoot:(id)arg1;	// IMP=0x0010000000097f33
- (void)sustainOverlayForReason:(id)arg1;	// IMP=0x0010000000097ea6
- (void)dismissOverlayWithAnimationSettings:(id)arg1 requstedByPID:(int)arg2;	// IMP=0x0010000000097e0d
@property(readonly, nonatomic, getter=isShowingBootUI) _Bool showingBootUI;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0010000000097876
- (id)initWithSystemAppSentinel:(id)arg1 alternateSystemAppManager:(id)arg2 firstBootDetector:(id)arg3 bootUIOverlayVendor:(id)arg4 renderOverlayManager:(id)arg5;	// IMP=0x00100000000975c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
