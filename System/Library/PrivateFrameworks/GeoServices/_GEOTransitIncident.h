//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPBTransitIncident, NSArray, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _GEOTransitIncident : NSObject
{
    GEOPBTransitIncident *_incident;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000011e1827
- (void).cxx_destruct;	// IMP=0x00000000011e2794
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000011e1c9a
@property(readonly, nonatomic) NSArray *affectedEntities;
@property(readonly, nonatomic, getter=isBlockingIncident) _Bool blockingIncident;
@property(readonly, nonatomic) NSDate *lastUpdated;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) int iconType;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) NSString *messageForNonRoutable;
@property(readonly, nonatomic) NSString *messageForRouteStepping;
@property(readonly, nonatomic) NSString *messageForRoutePlanning;
@property(readonly, nonatomic) NSString *fullDescription;
@property(readonly, nonatomic) NSString *summary;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) unsigned long long muid;
@property(readonly, copy) NSString *debugDescription;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000011e1942
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000011e189a
- (id)initWithIncident:(id)arg1;	// IMP=0x00000000011e182f

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
