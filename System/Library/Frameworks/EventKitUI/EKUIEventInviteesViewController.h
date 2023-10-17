//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CalendarModel, EKEvent, EKInviteeAlternativeTimeSearcher, EKUIEmailCompositionManager, EKUIEventInviteesEditViewController, EKUIEventInviteesView, EKUIInviteesViewAddInviteesSection, EKUIInviteesViewAllInviteesCanAttendSection, EKUIInviteesViewAvailabilitySection, EKUIInviteesViewInvisibleInviteeStatusSection, EKUIInviteesViewNotRespondedInviteesSection, EKUIInviteesViewOriginalConflictSection, EKUIInviteesViewProposedTimeSection, EKUIInviteesViewSomeInviteesCanAttendSection, NSArray, NSDate, NSMutableArray, NSString, UITableView;
@protocol EKEditItemViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface EKUIEventInviteesViewController : UIViewController
{
    CalendarModel *_model;	// 8 = 0x8
    _Bool _hidesManagedAttendeesSection;	// 16 = 0x10
    _Bool _usesCustomToolbar;	// 17 = 0x11
    _Bool _usesRaisedCustomToolbar;	// 18 = 0x12
    _Bool _resetAttendeesSections;	// 19 = 0x13
    _Bool _resetConflictResolutionSections;	// 20 = 0x14
    _Bool _viewIsVisible;	// 21 = 0x15
    _Bool _deletedParticipants;	// 22 = 0x16
    _Bool _fromDetail;	// 23 = 0x17
    _Bool _prohibitCallingSearcherStateChanged;	// 24 = 0x18
    EKUIEventInviteesEditViewController *_parentController;	// 32 = 0x20
    NSDate *_selectedStartDate;	// 40 = 0x28
    NSDate *_selectedEndDate;	// 48 = 0x30
    UITableView *_tableView;	// 56 = 0x38
    UIViewController *_presentedController;	// 64 = 0x40
    EKUIEventInviteesView *_inviteesView;	// 72 = 0x48
    EKEvent *_event;	// 80 = 0x50
    NSArray *_sections;	// 88 = 0x58
    EKUIInviteesViewAddInviteesSection *_addInviteesSection;	// 96 = 0x60
    NSMutableArray *_respondedSection;	// 104 = 0x68
    EKUIInviteesViewNotRespondedInviteesSection *_notRespondedSection;	// 112 = 0x70
    EKUIInviteesViewInvisibleInviteeStatusSection *_invisibleInviteeStatusSection;	// 120 = 0x78
    EKUIInviteesViewAvailabilitySection *_availabilitySection;	// 128 = 0x80
    EKUIInviteesViewProposedTimeSection *_proposedTimeSection;	// 136 = 0x88
    EKUIInviteesViewOriginalConflictSection *_originalConflictSection;	// 144 = 0x90
    EKUIInviteesViewSomeInviteesCanAttendSection *_someInviteesCanAttendSection;	// 152 = 0x98
    EKUIInviteesViewAllInviteesCanAttendSection *_allInviteesCanAttendSection;	// 160 = 0xa0
    EKInviteeAlternativeTimeSearcher *_availabilitySearcher;	// 168 = 0xa8
    EKUIEmailCompositionManager *_messageSendingManager;	// 176 = 0xb0
}

+ (id)_participantsInArray:(id)arg1 thatAreNotInArray:(id)arg2;	// IMP=0x001000000004bb51
- (void).cxx_destruct;	// IMP=0x000000000004dab6
@property(nonatomic) _Bool prohibitCallingSearcherStateChanged; // @synthesize prohibitCallingSearcherStateChanged=_prohibitCallingSearcherStateChanged;
@property(retain, nonatomic) EKUIEmailCompositionManager *messageSendingManager; // @synthesize messageSendingManager=_messageSendingManager;
@property(retain, nonatomic) EKInviteeAlternativeTimeSearcher *availabilitySearcher; // @synthesize availabilitySearcher=_availabilitySearcher;
@property(retain, nonatomic) EKUIInviteesViewAllInviteesCanAttendSection *allInviteesCanAttendSection; // @synthesize allInviteesCanAttendSection=_allInviteesCanAttendSection;
@property(retain, nonatomic) EKUIInviteesViewSomeInviteesCanAttendSection *someInviteesCanAttendSection; // @synthesize someInviteesCanAttendSection=_someInviteesCanAttendSection;
@property(retain, nonatomic) EKUIInviteesViewOriginalConflictSection *originalConflictSection; // @synthesize originalConflictSection=_originalConflictSection;
@property(retain, nonatomic) EKUIInviteesViewProposedTimeSection *proposedTimeSection; // @synthesize proposedTimeSection=_proposedTimeSection;
@property(retain, nonatomic) EKUIInviteesViewAvailabilitySection *availabilitySection; // @synthesize availabilitySection=_availabilitySection;
@property(retain, nonatomic) EKUIInviteesViewInvisibleInviteeStatusSection *invisibleInviteeStatusSection; // @synthesize invisibleInviteeStatusSection=_invisibleInviteeStatusSection;
@property(retain, nonatomic) EKUIInviteesViewNotRespondedInviteesSection *notRespondedSection; // @synthesize notRespondedSection=_notRespondedSection;
@property(retain, nonatomic) NSMutableArray *respondedSection; // @synthesize respondedSection=_respondedSection;
@property(retain, nonatomic) EKUIInviteesViewAddInviteesSection *addInviteesSection; // @synthesize addInviteesSection=_addInviteesSection;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) EKEvent *event; // @synthesize event=_event;
@property(nonatomic) _Bool fromDetail; // @synthesize fromDetail=_fromDetail;
@property(nonatomic) _Bool deletedParticipants; // @synthesize deletedParticipants=_deletedParticipants;
@property(nonatomic) _Bool viewIsVisible; // @synthesize viewIsVisible=_viewIsVisible;
@property(nonatomic) _Bool resetConflictResolutionSections; // @synthesize resetConflictResolutionSections=_resetConflictResolutionSections;
@property(nonatomic) _Bool resetAttendeesSections; // @synthesize resetAttendeesSections=_resetAttendeesSections;
@property(retain, nonatomic) EKUIEventInviteesView *inviteesView; // @synthesize inviteesView=_inviteesView;
@property(retain, nonatomic) UIViewController *presentedController; // @synthesize presentedController=_presentedController;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool usesRaisedCustomToolbar; // @synthesize usesRaisedCustomToolbar=_usesRaisedCustomToolbar;
@property(nonatomic) _Bool usesCustomToolbar; // @synthesize usesCustomToolbar=_usesCustomToolbar;
@property(nonatomic) _Bool hidesManagedAttendeesSection; // @synthesize hidesManagedAttendeesSection=_hidesManagedAttendeesSection;
@property(retain, nonatomic) NSDate *selectedEndDate; // @synthesize selectedEndDate=_selectedEndDate;
@property(retain, nonatomic) NSDate *selectedStartDate; // @synthesize selectedStartDate=_selectedStartDate;
@property(nonatomic) __weak EKUIEventInviteesEditViewController *parentController; // @synthesize parentController=_parentController;
- (void)_searcherStateChanged:(long long)arg1;	// IMP=0x000000000004cb82
- (void)_requestDismissal;	// IMP=0x000000000004c9d0
- (void)_refreshIfNeeded;	// IMP=0x000000000004c60f
- (void)prepareToReloadAttendeesSections;	// IMP=0x000000000004c274
- (void)_smoothRefreshIfNeededForSections:(id)arg1;	// IMP=0x000000000004c19c
- (id)_sectionForIndex:(unsigned long long)arg1;	// IMP=0x000000000004c024
- (long long)_indexForSection:(id)arg1;	// IMP=0x000000000004be2c
- (void)_dismissPresentedViewControllerAnimated:(_Bool)arg1;	// IMP=0x000000000004baf0
- (void)_presentViewController:(id)arg1;	// IMP=0x000000000004b9a0
- (struct CGSize)preferredContentSize;	// IMP=0x000000000004b844
- (id)availabilityTapped;	// IMP=0x000000000004b753
- (void)addInviteesTapped;	// IMP=0x000000000004b3db
- (void)_fontSizeDefinitionsChanged:(id)arg1;	// IMP=0x000000000004b106
- (void)_eventModified:(id)arg1;	// IMP=0x000000000004afd0
- (void)_dismiss:(id)arg1;	// IMP=0x000000000004a8ca
- (id)editItemEventToDetach;	// IMP=0x000000000004a8c2
- (_Bool)editItemViewControllerShouldShowDetachAlert;	// IMP=0x000000000004a8ba
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;	// IMP=0x0000000000049e03
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000049c8a
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000049bd2
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000049a6c
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000049909
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x000000000004979a
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000049621
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000000494e6
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x0000000000049377
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x00000000000491e1
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000004907d
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x0000000000048f92
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x0000000000048f81
- (_Bool)showsManagedAttendeesSectionFooter;	// IMP=0x0000000000048f64
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x0000000000048efb
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000000048eea
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0000000000048e81
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000048d66
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000048c57
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000048a84
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000000048a3f
- (void)willEnterForeground;	// IMP=0x0000000000048a2d
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000004899c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000488fa
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000488a4
- (void)updateCustomNavigationItemButtons;	// IMP=0x00000000000486bd
@property(nonatomic) _Bool useCustomBackButton;
- (void)_sendMessageToParticipants:(id)arg1;	// IMP=0x00000000000482e2
- (void)viewDidLoad;	// IMP=0x0000000000044041
- (_Bool)hidesBottomBarWhenPushed;	// IMP=0x0000000000044039
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000044027
- (void)resetBackgroundColor;	// IMP=0x0000000000043f47
- (void)loadView;	// IMP=0x0000000000043d6d
- (void)dealloc;	// IMP=0x0000000000043c44
- (id)initWithEvent:(id)arg1 fromDetail:(_Bool)arg2 model:(id)arg3;	// IMP=0x000000000004387e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <EKEditItemViewControllerDelegate> editDelegate;
@property(nonatomic) _Bool editItemShouldBeAskedForInjectableViewController;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool presentModally;
@property(readonly) Class superclass;

@end
