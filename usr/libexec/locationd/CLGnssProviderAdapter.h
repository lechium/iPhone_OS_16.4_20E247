//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLGnssProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x001000000071861e
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000718605
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000007185a8
+ (_Bool)isSupported;	// IMP=0x00100000007185a0
- (void)removeRhythmicGnssClient:(int)arg1;	// IMP=0x0020000000718a00
- (void)addRhythmicGnssClient:(int)arg1;	// IMP=0x00100000007189dd
- (void)shouldLockoutNilr:(_Bool)arg1;	// IMP=0x00100000007189ba
- (void)emergencySettingsChange:(CDUnknownBlockType)arg1 withReason:(int)arg2;	// IMP=0x0010000000718997
- (void)emergencyStateChange:(CDUnknownBlockType)arg1;	// IMP=0x0010000000718974
- (_Bool)syncgetIonosphereParameters:(struct ThinShellIonosphereParameters *)arg1;	// IMP=0x001000000071876f
- (void)cacheEmergencyAWDStatistics:(struct CLDaemonLocation)arg1;	// IMP=0x001000000071874c
- (_Bool)syncgetActiveGnssBands:(void *)arg1;	// IMP=0x0010000000718729
- (_Bool)syncgetControlPlaneStatusReport:(struct CLGnssControlPlaneStatusReport *)arg1;	// IMP=0x0010000000718706
- (void)resetControlPlaneStatus;	// IMP=0x00100000007186e3
- (void)endService;	// IMP=0x00100000007186c0
- (void)beginService;	// IMP=0x001000000071869d
- (id)init;	// IMP=0x001000000071867a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
