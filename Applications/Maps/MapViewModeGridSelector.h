//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MapViewModeGridView, NSString, SettingsController, UIMenu;
@protocol MapViewModeGridSelectorDelegate;

@interface MapViewModeGridSelector : UIView
{
    MapViewModeGridView *_gridView;	// 8 = 0x8
    UIMenu *_satelliteMenu;	// 16 = 0x10
    id <MapViewModeGridSelectorDelegate> _delegate;	// 24 = 0x18
    SettingsController *_settingsController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000071f806
@property(nonatomic) __weak SettingsController *settingsController; // @synthesize settingsController=_settingsController;
@property(nonatomic) __weak id <MapViewModeGridSelectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)toggleTraffic;	// IMP=0x001000000071f76b
- (void)toggleLabels;	// IMP=0x001000000071f716
- (void)validateCommand:(id)arg1;	// IMP=0x001000000071f638
- (void)mapViewModeButtonViewTapped:(id)arg1;	// IMP=0x001000000071f488
- (id)_buttonViewModelForViewMode:(long long)arg1;	// IMP=0x001000000071f0d4
- (void)_createSatelliteMenu;	// IMP=0x001000000071eead
- (void)_createSubviews;	// IMP=0x001000000071eaf4
- (void)_updateState;	// IMP=0x001000000071e865
- (void)refresh;	// IMP=0x001000000071e853
- (id)init;	// IMP=0x001000000071e7a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

