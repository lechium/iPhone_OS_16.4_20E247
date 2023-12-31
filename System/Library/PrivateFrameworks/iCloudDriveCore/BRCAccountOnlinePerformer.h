//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCThrottler, BRDSIDString, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCAccountOnlinePerformer : NSObject
{
    BRDSIDString *_dsid;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    BRCThrottler *_throttler;	// 24 = 0x18
}

+ (void)removePerformer:(id)arg1;	// IMP=0x001000000002f587
+ (_Bool)addPerformer:(id)arg1;	// IMP=0x001000000002f465
- (void).cxx_destruct;	// IMP=0x000000000002f9f3
- (void)_close;	// IMP=0x000000000002f978
- (void)perform;	// IMP=0x000000000002f8be
- (void)resumeAndAutoClose;	// IMP=0x000000000002f73a
- (void)networkReachabilityChanged:(_Bool)arg1;	// IMP=0x000000000002f702
- (id)initWithDSID:(id)arg1;	// IMP=0x000000000002f629
- (id)_key;	// IMP=0x000000000002f3f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

