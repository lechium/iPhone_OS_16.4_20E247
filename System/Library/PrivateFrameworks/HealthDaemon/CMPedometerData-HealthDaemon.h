//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreMotion/CMPedometerData.h>

@class NSString;

@interface CMPedometerData (HealthDaemon)
- (id)hd_unitForType:(id)arg1;	// IMP=0x0020000000862515
- (id)hd_epochDatestamp;	// IMP=0x0020000000862503
- (id)hd_datestamp;	// IMP=0x00200000008624f1
- (id)hd_sourceID;	// IMP=0x00200000008624df
- (long long)hd_compare:(id)arg1;	// IMP=0x002000000086247a
- (_Bool)hd_hasWorkout;	// IMP=0x0020000000862432

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
