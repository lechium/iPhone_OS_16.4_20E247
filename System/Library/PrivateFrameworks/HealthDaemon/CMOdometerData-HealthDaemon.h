//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreMotion/CMOdometerData.h>

@class NSString;

@interface CMOdometerData (HealthDaemon)
- (id)hd_unitForType:(id)arg1;	// IMP=0x00200000004df4c8
- (id)hd_epochDatestamp;	// IMP=0x00200000004df4b6
- (id)hd_datestamp;	// IMP=0x00200000004df4a4
- (id)hd_sourceID;	// IMP=0x00200000004df49c
- (long long)hd_compare:(id)arg1;	// IMP=0x00200000004df40b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
