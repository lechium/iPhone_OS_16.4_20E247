//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CalendarModel, EKUIEmailCompositionManager, EKUIRecurrenceAlertController, NSMutableArray, NSMutableDictionary, NSString;
@protocol InboxTableViewGroupControllerDelegate, OS_dispatch_queue;

@interface InboxNotificationsGroupController : NSObject
{
    CalendarModel *_model;	// 8 = 0x8
    NSMutableArray *_notificationReferences;	// 16 = 0x10
    NSMutableArray *_sharedCalendarInvitationsReplyPending;	// 24 = 0x18
    NSMutableDictionary *_pendingComments;	// 32 = 0x20
    NSMutableDictionary *_conflictInfo;	// 40 = 0x28
    NSMutableDictionary *_organizerNames;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_prefetchConflictsQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_conflictsQueue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_conflictsScanningQueue;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_prefetchNamesQueue;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_namesQueue;	// 88 = 0x58
    EKUIRecurrenceAlertController *_recurrenceAlertController;	// 96 = 0x60
    _Bool _needsRefresh;	// 104 = 0x68
    _Bool _visible;	// 105 = 0x69
    id <InboxTableViewGroupControllerDelegate> _delegate;	// 112 = 0x70
    EKUIEmailCompositionManager *_messageSendingManager;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x002000000009de5d
@property(retain, nonatomic) EKUIEmailCompositionManager *messageSendingManager; // @synthesize messageSendingManager=_messageSendingManager;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) __weak id <InboxTableViewGroupControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool needsRefresh; // @synthesize needsRefresh=_needsRefresh;
- (id)_eventForIndexPath:(id)arg1;	// IMP=0x001000000009db94
- (id)filteredNotificationsFromArray:(id)arg1;	// IMP=0x001000000009db7e
- (id)tableView;	// IMP=0x001000000009dafe
- (void)_notificationsChanged:(id)arg1;	// IMP=0x001000000009d967
- (void)_localeChanged:(id)arg1;	// IMP=0x001000000009d832
- (id)noContentStringForInboxTableView:(id)arg1;	// IMP=0x001000000009d7bf
- (void)attemptDisplayReviewPrompt;	// IMP=0x001000000009d74d
- (void)messageCell:(id)arg1 committedComment:(id)arg2;	// IMP=0x001000000009d6b1
- (id)eventStoreForCell:(id)arg1;	// IMP=0x001000000009d69b
- (void)performAction:(long long)arg1 forCell:(id)arg2 ifCancelled:(CDUnknownBlockType)arg3;	// IMP=0x001000000009a29d
- (void)_savePendingComments;	// IMP=0x001000000009a140
- (void)_saveStatus:(long long)arg1 forEventInvitationNotification:(id)arg2 commit:(_Bool)arg3;	// IMP=0x0010000000099ae1
- (id)titleForHeader;	// IMP=0x0010000000099ad9
- (id)eventForRow:(long long)arg1;	// IMP=0x0010000000099886
- (_Bool)canSelectRow:(long long)arg1;	// IMP=0x0010000000099853
- (void)rowSelected:(long long)arg1;	// IMP=0x00100000000996f9
- (double)estimatedHeightForRow:(long long)arg1;	// IMP=0x00100000000996e0
- (id)cellForRow:(long long)arg1 allowAsyncLoading:(_Bool)arg2;	// IMP=0x0010000000098cce
- (long long)numberOfRows;	// IMP=0x0010000000098cb8
- (_Bool)hasRows;	// IMP=0x0010000000098c9b
- (void)refreshIfNeeded;	// IMP=0x00100000000988bd
- (void)prefetchRow:(long long)arg1;	// IMP=0x00100000000986d0
- (void)inboxWillDismiss;	// IMP=0x00100000000986be
- (void)prefetchConflictInfo;	// IMP=0x0010000000098467
- (id)conflictInfoForNotification:(id)arg1;	// IMP=0x0010000000097dce
- (void)viewDidDisappear;	// IMP=0x0010000000097dba
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000097ce5
- (id)initWithModel:(id)arg1 delegate:(id)arg2;	// IMP=0x0010000000097a21

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
