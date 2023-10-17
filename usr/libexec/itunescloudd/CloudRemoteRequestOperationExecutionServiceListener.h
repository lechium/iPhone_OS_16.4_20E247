//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface CloudRemoteRequestOperationExecutionServiceListener : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    _Bool _isActive;	// 16 = 0x10
    NSXPCListener *_serviceListener;	// 24 = 0x18
}

+ (id)sharedRemoteRequestOperationExecutionServiceListener;	// IMP=0x00200000000dfc31
- (void).cxx_destruct;	// IMP=0x00200000000dfa93
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000df9cd
- (void)performRemoteRequestOperationWithExecutionContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000df89a
- (void)stop;	// IMP=0x00100000000df84f
- (void)start;	// IMP=0x00100000000df804
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (void)dealloc;	// IMP=0x00100000000df738
- (id)_init;	// IMP=0x00100000000df679

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
