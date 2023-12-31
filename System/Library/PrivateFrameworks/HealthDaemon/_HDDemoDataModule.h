//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSOperationQueue;
@protocol OS_dispatch_source, _HDDemoDataModuleDelegate;

__attribute__((visibility("hidden")))
@interface _HDDemoDataModule : NSObject
{
    NSOperationQueue *_operationQueue;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_timerSource;	// 16 = 0x10
    id <_HDDemoDataModuleDelegate> _delegate;	// 24 = 0x18
    NSDate *_lastFireDate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000490be8
@property(nonatomic) __weak id <_HDDemoDataModuleDelegate> delegate; // @synthesize delegate=_delegate;
- (void)timerDidFireWithInterval:(double)arg1;	// IMP=0x0000000000490bbb
- (void)scheduleNextFire;	// IMP=0x00000000004908d0
@property(readonly, nonatomic) double nextFireInterval;
- (void)stop;	// IMP=0x00000000004907d4
- (void)start;	// IMP=0x000000000049071d
- (id)initWithOperationQueue:(id)arg1;	// IMP=0x00000000004906b2

@end

