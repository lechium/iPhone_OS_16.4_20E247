//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IMPerfProfiler : NSObject
{
    NSMutableArray *_sinks;	// 8 = 0x8
}

+ (id)instance;	// IMP=0x006000000002332c
- (void).cxx_destruct;	// IMP=0x00000000000236f6
- (void)logMeasurement:(struct IMPerfMeasurement_t *)arg1;	// IMP=0x00000000000234de
- (void)addSink:(id)arg1 withBehavior:(id)arg2;	// IMP=0x0000000000023448
- (id)init;	// IMP=0x0000000000023381

@end
