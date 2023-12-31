//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class ExtensionsActionsFooterView, ExtensionsPrimaryDetailsView, ExtensionsSecondaryDetailsView, INRestaurantReservationUserBooking, MKMapItem, NSArray, NSDateFormatter, NSNumberFormatter, NSString, ReservationAnalyticsCaptor, UITableView;
@protocol RestaurantReservationConfirmationViewControllerDelegate;

@interface RestaurantReservationConfirmationViewController : UIViewController
{
    INRestaurantReservationUserBooking *_userBooking;	// 8 = 0x8
    id <RestaurantReservationConfirmationViewControllerDelegate> _reservationDelegate;	// 16 = 0x10
    UITableView *_tableView;	// 24 = 0x18
    ExtensionsPrimaryDetailsView *_primaryDetailsView;	// 32 = 0x20
    ExtensionsSecondaryDetailsView *_secondaryDetailsView;	// 40 = 0x28
    ExtensionsActionsFooterView *_openAppView;	// 48 = 0x30
    NSDateFormatter *_dateFormatter;	// 56 = 0x38
    NSNumberFormatter *_numberFormatter;	// 64 = 0x40
    MKMapItem *_mapItem;	// 72 = 0x48
    ReservationAnalyticsCaptor *_analyticsCaptor;	// 80 = 0x50
    NSString *_appName;	// 88 = 0x58
    NSArray *_buttons;	// 96 = 0x60
    NSArray *_sections;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000006852a3
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) ReservationAnalyticsCaptor *analyticsCaptor; // @synthesize analyticsCaptor=_analyticsCaptor;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) ExtensionsActionsFooterView *openAppView; // @synthesize openAppView=_openAppView;
@property(retain, nonatomic) ExtensionsSecondaryDetailsView *secondaryDetailsView; // @synthesize secondaryDetailsView=_secondaryDetailsView;
@property(retain, nonatomic) ExtensionsPrimaryDetailsView *primaryDetailsView; // @synthesize primaryDetailsView=_primaryDetailsView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <RestaurantReservationConfirmationViewControllerDelegate> reservationDelegate; // @synthesize reservationDelegate=_reservationDelegate;
@property(retain, nonatomic) INRestaurantReservationUserBooking *userBooking; // @synthesize userBooking=_userBooking;
- (_Bool)useAvailableHeight;	// IMP=0x00100000006850ff
@property(readonly, nonatomic) _Bool useExtensionFlowHeader;
- (void)requestRefresh;	// IMP=0x00100000006850ab
- (void)checkUserBookingForRefresh:(id)arg1;	// IMP=0x001000000068505f
- (id)tableDescriptionForUserBooking:(id)arg1;	// IMP=0x0010000000684cd3
- (id)dayAndRestaurantDescriptionForUserBooking:(id)arg1;	// IMP=0x0010000000684b20
- (id)timeAndTableDescriptionForUserBooking:(id)arg1;	// IMP=0x0010000000684966
- (id)confirmationSubtitleTextForUserBooking:(id)arg1;	// IMP=0x00100000006848af
- (id)userInfoStringForGuest:(id)arg1;	// IMP=0x00100000006846b0
- (id)headerTextForUserBookingStatus:(unsigned long long)arg1;	// IMP=0x00100000006845d1
- (void)reservationConfirmationHeaderCellAccessoryButtonWasTapped:(id)arg1;	// IMP=0x0010000000684555
- (void)updateTheme;	// IMP=0x0010000000684380
- (void)configureHeaderCell:(id)arg1;	// IMP=0x001000000068410f
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000683df2
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000683ddf
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000683d9a
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000683d8c
- (void)buildSections;	// IMP=0x0010000000683783
- (void)setupConstraints;	// IMP=0x00100000006833c0
- (void)registerCellClasses;	// IMP=0x0010000000683254
- (void)configureTableView;	// IMP=0x001000000068304c
- (void)viewDidLoad;	// IMP=0x0010000000682fdc
- (id)initWithUserBooking:(id)arg1 mapItem:(id)arg2 appName:(id)arg3 analyticsCaptor:(id)arg4;	// IMP=0x0010000000682ee7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

