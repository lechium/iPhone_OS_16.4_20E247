//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSOrientationObserver, NSString, XCTDOrientationChangeRequest;
@protocol XCTDBKSAccelerometer, XCTDOrientationManagerDelegate;

@interface XCTDOrientationManager : NSObject
{
    _Bool _valid;	// 8 = 0x8
    id <XCTDOrientationManagerDelegate> _delegate;	// 16 = 0x10
    id <XCTDBKSAccelerometer> _accelerometer;	// 24 = 0x18
    double _requestTimeout;	// 32 = 0x20
    CDUnknownFunctionPointerType _setDeviceOrientationFunc;	// 40 = 0x28
    XCTDOrientationChangeRequest *_currentChangeRequest;	// 48 = 0x30
    FBSOrientationObserver *_orientationObserver;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000032dcd
@property(retain) FBSOrientationObserver *orientationObserver; // @synthesize orientationObserver=_orientationObserver;
@property(retain) XCTDOrientationChangeRequest *currentChangeRequest; // @synthesize currentChangeRequest=_currentChangeRequest;
@property(getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(readonly) CDUnknownFunctionPointerType setDeviceOrientationFunc; // @synthesize setDeviceOrientationFunc=_setDeviceOrientationFunc;
@property(readonly) double requestTimeout; // @synthesize requestTimeout=_requestTimeout;
@property(readonly) id <XCTDBKSAccelerometer> accelerometer; // @synthesize accelerometer=_accelerometer;
@property(readonly) __weak id <XCTDOrientationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;	// IMP=0x0010000000032d2e
- (void)rotateDeviceToOrientation:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000329cc
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(long long)arg2;	// IMP=0x00100000000328b9
@property(readonly) long long interfaceOrientation;
@property(readonly) long long deviceOrientation;
- (id)initWithDelegate:(id)arg1 accelerometer:(id)arg2 requestTimeout:(double)arg3 setDeviceOrientationFunc:(CDUnknownFunctionPointerType)arg4;	// IMP=0x0010000000032467
- (id)initWithDelegate:(id)arg1;	// IMP=0x00100000000323b4
- (void)invalidate;	// IMP=0x001000000003227a
- (void)dealloc;	// IMP=0x00100000000321c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

