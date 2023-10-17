//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

@interface ADSiriTetherListener : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_xpc_object> *_xpcListener;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000023a8c4
- (void)_handleNewConnection:(id)arg1;	// IMP=0x001000000023a58a
- (void)listen;	// IMP=0x001000000023a427
- (id)init;	// IMP=0x001000000023a30f

@end
