//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RDDefaults, RDFileURLs;
@protocol OS_dispatch_queue, RDLaunchEventsDelegate;

@interface RDLaunchEvents : NSObject
{
    id <RDLaunchEventsDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_q;	// 16 = 0x10
    RDDefaults *_defaults;	// 24 = 0x18
    RDFileURLs *_fileURLs;	// 32 = 0x20
}

+ (void)initialize;	// IMP=0x00400000000046fd
- (void).cxx_destruct;	// IMP=0x002000000000555c
- (void)registerForXPCEvent:(id)arg1;	// IMP=0x00100000000053ce
- (void)unregisterForXPCActivities:(id)arg1;	// IMP=0x0010000000005254
- (void)registerForXPCActivities:(id)arg1;	// IMP=0x0010000000004be8
- (void)dealloc;	// IMP=0x00100000000047c1

@end
