//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MKMapView, MapsSuggestionsDGVDataSource, NSArray, NSString;

@interface MapsSuggestionsDebugMapController : UIViewController
{
    MKMapView *_mapView;	// 8 = 0x8
    MapsSuggestionsDGVDataSource *_dataSource;	// 16 = 0x10
    NSArray *_possibleOverlayColors;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000a9109b
- (id)_currentlySelectedAnnotation;	// IMP=0x0010000000a90ff0
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0010000000a90fe2
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000a90fd4
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0010000000a90fc7
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000a90f4c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000a90c6f
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;	// IMP=0x0010000000a90baa
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;	// IMP=0x0010000000a90b4d
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;	// IMP=0x0010000000a90a4c
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;	// IMP=0x0010000000a90996
- (void)_setupMapView;	// IMP=0x0010000000a90696
- (void)viewDidLoad;	// IMP=0x0010000000a901d3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

