//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOMapRegion, NSString, UIViewController;

@interface MapsAppTestTapPOI
{
    UIViewController *_placeViewController;	// 8 = 0x8
    _Bool _waitForWebModule;	// 16 = 0x10
    _Bool _shouldTestPlaceEnrichment;	// 17 = 0x11
    _Bool _shouldScrollPlacecard;	// 18 = 0x12
    NSString *_testName;	// 24 = 0x18
    NSString *_poiLabel;	// 32 = 0x20
    GEOMapRegion *_region;	// 40 = 0x28
    double _pitch;	// 48 = 0x30
    double _yaw;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000815f6e
@property(nonatomic) _Bool shouldScrollPlacecard; // @synthesize shouldScrollPlacecard=_shouldScrollPlacecard;
@property(nonatomic) _Bool shouldTestPlaceEnrichment; // @synthesize shouldTestPlaceEnrichment=_shouldTestPlaceEnrichment;
@property(nonatomic) double yaw; // @synthesize yaw=_yaw;
- (void);	// IMP=0x0010000000815ef8
@property(nonatomic) double pitch; // @synthesize pitch=_pitch;
@property(retain, nonatomic) GEOMapRegion *region; // @synthesize region=_region;
@property(nonatomic) _Bool waitForWebModule; // @synthesize waitForWebModule=_waitForWebModule;
@property(retain, nonatomic) NSString *poiLabel; // @synthesize poiLabel=_poiLabel;
@property(retain, nonatomic) NSString *testName; // @synthesize testName=_testName;
- (void)scrollPlacecardTest;	// IMP=0x0010000000815a89
- (void)didShowWebModule;	// IMP=0x00100000008158f2
- (void)didShowPlaceCard;	// IMP=0x00100000008157a3
- (void)tapPOI;	// IMP=0x0010000000815143
- (void)didFinishJumping;	// IMP=0x0010000000815034
- (_Bool)runTest;	// IMP=0x0010000000814eb2
- (id)initWithApplication:(id)arg1 testName:(id)arg2 options:(id)arg3;	// IMP=0x0010000000814cbf

@end
