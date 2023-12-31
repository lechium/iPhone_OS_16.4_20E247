//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, MNTraceRecordingData, NSArray, NSDictionary, NSError, NSUUID;

@interface NanoRoutePlanningResponse : NSObject
{
    NSDictionary *_userInfoByRouteID;	// 8 = 0x8
    NSArray *_routeIDs;	// 16 = 0x10
    NSArray *_routes;	// 24 = 0x18
    NSArray *_companionRoutes;	// 32 = 0x20
    NSUUID *_selectedRouteID;	// 40 = 0x28
    unsigned long long _routeOrigin;	// 48 = 0x30
    NSError *_lastError;	// 56 = 0x38
    unsigned long long _expectedNumberOfRoutes;	// 64 = 0x40
    MNTraceRecordingData *_traceRecordingData;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000003c41
+ (_Bool)_canRunNavigationForRoute:(id)arg1;	// IMP=0x00100000000024ff
- (void).cxx_destruct;	// IMP=0x002000000000438c
@property(retain, nonatomic) MNTraceRecordingData *traceRecordingData; // @synthesize traceRecordingData=_traceRecordingData;
@property(nonatomic) unsigned long long expectedNumberOfRoutes; // @synthesize expectedNumberOfRoutes=_expectedNumberOfRoutes;
@property(retain, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property(nonatomic) unsigned long long routeOrigin; // @synthesize routeOrigin=_routeOrigin;
@property(retain, nonatomic) NSUUID *selectedRouteID; // @synthesize selectedRouteID=_selectedRouteID;
@property(readonly, nonatomic) NSArray *routeIDs; // @synthesize routeIDs=_routeIDs;
@property(retain, nonatomic) NSArray *companionRoutes; // @synthesize companionRoutes=_companionRoutes;
@property(retain, nonatomic) NSArray *routes; // @synthesize routes=_routes;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000041bd
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000003c49
- (void)_populateCopy:(id)arg1;	// IMP=0x0010000000003bb0
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000003b7c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000003b48
- (id)snapshot;	// IMP=0x00100000000039bb
- (_Bool)canNavigateRouteWithID:(id)arg1;	// IMP=0x0010000000003946
- (id)userInfoForRouteWithID:(id)arg1;	// IMP=0x001000000000390e
- (id)routeWithID:(id)arg1;	// IMP=0x001000000000371b
@property(readonly, nonatomic) GEOComposedRoute *selectedRoute;
@property(readonly, nonatomic) _Bool hasReceivedAllExpectedRoutes;
@property(readonly, nonatomic) unsigned long long numberOfRoutes;
- (id)_generateCompanionRouteFromComposedRoute:(id)arg1;	// IMP=0x001000000000339a
- (void)_generateCompanionRoutesFromComposedRoutes;	// IMP=0x0010000000003242
- (id)companionRouteWithID:(id)arg1;	// IMP=0x0010000000002ded
- (id)selectedCompanionRoute;	// IMP=0x0010000000002d8e
- (void)setObject:(id)arg1 forUserInfoKey:(id)arg2 forRouteID:(id)arg3;	// IMP=0x00100000000029d8
- (void)_setRoutes:(id)arg1 withRouteIDs:(id)arg2;	// IMP=0x001000000000266e
- (id)init;	// IMP=0x00100000000024c3

@end

