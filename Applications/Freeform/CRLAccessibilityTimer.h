//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CRLAccessibilityTimer : NSObject
{
    _Bool _automaticallyCancelPendingBlockUponSchedulingNewBlock;	// 8 = 0x8
    _Bool _cancelled;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_dispatchTimer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000004875ca
@property(nonatomic, getter=_isCancelled, setter=_setCancelled:) _Bool _cancelled; // @synthesize _cancelled;
@property(retain, nonatomic, setter=_setDispatchTimer:) NSObject<OS_dispatch_source> *_dispatchTimer; // @synthesize _dispatchTimer;
@property(retain, nonatomic, setter=_setDispatchQueue:) NSObject<OS_dispatch_queue> *_dispatchQueue; // @synthesize _dispatchQueue;
@property(nonatomic) _Bool automaticallyCancelPendingBlockUponSchedulingNewBlock; // @synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock;
- (void)cancel;	// IMP=0x00100000004874d3
- (void)_reallyCancel;	// IMP=0x0010000000487485
- (void)afterDelay:(double)arg1 processBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000004871f5
- (void)dealloc;	// IMP=0x00100000004871a0
- (id)initWithTargetSerialQueue:(id)arg1;	// IMP=0x001000000048702c
- (id)init;	// IMP=0x0010000000487018

@end

