//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MKMapView, NSString, UIPrintInteractionController, UIView;
@protocol PrintControllerDelegate;

@interface PrintController : NSObject
{
    id <PrintControllerDelegate> _delegate;	// 8 = 0x8
    MKMapView *_mapView;	// 16 = 0x10
    struct CGRect _presentationRect;	// 24 = 0x18
    UIView *_presentationView;	// 56 = 0x38
    _Bool _isShowingPopover;	// 64 = 0x40
    _Bool _shouldShowPopoverAfterOrientationChange;	// 65 = 0x41
    unsigned long long _printTaskBackgroundIdentifier;	// 72 = 0x48
    UIPrintInteractionController *_pic;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000002c548d
@property(retain, nonatomic) UIView *presentationView; // @synthesize presentationView=_presentationView;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) __weak id <PrintControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)printInteractionControllerDidFinishJob:(id)arg1;	// IMP=0x00100000002c541e
- (void)printInteractionControllerWillStartJob:(id)arg1;	// IMP=0x00100000002c537f
- (void)printInteractionControllerDidPresentPrinterOptions:(id)arg1;	// IMP=0x00100000002c5349
- (id)_printInfoForSearchString:(id)arg1 route:(id)arg2 title:(id)arg3;	// IMP=0x00100000002c51b0
- (id)_rendererForSearchResults:(id)arg1 title:(id)arg2 subTitle:(id)arg3;	// IMP=0x00100000002c50c4
- (MISSING_TYPE *)_rendererForRoute: /* Error: Ran out of types for this method. */;	// IMP=0x00100000002c5067
- (_Bool)_searchResults:(id)arg1 areFarAwayFromView:(id)arg2;	// IMP=0x00100000002c4e34
- (id)mapRegion:(id)arg1 insetLat:(double)arg2 insetLng:(double)arg3;	// IMP=0x00100000002c4c9c
- (void)orientationDidChange;	// IMP=0x00100000002c4bd3
- (void)orientationWillChange;	// IMP=0x00100000002c4aaa
- (void)print;	// IMP=0x00100000002c4a94
- (void)printSearchString:(id)arg1 searchResults:(id)arg2 title:(id)arg3 subTitle:(id)arg4;	// IMP=0x00100000002c4a4c
- (void)_print:(id)arg1;	// IMP=0x00100000002c4845
- (void)printRoute:(id)arg1 searchString:(id)arg2;	// IMP=0x00100000002c47fd
- (id)_printControllerForSearchString:(id)arg1 searchResults:(id)arg2 title:(id)arg3 subTitle:(id)arg4;	// IMP=0x00100000002c46bd
- (id)_printControllerForRoute:(id)arg1 searchString:(id)arg2;	// IMP=0x00100000002c45cb
- (void)_endBackgroundTask;	// IMP=0x00100000002c4505
- (_Bool)_isInBackground;	// IMP=0x00100000002c446c
@property(readonly, nonatomic) _Bool isPrinting;
- (id)initWithMapView:(id)arg1 delegate:(id)arg2;	// IMP=0x00100000002c43bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
