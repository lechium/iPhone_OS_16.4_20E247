//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC10ClockAngel27ClockAngelConnectionManager : NSObject
{
    MISSING_TYPE *publicListener;	// 8 = 0x8
    MISSING_TYPE *connection;	// 16 = 0x10
    MISSING_TYPE *connectionManagerQueue;	// 24 = 0x18
    MISSING_TYPE *reloadLayout;	// 32 = 0x20
    MISSING_TYPE *$__lazy_storage_$_interface;	// 48 = 0x30
    MISSING_TYPE *$__lazy_storage_$_timerManager;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0040000000008a50
- (void)warmUp;	// IMP=0x0010000000007ff0
- (void)stopSession;	// IMP=0x0010000000007fe0
- (void)pauseSessionWithTimeRemainingString:(id)arg1 remainingPortion:(id)arg2;	// IMP=0x0010000000007f70
- (void)startSessionWithEstimatedEndDate:(id)arg1 duartion:(id)arg2;	// IMP=0x0010000000007ed0
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x0010000000007e50
- (id)init;	// IMP=0x0010000000007a60

@end

