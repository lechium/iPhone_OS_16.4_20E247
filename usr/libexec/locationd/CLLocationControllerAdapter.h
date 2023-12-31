//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLLocationControllerAdapter
{
}

+ (id)getSilo;	// IMP=0x002000000023329d
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000233284
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000233227
- (void)setRealTimeHarvestTriggered:(double)arg1;	// IMP=0x00200000002348e0
- (void)shouldLockoutNilr:(_Bool)arg1;	// IMP=0x00100000002348da
- (void)emergencyStateChange:(CDUnknownBlockType)arg1;	// IMP=0x0010000000234619
- (void)emergencySettingsChange:(CDUnknownBlockType)arg1 withReason:(int)arg2;	// IMP=0x0010000000234613
- (void)setGpsAssistantHasClients:(_Bool)arg1 forNotification:(int)arg2;	// IMP=0x00100000002345d6
- (void)setTrackRunHint:(id)arg1;	// IMP=0x001000000023448e
- (_Bool)syncgetZaxisStats:(void *)arg1;	// IMP=0x001000000023398e
- (_Bool)syncgetActiveTechs:(void *)arg1;	// IMP=0x00100000002334e1
- (_Bool)syncgetMetric:(void *)arg1;	// IMP=0x00100000002334b2
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x001000000023348a
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000023345d
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000233435
- (void *)adaptee;	// IMP=0x0010000000233402
- (void)endService;	// IMP=0x00100000002333e7
- (void)beginService;	// IMP=0x0010000000233336
- (id)init;	// IMP=0x00100000002332f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

