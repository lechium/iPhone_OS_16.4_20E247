//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKCDADocumentSample.h>

@class NSString;

@interface HKCDADocumentSample (HDCodingSupport)
+ (id)createWithCodable:(id)arg1;	// IMP=0x0010000000256615
+ (Class)hd_dataEntityClass;	// IMP=0x00100000008b42f5
- (_Bool)addCodableRepresentationToCollection:(id)arg1;	// IMP=0x00100000002565a2
- (id)codableRepresentationForSync;	// IMP=0x00100000002563ce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
