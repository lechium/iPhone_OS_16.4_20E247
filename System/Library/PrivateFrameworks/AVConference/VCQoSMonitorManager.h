//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCQoSMonitorManager
{
    NSMutableArray *_monitors;	// 24 = 0x18
    NSMutableDictionary *_sources;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;	// 40 = 0x28
    long long _reportingInterval;	// 48 = 0x30
    NSMutableArray *_moitors;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x00600000001303c9
@property(readonly, nonatomic) NSMutableArray *moitors; // @synthesize moitors=_moitors;
- (_Bool)doesQoSSourceExistForStreamToken:(id)arg1;	// IMP=0x000000000013110a
- (void)deregisterBlocksForService;	// IMP=0x000000000013108d
- (void)registerBlocksForService;	// IMP=0x0000000000130c29
- (void)updateQoSReport:(id)arg1 toClientsWithToken:(long long)arg2;	// IMP=0x00000000001309e6
- (void)unregisterQoSReportingSourceForToken:(long long)arg1;	// IMP=0x00000000001307ce
- (void)registerQoSReportingSourceForToken:(long long)arg1;	// IMP=0x000000000013058a
- (void)dealloc;	// IMP=0x00000000001304ef
- (id)init;	// IMP=0x0000000000130418

@end

