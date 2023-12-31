//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "LNApplicationConnection.h"

@class FBSOpenApplicationService, NSMapTable, NSString, RBSProcessMonitor;

__attribute__((visibility("hidden")))
@interface LNEmbeddedApplicationConnection : LNApplicationConnection
{
    RBSProcessMonitor *_processMonitor;	// 8 = 0x8
    NSMapTable *_assertionsMapTable;	// 16 = 0x10
    FBSOpenApplicationService *_openApplicationService;	// 24 = 0x18
}

+ (id)sharedOpenApplicationOperationQueue;	// IMP=0x001000000007807d
+ (id)optionsForAction:(id)arg1 interactionMode:(long long)arg2 source:(unsigned short)arg3;	// IMP=0x0010000000077faa
- (void).cxx_destruct;	// IMP=0x00000000000762d9
@property(readonly, nonatomic) FBSOpenApplicationService *openApplicationService; // @synthesize openApplicationService=_openApplicationService;
@property(readonly, nonatomic) NSMapTable *assertionsMapTable; // @synthesize assertionsMapTable=_assertionsMapTable;
@property(readonly, nonatomic) RBSProcessMonitor *processMonitor; // @synthesize processMonitor=_processMonitor;
- (void)connectionOperation:(id)arg1 didFinishWithError:(id)arg2;	// IMP=0x00000000000761b4
- (void)connectionOperationWillStart:(id)arg1;	// IMP=0x00000000000760e2
- (void)assertion:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x0000000000075fb2
- (void)resumeOpenApplicationOperationQueue;	// IMP=0x0000000000075f6b
- (void)enqueueOpenApplicationOperation:(CDUnknownBlockType)arg1;	// IMP=0x0000000000075e23
- (_Bool)isSupportedInCarPlay;	// IMP=0x00000000000759f0
- (id)openApplicationServiceWithConnectionOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000753fb
- (void)openApplicationWithOptions:(id)arg1 connectionAction:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000074c06
- (void)dealloc;	// IMP=0x0000000000074ae5
- (void)_invalidateAllAssertions;	// IMP=0x000000000007494b
- (void)invalidateAssertionsForConnectionOperation:(id)arg1;	// IMP=0x000000000007460b
- (void)acquireAssertionsForConnectionOperation:(id)arg1;	// IMP=0x0000000000073f9b
- (id)defaultOptions;	// IMP=0x0000000000073f82
- (void)extendTimeoutForOperationWithIdentifier:(id)arg1;	// IMP=0x0000000000073eb0
- (void)cancelTimeoutForOperationWithIdentifier:(id)arg1;	// IMP=0x0000000000073dde
- (_Bool)refreshWithOptions:(id)arg1;	// IMP=0x0000000000073bed
- (void)connectWithOptions:(id)arg1;	// IMP=0x0000000000073a10
- (id)initWithBundleIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000073802

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

