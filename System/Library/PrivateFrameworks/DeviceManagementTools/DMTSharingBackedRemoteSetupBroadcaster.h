//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CATOperationQueue, CATSharingBroadcastTerminal, NSString;

__attribute__((visibility("hidden")))
@interface DMTSharingBackedRemoteSetupBroadcaster : NSObject
{
    _Bool _isBroadcasting;	// 8 = 0x8
    _Bool _isInvalidated;	// 9 = 0x9
    CDUnknownBlockType _showPinHandler;	// 16 = 0x10
    CDUnknownBlockType _showErrorHandler;	// 24 = 0x18
    CDUnknownBlockType _pairedTransportHandler;	// 32 = 0x20
    CATSharingBroadcastTerminal *_terminal;	// 40 = 0x28
    CATOperationQueue *_delegateQueue;	// 48 = 0x30
    NSString *_displayedPin;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000001079d
@property(nonatomic) _Bool isInvalidated; // @synthesize isInvalidated=_isInvalidated;
@property(nonatomic) _Bool isBroadcasting; // @synthesize isBroadcasting=_isBroadcasting;
@property(retain, nonatomic) NSString *displayedPin; // @synthesize displayedPin=_displayedPin;
@property(readonly, nonatomic) CATOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) CATSharingBroadcastTerminal *terminal; // @synthesize terminal=_terminal;
@property(copy, nonatomic) CDUnknownBlockType pairedTransportHandler; // @synthesize pairedTransportHandler=_pairedTransportHandler;
@property(copy, nonatomic) CDUnknownBlockType showErrorHandler; // @synthesize showErrorHandler=_showErrorHandler;
@property(copy, nonatomic) CDUnknownBlockType showPinHandler; // @synthesize showPinHandler=_showPinHandler;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000105f3
- (void)endObservingTerminal;	// IMP=0x0000000000010599
- (void)beginObservingTerminal;	// IMP=0x0000000000010539
- (void)invalidateWithError:(id)arg1;	// IMP=0x00000000000103c2
- (void)broadcastTerminalNeedsToDismissPin:(id)arg1;	// IMP=0x00000000000102c2
- (void)broadcastTerminal:(id)arg1 needsToDisplayPin:(id)arg2;	// IMP=0x0000000000010135
- (void)broadcastTerminal:(id)arg1 hasPairedDeviceConnection:(id)arg2;	// IMP=0x000000000000ff4c
- (void)broadcastTerminal:(id)arg1 stoppedWithError:(id)arg2;	// IMP=0x000000000000fe6f
- (void)broadcastTerminal:(id)arg1 hasError:(id)arg2;	// IMP=0x000000000000fcf9
- (void)broadcastTerminal:(id)arg1 didActivateWithError:(id)arg2;	// IMP=0x000000000000fc36
- (void)invalidate;	// IMP=0x000000000000fbc9
- (void)startBroadcasting;	// IMP=0x000000000000fb2f
- (id)initWithPrimitives:(id)arg1;	// IMP=0x000000000000fa87
- (void)dealloc;	// IMP=0x000000000000fa49

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

