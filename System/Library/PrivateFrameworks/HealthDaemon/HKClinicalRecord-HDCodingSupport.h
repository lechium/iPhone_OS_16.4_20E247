//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKClinicalRecord.h>

@class NSString;

@interface HKClinicalRecord (HDCodingSupport)
+ (id)createWithCodable:(id)arg1;	// IMP=0x001000000011dd6b
+ (Class)hd_dataEntityClass;	// IMP=0x0010000000517efe
- (_Bool)addCodableRepresentationToCollection:(id)arg1;	// IMP=0x001000000011df5d
- (id)codableRepresentationForSync;	// IMP=0x001000000011de5a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

