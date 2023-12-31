//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLTimer, NSMutableArray, SPAdvertisement, SPBeaconPayload;
@protocol CLIntersiloUniverse;

@interface CLSubHarvesterAvengerDataCollection : NSObject
{
    id <CLIntersiloUniverse> _universe;	// 8 = 0x8
    CLTimer *_cacheAdvTimer;	// 16 = 0x10
    CLTimer *_stopDataCollectionTimer;	// 24 = 0x18
    CLTimer *_cancelDataCollectionTimer;	// 32 = 0x20
    int recentSignalEnvironment;	// 40 = 0x28
    void *_proactiveRequestMonitor;	// 48 = 0x30
    struct CLSubHarvesterAvengerSettings _settings;	// 56 = 0x38
    SPAdvertisement *targetAdv;	// 312 = 0x138
    SPBeaconPayload *targetPayload;	// 320 = 0x140
    struct list<CLDaemonLocation, std::allocator<CLDaemonLocation>> locationCache;	// 328 = 0x148
    NSMutableArray *motionCache;	// 352 = 0x160
    long long _state;	// 360 = 0x168
}

- (id).cxx_construct;	// IMP=0x00200000006102a2
- (void).cxx_destruct;	// IMP=0x0010000000610291
- (_Bool)isEqualToTargetAdv:(id)arg1;	// IMP=0x001000000061016d
- (id)getAdvType:(id)arg1;	// IMP=0x001000000061010b
- (long long)getTimeOfDayForAnalytics;	// IMP=0x00100000006100b0
- (void)pruneMotionCacheAfterAdv;	// IMP=0x001000000061006c
- (void)pruneMotionCacheBeforeAdv;	// IMP=0x001000000060ff70
- (void)pruneLocationCacheAfterAdv;	// IMP=0x001000000060ff31
- (void)pruneLocationCacheBeforeAdv;	// IMP=0x001000000060fe7d
- (id)buildEventWithAdvWithFirstTimeStamp:(id)arg1;	// IMP=0x001000000060fc31
- (id)buildEventWithMotionWithFirstTimeStamp:(id)arg1;	// IMP=0x001000000060f9b9
- (id)buildEventWithLocationWithFirstTimeStamp:(id)arg1;	// IMP=0x001000000060f846
- (id)buildEvent;	// IMP=0x001000000060f688
- (void)submitData;	// IMP=0x001000000060f5b2
- (void)stopDataCollection;	// IMP=0x001000000060f45e
- (void)identifyTargetAdv:(id)arg1;	// IMP=0x001000000060f139
- (void)startDataCollection;	// IMP=0x001000000060edc4
- (void)receiveSignalEnvironment:(int)arg1;	// IMP=0x001000000060edbb
- (void)receiveBeaconPayload:(id)arg1;	// IMP=0x001000000060ec5d
- (void)receiveAdvertisement:(id)arg1;	// IMP=0x001000000060ec02
- (void)receiveMotionActivity:(struct CLMotionActivity)arg1;	// IMP=0x001000000060e8ec
- (void)receiveLocation:(struct CLDaemonLocation)arg1;	// IMP=0x001000000060e79d
- (void)dealloc;	// IMP=0x001000000060e6d5
- (id)initInUniverse:(id)arg1 withSettings:(struct CLSubHarvesterAvengerSettings)arg2;	// IMP=0x001000000060e52a

@end

