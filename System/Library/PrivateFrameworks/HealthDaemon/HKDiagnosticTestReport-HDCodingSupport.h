//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKDiagnosticTestReport.h>

@class NSString;

@interface HKDiagnosticTestReport (HDCodingSupport)
+ (id)createWithCodable:(id)arg1;	// IMP=0x00100000000d1170
+ (Class)hd_dataEntityClass;	// IMP=0x001000000083636e
- (_Bool)addCodableRepresentationToCollection:(id)arg1;	// IMP=0x00100000000d160c
- (id)codableRepresentationForSync;	// IMP=0x00100000000d125f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

