//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC8coreidvd17DIPLocationHelper : NSObject
{
    MISSING_TYPE *serviceQueue;	// 8 = 0x8
    MISSING_TYPE *locationManager;	// 16 = 0x10
    MISSING_TYPE *location;	// 24 = 0x18
    MISSING_TYPE *authorizationStatus;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x004000000010c260
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;	// IMP=0x001000000010d140
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x001000000010d0d0
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x001000000010d040
- (void)dealloc;	// IMP=0x001000000010c240
- (id)init;	// IMP=0x001000000010b980

@end

