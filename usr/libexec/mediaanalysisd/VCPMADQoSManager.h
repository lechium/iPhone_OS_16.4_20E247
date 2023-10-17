//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCPTimeMeasurement;

@interface VCPMADQoSManager : NSObject
{
    struct atomic<bool> _enabled;	// 8 = 0x8
    VCPTimeMeasurement *_timer;	// 16 = 0x10
    struct mach_timebase_info _timebase;	// 24 = 0x18
}

+ (unsigned int)_currentQoSWithTaskID:(unsigned long long)arg1;	// IMP=0x0040000000076fb6
+ (id)sharedManager;	// IMP=0x0010000000076704
- (void).cxx_destruct;	// IMP=0x00200000000780c7
- (void)runAsyncBlock:(CDUnknownBlockType)arg1 withTaskID:(unsigned long long)arg2;	// IMP=0x0010000000077b3c
- (void)runBlock:(CDUnknownBlockType)arg1 withTaskID:(unsigned long long)arg2;	// IMP=0x0010000000077545
- (void)disable;	// IMP=0x0010000000077504
- (void)enable;	// IMP=0x00100000000774b9
- (void)_reportDelayForQoS:(unsigned int)arg1 withTaskID:(unsigned long long)arg2;	// IMP=0x0010000000076d20
- (void)_reportQoSChange:(unsigned int)arg1 withTaskID:(unsigned long long)arg2;	// IMP=0x00100000000769e1
- (void)_reportStartingQoS:(unsigned int)arg1 withTaskID:(unsigned long long)arg2;	// IMP=0x0010000000076759
- (id)init;	// IMP=0x001000000007667c

@end
