//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CardPresentationController, MNTrafficIncidentAlert, MacMenuPresentationController, MacPopoverPresentationController, NSString, NavUserDecisionConfirmationView;
@protocol NavTrafficIncidentAlertViewControllerDelegate;

@interface TrafficIncidentOptionalRerouteContaineeViewController
{
    MNTrafficIncidentAlert *_incidentAlert;	// 8 = 0x8
    id <NavTrafficIncidentAlertViewControllerDelegate> _delegate;	// 16 = 0x10
    NavUserDecisionConfirmationView *_rerouteIncidentView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000255d58
@property(retain, nonatomic) NavUserDecisionConfirmationView *rerouteIncidentView; // @synthesize rerouteIncidentView=_rerouteIncidentView;
@property(nonatomic) __weak id <NavTrafficIncidentAlertViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MNTrafficIncidentAlert *incidentAlert; // @synthesize incidentAlert=_incidentAlert;
- (void)userDecisionConfirmationViewDidConfirm:(id)arg1;	// IMP=0x0010000000255b69
- (void)userDecisionConfirmationViewDidCancel:(id)arg1;	// IMP=0x0010000000255975
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x00100000002558c4
@property(nonatomic) _Bool progressBarHidden;
@property(nonatomic) double rerouteTimerProgress;
- (void)_setupConstraints;	// IMP=0x001000000025547d
- (void)viewDidLoad;	// IMP=0x00100000002553a5
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000255376
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000025536e

// Remaining properties
@property(readonly, nonatomic) _Bool allowsLongPressToMarkLocation;
@property(readonly, nonatomic) _Bool allowsQuickActionMenuInMap;
@property(readonly, nonatomic) CardPresentationController *cardPresentationController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double headerHeight;
@property(readonly, nonatomic) MacMenuPresentationController *macMenuPresentationController;
@property(readonly, nonatomic) MacPopoverPresentationController *macPopoverPresentationController;
@property(readonly, nonatomic) unsigned long long maxLayoutForEdgeInsetsUpdate;
@property(nonatomic) unsigned long long preferredPresentationStyle;
@property(readonly, nonatomic) unsigned long long retainedLayout;
@property(readonly) Class superclass;

@end
