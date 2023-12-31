//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDisplayCloneMirrorRequestCache, NSSet, NSString, _BKDisplayBlankingContext;
@protocol BSInvalidatable, OS_dispatch_queue;

@interface BKTVOutController : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSSet *_queue_replayCloneContextIDs;	// 16 = 0x10
    int _queue_currentVirtualDisplayClientPID;	// 24 = 0x18
    BKDisplayCloneMirrorRequestCache *_queue_cloneMirrorRequests;	// 32 = 0x20
    _BKDisplayBlankingContext *_blankingContext;	// 40 = 0x28
    id <BSInvalidatable> _systemShellObserving;	// 48 = 0x30
    _Bool _queue_cloneRotationDisabled;	// 56 = 0x38
    _Bool _queue_forceTVOutMode;	// 57 = 0x39
    _Bool _queue_tvOutDisplayHasAvailableModes;	// 58 = 0x3a
    _Bool _queue_systemAppHasCheckedIn;	// 59 = 0x3b
    int _tvOutMode;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x002000000004cdea
- (void)_tetherSettingChanged:(id)arg1;	// IMP=0x001000000004cde4
- (void)_handleIapServerConnectionDied;	// IMP=0x001000000004cd8b
- (void)cloneMirroringRequestsDidChange;	// IMP=0x001000000004cd81
- (void)systemShellDidFinishLaunching:(id)arg1;	// IMP=0x001000000004cc8c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000004c9c5
- (void)dealloc;	// IMP=0x001000000004c911
- (id)init;	// IMP=0x001000000004c43f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

