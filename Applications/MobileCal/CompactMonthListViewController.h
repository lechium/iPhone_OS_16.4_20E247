//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class CalendarModel, EKUIRecurrenceAlertController, MISSING_TYPE, NSMutableArray, NSObject, NSString, UITapGestureRecognizer;
@protocol CompactMonthListViewControllerDelegate;

@interface CompactMonthListViewController : UITableViewController
{
    CalendarModel *_model;	// 8 = 0x8
    NSMutableArray *_selectedDayOccurrences;	// 16 = 0x10
    _Bool _loadingOccurrenceCache;	// 24 = 0x18
    _Bool _willFlashOccurrenceTableScrollIndicators;	// 25 = 0x19
    double _cachedRowHeight;	// 32 = 0x20
    EKUIRecurrenceAlertController *_recurrenceAlertController;	// 40 = 0x28
    UITapGestureRecognizer *_multiSelectGestureRecognizer;	// 48 = 0x30
    MISSING_TYPE *_shouldIgnoreSelectedOccurrencesChangedNotification;	// 56 = 0x38
    _Bool _disabled;	// 57 = 0x39
    NSObject<CompactMonthListViewControllerDelegate> *_compactMonthListViewDelegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000002cc94
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) NSObject<CompactMonthListViewControllerDelegate> *compactMonthListViewDelegate; // @synthesize compactMonthListViewDelegate=_compactMonthListViewDelegate;
- (void)_multiSelect:(id)arg1;	// IMP=0x001000000002ca94
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x001000000002ca38
- (void)pasteboardManager:(id)arg1 didFinishPasteWithResult:(unsigned long long)arg2 willOpenEditor:(_Bool)arg3;	// IMP=0x001000000002ca1a
- (void)pasteboardManager:(id)arg1 beginEditingEvent:(id)arg2;	// IMP=0x001000000002c9f4
- (id)editorForPasteboardManager:(id)arg1;	// IMP=0x001000000002c9e2
- (id)viewControllerToPresentAlertFromForPasteboardManager:(id)arg1;	// IMP=0x001000000002c9d9
- (void)paste:(id)arg1;	// IMP=0x001000000002c8ef
- (void)copy:(id)arg1;	// IMP=0x001000000002c830
- (void)cut:(id)arg1;	// IMP=0x001000000002c771
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x001000000002c60b
- (void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2;	// IMP=0x001000000002c605
- (void)attemptDisplayReviewPrompt;	// IMP=0x001000000002c558
- (id)pasteboardManager;	// IMP=0x001000000002c53b
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x001000000002c49b
- (void)_deleteEventAtIndexPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002c14c
- (void)_purgeCachedOccurrence:(id)arg1;	// IMP=0x001000000002c018
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x001000000002be53
- (double)_rowHeight;	// IMP=0x001000000002bd9f
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x001000000002bd8d
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;	// IMP=0x001000000002bd36
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x001000000002bbfa
- (_Bool)_rowDrawsBackground:(id)arg1;	// IMP=0x001000000002bbaf
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000002b877
- (id)_eventForRowAtIndexPath:(id)arg1;	// IMP=0x001000000002b821
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x001000000002b7e0
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x001000000002b7d5
- (void)tableView:(id)arg1 willEndContextMenuInteractionWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x001000000002b758
- (void)tableView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x001000000002b520
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x001000000002b13c
- (void)_ignoreSelectedOccurrencesChangedNotification:(CDUnknownBlockType)arg1;	// IMP=0x001000000002b116
- (void)forceUpdate;	// IMP=0x001000000002b0ff
- (void)deselectAllRowsAnimated:(_Bool)arg1;	// IMP=0x001000000002af29
- (void)_flashOccurrenceTableScrollIndicators;	// IMP=0x001000000002ae98
- (void)_updateContentUnavailableConfigurationUsingState:(id)arg1;	// IMP=0x001000000002ad85
- (void)_updateOccurrenceTableWithForce:(_Bool)arg1;	// IMP=0x001000000002aaf4
- (void)_updateOccurrenceTable;	// IMP=0x001000000002aae0
- (void)_reloadOccurrenceData;	// IMP=0x001000000002a8cb
- (void)_contentCategorySizeChanged:(id)arg1;	// IMP=0x001000000002a879
- (void)_localeChanged:(id)arg1;	// IMP=0x001000000002a83c
- (void)_significantTimeChange:(id)arg1;	// IMP=0x001000000002a78f
- (void)_selectedOccurrencesChanged:(id)arg1;	// IMP=0x001000000002a540
- (void)_occurrencesChanged:(id)arg1;	// IMP=0x001000000002a36c
- (void)_selectedDateChanged:(id)arg1;	// IMP=0x001000000002a35a
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000002a1f0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000029eab
- (void)viewDidLoad;	// IMP=0x0010000000029b63
- (id)initWithModel:(id)arg1;	// IMP=0x0010000000029ade

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

