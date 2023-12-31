//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMAttitude, CMDeviceMotion, NSOperationQueue, RMConnectionClient;
@protocol OS_dispatch_queue;

@interface CMHeadphoneMotionManagerInternal : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    RMConnectionClient *_connectionClient;	// 16 = 0x10
    NSOperationQueue *_callbackQueue;	// 24 = 0x18
    CDUnknownBlockType _callbackHandler;	// 32 = 0x20
    _Bool _deviceMotionActive;	// 40 = 0x28
    _Bool _deviceMotionStreaming;	// 41 = 0x29
    _Bool _deviceConnected;	// 42 = 0x2a
    double _deviceMotionStartTime;	// 48 = 0x30
    CMDeviceMotion *_deviceMotion;	// 56 = 0x38
    CMAttitude *_initialReferenceAttitude;	// 64 = 0x40
}

@property(retain, nonatomic) CMAttitude *initialReferenceAttitude; // @synthesize initialReferenceAttitude=_initialReferenceAttitude;
@property(retain) CMDeviceMotion *deviceMotion; // @synthesize deviceMotion=_deviceMotion;
- (void)disconnect;	// IMP=0x00000000001db6d3
- (void)connect;	// IMP=0x00000000001db675
- (void)dealloc;	// IMP=0x00000000001db60d
- (id)init;	// IMP=0x00000000001db597

@end

