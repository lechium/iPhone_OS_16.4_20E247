//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, RAPEditLocationMapView, RAPMarkerViewAttributes;

@interface EditLocationViewController : UIViewController
{
    CDStruct_02837cd9 _mapRect;	// 8 = 0x8
    _Bool _isShowingTraffic;	// 40 = 0x28
    int _analyticsTarget;	// 44 = 0x2c
    CDUnknownBlockType _changeHandler;	// 48 = 0x30
    RAPEditLocationMapView *_editLocationMapView;	// 56 = 0x38
    RAPMarkerViewAttributes *_attributes;	// 64 = 0x40
    unsigned long long _mapType;	// 72 = 0x48
    struct CLLocationCoordinate2D _featureCoordinate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000123fcc
@property(nonatomic) _Bool isShowingTraffic; // @synthesize isShowingTraffic=_isShowingTraffic;
@property(nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
@property(retain, nonatomic) RAPMarkerViewAttributes *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) struct CLLocationCoordinate2D featureCoordinate; // @synthesize featureCoordinate=_featureCoordinate;
@property(nonatomic) int analyticsTarget; // @synthesize analyticsTarget=_analyticsTarget;
@property(retain, nonatomic) RAPEditLocationMapView *editLocationMapView; // @synthesize editLocationMapView=_editLocationMapView;
@property(copy, nonatomic) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
- (void)editLocationMapView:(id)arg1 didChangeViewMode:(long long)arg2;	// IMP=0x0010000000123e7f
- (void)editLocationMapViewFinishedZoomingOut:(id)arg1;	// IMP=0x0010000000123e68
- (void)editLocationMapViewFinishedZoomingIn:(id)arg1;	// IMP=0x0010000000123e51
- (void)editLocationMapViewFinishedPanning:(id)arg1;	// IMP=0x0010000000123e3a
- (void)editLocationMapView:(id)arg1 didChangeCenterCoordinate:(struct CLLocationCoordinate2D)arg2;	// IMP=0x0010000000123d50
- (void)editLocationMapView:(id)arg1 didSelectAnnotationView:(id)arg2;	// IMP=0x0010000000123d4a
- (void)_captureUserAction:(int)arg1;	// IMP=0x0010000000123d01
@property(readonly, nonatomic) struct CLLocationCoordinate2D selectedCoordinate;
- (void)setupConstraints;	// IMP=0x0010000000123904
- (void)viewDidLoad;	// IMP=0x0010000000123641
- (id)initWithInitialCoordinates:(struct CLLocationCoordinate2D)arg1 inMapRect:(CDStruct_02837cd9)arg2 analyticsTarget:(int)arg3 markerViewAttributes:(id)arg4;	// IMP=0x0010000000123574

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
