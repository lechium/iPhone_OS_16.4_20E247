//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSNumber, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOLocationShifterRemoteProxy : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSNumber *_shiftingEnabled;	// 16 = 0x10
    NSNumber *_shiftingFxnVersion;	// 24 = 0x18
    NSCache *_shiftFunctionCache;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000078b7a3
- (void)flushDiskCache;	// IMP=0x000000000078b6c8
- (unsigned int)locationShiftFunctionVersion;	// IMP=0x000000000078b3b7
- (_Bool)_isLocationShiftRequiredForCoordinateViaProxy:(CDStruct_c3b9c2ee)arg1;	// IMP=0x000000000078b1c6
- (_Bool)_isLocationShiftRequiredForCoordinateInProcess:(CDStruct_c3b9c2ee)arg1;	// IMP=0x000000000078afe0
- (_Bool)isLocationShiftRequiredForCoordinate:(CDStruct_c3b9c2ee)arg1;	// IMP=0x000000000078af32
- (_Bool)isLocationShiftEnabled;	// IMP=0x000000000078aad0
- (void)shiftLatLng:(id)arg1 auditToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000078a66d
@property(readonly, nonatomic) NSCache *memoryCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (id)init;	// IMP=0x000000000078a44f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
