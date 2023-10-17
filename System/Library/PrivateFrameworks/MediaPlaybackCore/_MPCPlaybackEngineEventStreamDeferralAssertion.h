//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngineEventStream, MSVBlockGuard, NSString;

__attribute__((visibility("hidden")))
@interface _MPCPlaybackEngineEventStreamDeferralAssertion : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _invalidated;	// 12 = 0xc
    NSString *_identifier;	// 16 = 0x10
    MPCPlaybackEngineEventStream *_eventStream;	// 24 = 0x18
    long long _type;	// 32 = 0x20
    NSString *_reason;	// 40 = 0x28
    MSVBlockGuard *_timeoutGuard;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002cc3fd
@property(readonly, nonatomic) MSVBlockGuard *timeoutGuard; // @synthesize timeoutGuard=_timeoutGuard;
@property(readonly, nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) __weak MPCPlaybackEngineEventStream *eventStream; // @synthesize eventStream=_eventStream;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)invalidate;	// IMP=0x00000000002cc1b9
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000002cc12e
- (id)initWithEventStream:(id)arg1 type:(long long)arg2 reason:(id)arg3 timeout:(double)arg4;	// IMP=0x00000000002cbf8e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
