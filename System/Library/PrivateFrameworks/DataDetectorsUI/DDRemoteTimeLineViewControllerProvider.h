//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "DDRemoteActionViewControllerProvider.h"

@class EKEvent, EKEventStore, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface DDRemoteTimeLineViewControllerProvider : DDRemoteActionViewControllerProvider
{
    NSArray *_events;	// 8 = 0x8
    EKEvent *_event;	// 16 = 0x10
    EKEventStore *_store;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000d790
@property(retain) EKEventStore *store; // @synthesize store=_store;
@property(retain) EKEvent *event; // @synthesize event=_event;
@property(retain) NSArray *events; // @synthesize events=_events;
- (void)dayViewControllerDidRespondToApplicationDidBecomeActiveStateChange:(id)arg1;	// IMP=0x000000000000d715
- (void)updateSelectedOccurrenceView;	// IMP=0x000000000000d70f
- (void)dayViewControllerDidFinishPinchingDayView:(id)arg1;	// IMP=0x000000000000d709
- (void)dayViewControllerIsPinchingDayView:(id)arg1;	// IMP=0x000000000000d703
- (void)dayViewcontrollerDidBeginMovingEventWithGesture:(id)arg1;	// IMP=0x000000000000d6fd
- (_Bool)dayViewControllerShouldShowDetachDialogOnGestureDraggingEnd:(id)arg1;	// IMP=0x000000000000d6f5
- (_Bool)dayviewControllerShouldAllowSwipeToChangeDays:(id)arg1;	// IMP=0x000000000000d6ed
- (void)dayViewController:(id)arg1 handleGestureCommittingOccurrence:(id)arg2;	// IMP=0x000000000000d6e7
- (_Bool)delegateWantsToHandleDayViewController:(id)arg1 gestureCommittingOccurrence:(id)arg2;	// IMP=0x000000000000d6df
- (void)dayViewControllerDidChangeDisplayedOccurrences:(id)arg1;	// IMP=0x000000000000d6d9
- (void)dayViewControllerDidReloadData:(id)arg1;	// IMP=0x000000000000d665
- (void)dayViewControllerDidTapEmptySpace:(id)arg1;	// IMP=0x000000000000d65f
- (_Bool)dayViewControllerShouldAllowLongPress:(id)arg1;	// IMP=0x000000000000d657
- (void)dayViewController:(id)arg1 awaitsDeletingOccurrence:(id)arg2;	// IMP=0x000000000000d651
- (void)dayViewController:(id)arg1 awaitsRefreshingOccurrence:(id)arg2;	// IMP=0x000000000000d64b
- (void)dayViewController:(id)arg1 beginEditingOccurrence:(id)arg2;	// IMP=0x000000000000d645
- (id)dayViewController:(id)arg1 createEventAtDate:(id)arg2 allDay:(_Bool)arg3;	// IMP=0x000000000000d63d
- (void)dayViewController:(id)arg1 didChangeDisplayDate:(id)arg2;	// IMP=0x000000000000d637
- (void)dayViewController:(id)arg1 didSelectEvent:(id)arg2;	// IMP=0x000000000000d631
- (void)dayViewController:(id)arg1 didSelectEvent:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000000d62b
- (_Bool)dayViewControllerShouldRespondToApplicationDidBecomeActiveStateChange:(id)arg1;	// IMP=0x000000000000d623
- (id)dayViewController:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3;	// IMP=0x000000000000cf8f
- (void)createViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000c70f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

