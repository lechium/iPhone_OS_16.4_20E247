//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VCDispatchTimer;

__attribute__((visibility("hidden")))
@interface VCObject : NSObject
{
    id _reportingAgent;	// 8 = 0x8
    VCDispatchTimer *_timeoutTimer;	// 16 = 0x10
    NSString *_logPrefix;	// 24 = 0x18
    struct _opaque_pthread_mutex_t _mutex;	// 32 = 0x20
    struct _opaque_pthread_mutex_t _timeoutMutex;	// 96 = 0x60
    struct OpaqueFigCFWeakReference *_reportingAgentWeak;	// 160 = 0xa0
}

+ (void)terminateProcess:(id)arg1 terminateSource:(id)arg2 agent:(struct opaqueRTCReporting *)arg3;	// IMP=0x006000000041225a
@property(retain, nonatomic) NSString *logPrefix; // @synthesize logPrefix=_logPrefix;
- (void)stopTerminationTimer;	// IMP=0x0000000000412104
- (void)startTerminationTimer:(unsigned int)arg1 terminationType:(int)arg2;	// IMP=0x0000000000411cb9
- (void)stopTimeoutTimer;	// IMP=0x0000000000411ca7
- (void)startTimeoutTimer;	// IMP=0x0000000000411c8b
- (void)startDeallocTimerWithTimeout:(unsigned int)arg1;	// IMP=0x0000000000411c74
- (void)startDeallocTimer;	// IMP=0x0000000000411c5d
@property(nonatomic) struct opaqueRTCReporting *reportingAgent;
- (void)unlock;	// IMP=0x0000000000411bf3
- (void)lock;	// IMP=0x0000000000411be5
- (void)dealloc;	// IMP=0x0000000000411b4b
- (id)init;	// IMP=0x0000000000411ac3

@end

