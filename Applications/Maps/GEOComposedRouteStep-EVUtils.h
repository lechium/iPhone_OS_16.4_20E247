//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOComposedRouteStep.h>

@class NSString;

@interface GEOComposedRouteStep (EVUtils)
- (id)attributedChargeStringForVehicle:(id)arg1 font:(id)arg2 textColor:(id)arg3 includeDaysAgo:(_Bool)arg4;	// IMP=0x00100000003c7b16
- (id)chargingStationInfo;	// IMP=0x00100000003c799c
- (_Bool)isEVChargerStep;	// IMP=0x00100000003c7969
@property(readonly, nonatomic) CDStruct_02837cd9 mapRectAroundStartCoordinate;
@property(readonly, nonatomic) struct CLLocationCoordinate2D endCoordinate;
@property(readonly, nonatomic) struct CLLocationCoordinate2D startCoordinate;
@property(readonly, nonatomic) NSString *accessibilityDistance;
@property(readonly, nonatomic) NSString *distanceString;
@property(readonly, nonatomic) NSString *notice;
- (id)transitInstructionInContext:(long long)arg1;	// IMP=0x00100000005738fd
- (id)representativeSignGuidanceEvent;	// IMP=0x00100000007208bc
@end

