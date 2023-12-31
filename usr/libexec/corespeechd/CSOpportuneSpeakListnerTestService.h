//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSOpportuneSpeakListener, MISSING_TYPE, NSString;
@protocol OS_dispatch_queue;

@interface CSOpportuneSpeakListnerTestService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    int _notifyToken;	// 16 = 0x10
    CSOpportuneSpeakListener *listener;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000002ec51
- (MISSING_TYPE *)opportuneSpeakListener:didStopUnexpectly: /* Error: Ran out of types for this method. */;	// IMP=0x001000000002ebbc
- (void)opportuneSpeakListener:(id)arg1 hasVADAvailable:(_Bool)arg2;	// IMP=0x001000000002eb27
- (void)opportuneSpeakListener:(id)arg1 hasRemoteVADAvailable:(_Bool)arg2;	// IMP=0x001000000002ea92
- (void)receiveOpportuneSpeakListenerStop;	// IMP=0x001000000002e985
- (void)receiveOpportuneSpeakListenerStart;	// IMP=0x001000000002e806
- (void)start;	// IMP=0x001000000002e73d
- (id)init;	// IMP=0x001000000002e6e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

