//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKEvent, EKEventStore, EKUIRecurrenceAlertController, NSString, UIViewController;
@protocol EKEditItemViewControllerProtocol, EKEventDetailItemDelegate;

__attribute__((visibility("hidden")))
@interface EKEventDetailItem : NSObject
{
    EKEventStore *_store;	// 8 = 0x8
    EKEvent *_event;	// 16 = 0x10
    EKEvent *_lastEventUpdated;	// 24 = 0x18
    UIViewController<EKEditItemViewControllerProtocol> *_viewController;	// 32 = 0x20
    EKUIRecurrenceAlertController *_recurrenceAlertController;	// 40 = 0x28
    _Bool _allowsEditing;	// 48 = 0x30
    _Bool _shouldIndent;	// 49 = 0x31
    int _cellPosition;	// 52 = 0x34
    id <EKEventDetailItemDelegate> _delegate;	// 56 = 0x38
    UIViewController *_viewControllerToPresentFrom;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000019fca0
@property(nonatomic) __weak UIViewController *viewControllerToPresentFrom; // @synthesize viewControllerToPresentFrom=_viewControllerToPresentFrom;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) _Bool shouldIndent; // @synthesize shouldIndent=_shouldIndent;
@property(nonatomic) int cellPosition; // @synthesize cellPosition=_cellPosition;
@property(nonatomic) _Bool allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property(nonatomic) __weak id <EKEventDetailItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)eventViewController:(id)arg1 tableViewDidScroll:(id)arg2;	// IMP=0x000000000019fbfb
@property(readonly, nonatomic) _Bool detailItemVisibilityChanged;
@property(readonly, nonatomic) unsigned long long maximumNumberOfSubItems;
@property(readonly, nonatomic) _Bool requiresLayoutForSubitemCount;
- (void)notifyDidCommit;	// IMP=0x000000000019fb88
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;	// IMP=0x000000000019f8c5
- (id)editItemEventToDetach;	// IMP=0x000000000019f8b7
- (_Bool)editItemViewControllerShouldShowDetachAlert;	// IMP=0x000000000019f8af
- (_Bool)editItemViewControllerSave:(id)arg1;	// IMP=0x000000000019f8a7
- (void)refreshCopiedEvents;	// IMP=0x000000000019f8a1
- (_Bool)isPrivateEvent;	// IMP=0x000000000019f884
- (_Bool)isReadOnlyDelegateCalendar;	// IMP=0x000000000019f7ab
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;	// IMP=0x000000000019f76d
- (void)notifySubitemDidSave:(unsigned long long)arg1;	// IMP=0x000000000019f6db
- (void)notifyDidEndEditing;	// IMP=0x000000000019f657
- (void)notifyDidStartEditing;	// IMP=0x000000000019f5d3
- (void)eventViewController:(id)arg1 didSelectReadOnlySubitem:(unsigned long long)arg2;	// IMP=0x000000000019f5cd
- (void)eventViewControllerDidTapInfoButton:(id)arg1;	// IMP=0x000000000019f47f
- (void)eventViewController:(id)arg1 didSelectSubitem:(unsigned long long)arg2;	// IMP=0x000000000019f32b
- (_Bool)eventViewController:(id)arg1 shouldSelectSubitem:(unsigned long long)arg2;	// IMP=0x000000000019f323
- (void)eventViewController:(id)arg1 didUnhighlightSubitem:(unsigned long long)arg2;	// IMP=0x000000000019f31d
- (void)eventViewController:(id)arg1 didHighlightSubitem:(unsigned long long)arg2;	// IMP=0x000000000019f317
- (id)infoDetailViewControllerWithFrame:(struct CGRect)arg1;	// IMP=0x000000000019f30f
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;	// IMP=0x000000000019f307
- (_Bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1;	// IMP=0x000000000019f2be
- (id)cellForSubitemAtIndex:(unsigned long long)arg1 withTraitCollection:(id)arg2;	// IMP=0x000000000019f2ac
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000019f2a4
- (void)layoutCellsForWidth:(double)arg1 position:(int)arg2;	// IMP=0x000000000019f1fa
- (unsigned long long)numberOfSubitems;	// IMP=0x000000000019f1ef
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 forceUpdate:(_Bool)arg3;	// IMP=0x000000000019f1de
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;	// IMP=0x000000000019f1c7
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;	// IMP=0x000000000019f1bf
- (void)reset;	// IMP=0x000000000019f1b9
- (void)setEvent:(id)arg1 store:(id)arg2;	// IMP=0x000000000019f124
- (void)dealloc;	// IMP=0x000000000019f0e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
