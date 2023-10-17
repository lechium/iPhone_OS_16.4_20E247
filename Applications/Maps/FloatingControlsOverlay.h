//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ControlContainerViewController, FloatingControlsViewController, MapsEdgeConstraints, NSString, VenuesManager;
@protocol ChromeOverlayHosting, FloatingControlsOverlayDelegate, MKMapViewDelegatePrivate, MapViewProviding;

@interface FloatingControlsOverlay : NSObject
{
    MapsEdgeConstraints *_edgeConstraints;	// 8 = 0x8
    id <ChromeOverlayHosting> _host;	// 16 = 0x10
    id <FloatingControlsOverlayDelegate> _delegate;	// 24 = 0x18
    id <MapViewProviding> _mapViewProvider;	// 32 = 0x20
    double _margin;	// 40 = 0x28
    FloatingControlsViewController *_floatingControlsViewController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000049a8da
@property(readonly, nonatomic) FloatingControlsViewController *floatingControlsViewController; // @synthesize floatingControlsViewController=_floatingControlsViewController;
@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(nonatomic) __weak id <MapViewProviding> mapViewProvider; // @synthesize mapViewProvider=_mapViewProvider;
@property(nonatomic) __weak id <FloatingControlsOverlayDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <ChromeOverlayHosting> host; // @synthesize host=_host;
@property(readonly, nonatomic) ControlContainerViewController *containerViewController;
@property(readonly, nonatomic) VenuesManager *venuesManager;
- (void)viewControllerCloseSettingsTip:(id)arg1;	// IMP=0x001000000049a798
- (_Bool)shouldShowSearchHereControl;	// IMP=0x001000000049a73e
- (void)refreshCurrentSearch;	// IMP=0x001000000049a6e1
- (void)viewControllerOpenSettings:(id)arg1;	// IMP=0x001000000049a684
- (void)exit3dMode;	// IMP=0x001000000049a627
- (void)select3dMode;	// IMP=0x001000000049a5ca
@property(nonatomic) _Bool automaticallyUpdateCompassInsets;
@property(nonatomic) long long settingsTipState;
- (void)setSearchSession:(id)arg1;	// IMP=0x001000000049a438
- (void)refreshControls;	// IMP=0x001000000049a3fb
- (void)hideControlsIfNeeded:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x001000000049a329
- (void)showControlsIfNeeded:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x001000000049a1c9
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x001000000049a070
@property(nonatomic, getter=isHidden) _Bool hidden;
- (void);	// IMP=0x0010000000499def
- (void)_installInContentView:(id)arg1 layoutGuide:(id)arg2;	// IMP=0x0010000000499b95
@property(nonatomic) double alpha;
@property(readonly, nonatomic) id <MKMapViewDelegatePrivate> mapViewDelegate;
- (id)view;	// IMP=0x0010000000499a71

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
