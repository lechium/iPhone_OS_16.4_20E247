//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE, NSUndoManager, UITableView;

@interface _TtC9Reminders32TTRIReminderDetailViewController : UIViewController
{
    MISSING_TYPE *screenOriginOffset;	// 8 = 0x8
    MISSING_TYPE *tableView;	// 24 = 0x18
    MISSING_TYPE *viewModel;	// 0 = 0x0
    MISSING_TYPE *tableDataController;	// 0 = 0x0
    MISSING_TYPE *localUndoManager;	// 0 = 0x0
    MISSING_TYPE *style;	// 0 = 0x0
    MISSING_TYPE *cancelButton;	// 0 = 0x0
    MISSING_TYPE *commitButton;	// 0 = 0x0
    MISSING_TYPE *needsSelectionSuggestionText;	// 0 = 0x0
    MISSING_TYPE *prefersHalfPageSheetPresentation;	// 0 = 0x0
    MISSING_TYPE *currentTextInputModeObserver;	// 0 = 0x0
    MISSING_TYPE *currentTextInputModeCancellable;	// 0 = 0x0
    MISSING_TYPE *needsTableCellResize;	// 0 = 0x0
    MISSING_TYPE *presenter;	// 0 = 0x0
    MISSING_TYPE *textSection;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_titleCell;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_notesCell;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_dueDateSection;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_dueDateToggleCell;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_dueDatePickerCell;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_dueTimeToggleCell;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_dueTimePickerCell;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_repeatSection;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_recurrenceRuleCell;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_recurrenceRuleOptionsCell;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_customRecurrenceRuleCell;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_recurrenceEndMenuOptions;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_recurrenceEndOptionsCell;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_recurrenceEndDateCell;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_repeatEndCell;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_hashtagsSection;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_hashtagsCell;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_locationToggleCell;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_locationQuickPicksCell;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_locationDetailCell;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_personTriggerSection;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_personToggleCell;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_personUnsetDetailCell;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_personSetDetailCell;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_assigneeSection;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_assigneeCandidatesGroup;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_addAssigneeOptionsCell;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_addAssigneeCell;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_prioritySection;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_priorityLevelCell;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_priorityLevelOptionsCell;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_flaggedSection;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_flaggedToggleCell;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_listCell;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_listPopoverCell;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_subtaskSection;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_subtasksCell;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_attachmentSection;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_attachmentsGroup;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_addAttachmentCell;	// 0 = 0x0
    MISSING_TYPE *urlSection;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_urlCell;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_locationSection;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x004000000027fa40
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000027f9e0
- (void)didTapCommit:(id)arg1;	// IMP=0x001000000026f510
- (void)didTapCancel:(id)arg1;	// IMP=0x001000000026f490
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000026f3b0
- (void)viewWillLayoutSubviews;	// IMP=0x001000000026f380
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000026f1d0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000026f0b0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000026f050
- (void)viewDidLoad;	// IMP=0x001000000026e200
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
@property(nonatomic, readonly) NSUndoManager *undoManager;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000026d6b0

@end

