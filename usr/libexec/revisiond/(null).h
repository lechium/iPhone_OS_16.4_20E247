//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener;
@protocol OS_dispatch_source;

@interface (null) : NSObject
{
    NSObject<OS_dispatch_source> *_int_src;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_term_src;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_quit_src;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_hup_src;	// 32 = 0x20
    NSXPCListener *_listener;	// 40 = 0x28
}

+ (id)daemon;	// IMP=0x002000000000d100
- (void).cxx_destruct;	// IMP=0x002000000000d829
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000d5af
- (void)invalidate;	// IMP=0x001000000000d4d8
- (int)resume;	// IMP=0x001000000000d468
- (void)_resume;	// IMP=0x001000000000d365
- (void)waitUntilDeviceIsUnlocked;	// IMP=0x001000000000d35f
- (id)_registerSignal:(int)arg1 queue:(id)arg2;	// IMP=0x001000000000d2ac
- (id)init;	// IMP=0x001000000000d155

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

