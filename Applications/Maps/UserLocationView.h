//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/_MKUserLocationView.h>

@class VKTimedAnimation;

@interface UserLocationView : _MKUserLocationView
{
    long long _mode;	// 16 = 0x10
    VKTimedAnimation *_transitionAnimation;	// 24 = 0x18
    _Bool _isNavPuckActive;	// 32 = 0x20
    _Bool _inNavigationMapMode;	// 33 = 0x21
    _Bool _inNavMode;	// 34 = 0x22
    long long _viewMode;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000a5e522
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (_Bool)isPersistent;	// IMP=0x0010000000a5e4f6
- (void)locationManagerFailedToUpdateLocation;	// IMP=0x0010000000a5e478
- (void)updateStateFromLocation:(id)arg1 duration:(double)arg2;	// IMP=0x0010000000a5e325
- (void)_transitionTo:(long long)arg1;	// IMP=0x0010000000a5e220
- (void)_transitionToNormalPuckWithDuration:(double)arg1;	// IMP=0x0010000000a5dc01
- (void)_transitionToNavPuckWithDuration:(double)arg1;	// IMP=0x0010000000a5d51b
- (void)setAnnotation:(id)arg1;	// IMP=0x0010000000a5d487
- (void)_setAnimatingToCoordinate:(_Bool)arg1;	// IMP=0x0010000000a5d413
- (void)_setPresentationCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x0010000000a5d395
- (void)_setPresentationCourse:(double)arg1;	// IMP=0x0010000000a5d321
- (void)_setTracking:(_Bool)arg1;	// IMP=0x0010000000a5d2ad
- (void)_updateVKNavigationPuckMarkerFromCurrentState;	// IMP=0x0010000000a5cf5e
- (void)_setVKNavigationPuckMarker:(id)arg1;	// IMP=0x0010000000a5ce7b
- (void)_updateNavPuckAnimated:(_Bool)arg1;	// IMP=0x0010000000a5cd72
- (_Bool)_shouldUseNavPuck;	// IMP=0x0010000000a5cd5d
- (void)setViewMode:(long long)arg1;	// IMP=0x0010000000a5cc8c
- (void)setInNavMode:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000a5cb89
- (_Bool)_shouldRotateForCourseWithMode:(long long)arg1;	// IMP=0x0010000000a5cb7c
- (void)_updateForMode:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000a5c9e9
- (void)setMode:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000a5c9c1
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000a5c953

@end

