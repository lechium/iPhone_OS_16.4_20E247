//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVCaptureDeviceControlRequestQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSMutableArray *_mutableArray;	// 16 = 0x10
}

- (id)head;	// IMP=0x000000000008277c
- (id)dequeue;	// IMP=0x0000000000082643
- (void)enqueueRequest:(id)arg1;	// IMP=0x00000000000825d6
- (void)dealloc;	// IMP=0x000000000008258c
- (id)init;	// IMP=0x0000000000082519

@end

