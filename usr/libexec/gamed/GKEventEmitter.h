//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableArray;

@interface GKEventEmitter : NSObject
{
    NSHashTable *_listeners;	// 8 = 0x8
    NSMutableArray *_supportedProtocols;	// 16 = 0x10
    _Bool _shouldQueue;	// 24 = 0x18
    NSMutableArray *_queuedEvents;	// 32 = 0x20
}

+ (id)eventEmitterForProtocols:(id)arg1 shouldQueue:(_Bool)arg2;	// IMP=0x004000000012a363
+ (id)eventEmitterForProtocols:(id)arg1;	// IMP=0x001000000012a345
- (void).cxx_destruct;	// IMP=0x002000000012ae29
@property(retain, nonatomic) NSMutableArray *queuedEvents; // @synthesize queuedEvents=_queuedEvents;
@property(nonatomic) _Bool shouldQueue; // @synthesize shouldQueue=_shouldQueue;
@property(retain, nonatomic) NSMutableArray *supportedProtocols; // @synthesize supportedProtocols=_supportedProtocols;
@property(retain, nonatomic) NSHashTable *listeners; // @synthesize listeners=_listeners;
- (_Bool)listenerRegisteredForSelector:(SEL)arg1;	// IMP=0x001000000012aca3
- (void)forwardInvocation:(id)arg1;	// IMP=0x001000000012aa7d
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x001000000012a8db
- (id)invocationForProtocol:(id)arg1 selector:(SEL)arg2;	// IMP=0x001000000012a869
- (id)methodSignatureForProtocol:(id)arg1 selector:(SEL)arg2;	// IMP=0x001000000012a7e2
- (void)unregisterAllListeners;	// IMP=0x001000000012a7cc
- (void)unregisterListener:(id)arg1;	// IMP=0x001000000012a7b6
- (void)registerListener:(id)arg1;	// IMP=0x001000000012a613
- (void)dispatchQueuedEventsToListener:(id)arg1;	// IMP=0x001000000012a4db
- (id)initWithSupportedProtocols:(id)arg1 shouldQueue:(_Bool)arg2;	// IMP=0x001000000012a3bf

@end
