//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE, MKMapView, NSLayoutConstraint, UIBarButtonItem, UISegmentedControl, UITableView, UIView;

@interface _TtC9Reminders40TTRIReminderLocationPickerViewController : UIViewController
{
    MISSING_TYPE *contentView;	// 8 = 0x8
    MISSING_TYPE *contentViewMinHeightConstraint;	// 16 = 0x10
    MISSING_TYPE *tableView;	// 24 = 0x18
    MISSING_TYPE *bottomControlsContainerView;	// 32 = 0x20
    MISSING_TYPE *mapAndDragRadiusContainerView;	// 40 = 0x28
    MISSING_TYPE *mapView;	// 48 = 0x30
    MISSING_TYPE *alarmProximitySegmentedControl;	// 56 = 0x38
    MISSING_TYPE *doneButton;	// 64 = 0x40
    MISSING_TYPE *viewModel;	// 72 = 0x48
    MISSING_TYPE *searchBar;	// 80 = 0x50
    MISSING_TYPE *cancelButton;	// 88 = 0x58
    MISSING_TYPE *hasDoneInitialLoad;	// 96 = 0x60
    MISSING_TYPE *mapDragRadiusView;	// 104 = 0x68
    MISSING_TYPE *dragViewCircleColor;	// 112 = 0x70
    MISSING_TYPE *dragViewHandleColor;	// 120 = 0x78
    MISSING_TYPE *previousPopoverIgnoresKeyboardNotifications;	// 128 = 0x80
    MISSING_TYPE *keyboardNotificationObservers;	// 136 = 0x88
    MISSING_TYPE *keyboardHideDeferredHandlingTimer;	// 144 = 0x90
    MISSING_TYPE *presenter;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00400000003ed1e0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000003f0d20
- (void)stopHoldingCurrentContentViewHeight;	// IMP=0x00100000003f0cf0
- (void)alarmProximitySegmentedControlDidChange:(id)arg1;	// IMP=0x00100000003f06d0
- (void)didTapDone:(id)arg1;	// IMP=0x00100000003f0410
- (void)didTapCancel:(id)arg1;	// IMP=0x00100000003f0270
@property(nonatomic) __weak UIBarButtonItem *doneButton; // @synthesize doneButton;
@property(nonatomic) __weak UISegmentedControl *alarmProximitySegmentedControl; // @synthesize alarmProximitySegmentedControl;
@property(nonatomic) __weak MKMapView *mapView; // @synthesize mapView;
@property(nonatomic) __weak UIView *mapAndDragRadiusContainerView; // @synthesize mapAndDragRadiusContainerView;
@property(nonatomic) __weak UIView *bottomControlsContainerView; // @synthesize bottomControlsContainerView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView;
@property(nonatomic, retain) NSLayoutConstraint *contentViewMinHeightConstraint; // @synthesize contentViewMinHeightConstraint;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView;
- (void)mapDragRadiusView:(id)arg1 didUpdateRegion:(id)arg2;	// IMP=0x00100000003effe0
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;	// IMP=0x00100000003eff90
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;	// IMP=0x00100000003eff70
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;	// IMP=0x00100000003efef0
- (void)searchBarTextDidEndEditing:(id)arg1;	// IMP=0x00100000003efe60
- (void)searchBarTextDidBeginEditing:(id)arg1;	// IMP=0x00100000003efe10
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x00100000003efd90
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000003efce0
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00100000003efae0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000003efa30
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000003ef730
- (void)viewDidLayoutSubviews;	// IMP=0x00100000003ef6d0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000003ef360
- (void)willMoveToParentViewController:(id)arg1;	// IMP=0x00100000003ef2d0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000003ef290
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000003eedb0
- (void)viewDidLoad;	// IMP=0x00100000003ed960
- (void)dealloc;	// IMP=0x00100000003ed160
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000003ed0e0

@end
