//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface RestaurantReservationAnalyticsBookedSession : NSObject
{
    _Bool _tappedChangeReservation;	// 8 = 0x8
    _Bool _bookedUsingMaps;	// 9 = 0x9
    _Bool _viewedInProactiveTray;	// 10 = 0xa
    _Bool _tappedProactiveTrayItem;	// 11 = 0xb
    _Bool _viewedInPlacecard;	// 12 = 0xc
    _Bool _viewedDetailsFromPlacecard;	// 13 = 0xd
    _Bool _hasAppsInstalled;	// 14 = 0xe
    _Bool _hasAppsEnabled;	// 15 = 0xf
    _Bool _sessionEnded;	// 16 = 0x10
    NSString *_sessionID;	// 24 = 0x18
    NSString *_appID;	// 32 = 0x20
    unsigned long long _muid;	// 40 = 0x28
}

+ (void)removeAnalyticsBookedSessionsFromProactiveTrayIfNotInListOfMuids:(id)arg1;	// IMP=0x0040000000a6cb98
+ (void)removeAnalyticsBookedSession:(id)arg1;	// IMP=0x0010000000a6cae8
+ (id)currentAnalyticsBookedSessionForMuid:(unsigned long long)arg1 createIfNotPresent:(_Bool)arg2;	// IMP=0x0010000000a6c884
- (void).cxx_destruct;	// IMP=0x0020000000a6d3c0
@property(nonatomic) _Bool sessionEnded; // @synthesize sessionEnded=_sessionEnded;
@property(nonatomic) _Bool hasAppsEnabled; // @synthesize hasAppsEnabled=_hasAppsEnabled;
@property(nonatomic) _Bool hasAppsInstalled; // @synthesize hasAppsInstalled=_hasAppsInstalled;
@property(nonatomic) _Bool viewedDetailsFromPlacecard; // @synthesize viewedDetailsFromPlacecard=_viewedDetailsFromPlacecard;
@property(nonatomic) _Bool viewedInPlacecard; // @synthesize viewedInPlacecard=_viewedInPlacecard;
@property(nonatomic) _Bool tappedProactiveTrayItem; // @synthesize tappedProactiveTrayItem=_tappedProactiveTrayItem;
@property(nonatomic) _Bool viewedInProactiveTray; // @synthesize viewedInProactiveTray=_viewedInProactiveTray;
@property(nonatomic) _Bool bookedUsingMaps; // @synthesize bookedUsingMaps=_bookedUsingMaps;
@property(nonatomic) _Bool tappedChangeReservation; // @synthesize tappedChangeReservation=_tappedChangeReservation;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void)endSession;	// IMP=0x0010000000a6d2e8
- (void)_captureSession;	// IMP=0x0010000000a6d01a
- (void)_restartSession;	// IMP=0x0010000000a6d010
- (void)_mapsForegrounded;	// IMP=0x0010000000a6cffd
- (void)_mapsBackgrounded;	// IMP=0x0010000000a6cfeb
- (id)description;	// IMP=0x0010000000a6c638
- (id)init;	// IMP=0x0010000000a6c50d

@end

