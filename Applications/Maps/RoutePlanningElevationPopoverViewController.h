//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class DirectionsElevationGraphView, DirectionsElevationLabelView, GEOComposedRoute;

@interface RoutePlanningElevationPopoverViewController : UIViewController
{
    DirectionsElevationGraphView *_elevationGraphView;	// 8 = 0x8
    DirectionsElevationLabelView *_ascentLabelView;	// 16 = 0x10
    DirectionsElevationLabelView *_descentLabelView;	// 24 = 0x18
    GEOComposedRoute *_route;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000ad31c1
@property(retain, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
- (void)_updateLabels;	// IMP=0x0010000000ad2ee1
- (void)viewDidLoad;	// IMP=0x0010000000ad1ee0

@end
