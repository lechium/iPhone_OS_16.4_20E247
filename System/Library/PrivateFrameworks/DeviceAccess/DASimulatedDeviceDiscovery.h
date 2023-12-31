//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBDiscovery, CUBonjourBrowser, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface DASimulatedDeviceDiscovery : NSObject
{
    _Bool _activateCalled;	// 8 = 0x8
    CBDiscovery *_bluetoothScanner;	// 16 = 0x10
    CUBonjourBrowser *_bonjourBrowser;	// 24 = 0x18
    _Bool _invalidateCalled;	// 32 = 0x20
    _Bool _invalidateDone;	// 33 = 0x21
    NSString *_nameTXTKey;	// 40 = 0x28
    NSString *_deviceBonjourServiceType;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 56 = 0x38
    CDUnknownBlockType _eventHandler;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000018885
@property(copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) NSString *deviceBonjourServiceType; // @synthesize deviceBonjourServiceType=_deviceBonjourServiceType;
- (void)_bonjourLostDevice:(id)arg1;	// IMP=0x000000000001864a
- (void)_bonjourFoundDevice:(id)arg1;	// IMP=0x0000000000018308
- (void)_bonjourEnsureStopped;	// IMP=0x0000000000018280
- (void)_bonjourEnsureStarted;	// IMP=0x0000000000017fea
- (void)_bluetoothLostDevice:(id)arg1;	// IMP=0x0000000000017df3
- (void)_bluetoothFoundDevice:(id)arg1;	// IMP=0x0000000000017bfc
- (void)_bluetoothEnsureStopped;	// IMP=0x0000000000017b74
- (void)_bluetoothEnsureStarted;	// IMP=0x00000000000178b0
- (void)_invalidated;	// IMP=0x000000000001782f
- (void)invalidate;	// IMP=0x0000000000017744
- (void)_activate;	// IMP=0x0000000000017716
- (void)activate;	// IMP=0x000000000001761b
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x00000000000175cc
- (id)description;	// IMP=0x00000000000175b5
- (id)init;	// IMP=0x0000000000017545

@end

