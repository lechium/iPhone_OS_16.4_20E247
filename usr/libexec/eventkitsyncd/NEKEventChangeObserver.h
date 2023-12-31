//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NEKEventStore, NSObject;
@protocol OS_dispatch_queue;

@interface NEKEventChangeObserver
{
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    _Bool _sawSeqnoFailure;	// 40 = 0x28
    int _lastSequenceNumber;	// 44 = 0x2c
    NEKEventStore *_weakEventDatabaseController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000066e61
@property(nonatomic) __weak NEKEventStore *weakEventDatabaseController; // @synthesize weakEventDatabaseController=_weakEventDatabaseController;
- (void)_sendChangesIfAvailable;	// IMP=0x0010000000066e22
- (void)setPreviousDefaultEventCalendar:(id)arg1;	// IMP=0x0010000000066d71
- (void)setPreviousDefaultTaskCalendar:(id)arg1;	// IMP=0x0010000000066bfd
- (id)previousDefaultEventCalendar;	// IMP=0x0010000000066b54
- (id)previousDefaultTaskCalendar;	// IMP=0x00100000000669ea
- (void)setLastSequenceNumber:(int)arg1;	// IMP=0x00100000000668cd
- (int)lastSequenceNumber;	// IMP=0x001000000006682b
- (id)_sequenceKey;	// IMP=0x001000000006681e
- (void)blindChangeNumberAdvance:(id)arg1;	// IMP=0x001000000006680c
- (void)restartTrackingChanges;	// IMP=0x0010000000066698
- (void)_fetchChangesInto:(id)arg1 from:(int)arg2 inside:(id)arg3;	// IMP=0x0010000000065605
- (id)fetchEventChangeSet;	// IMP=0x00100000000653e4
- (_Bool)allRemindersInto:(id)arg1 filter:(CDUnknownBlockType)arg2 window:(id)arg3;	// IMP=0x0010000000064ede
- (_Bool)allEventsInto:(id)arg1 filter:(CDUnknownBlockType)arg2 window:(id)arg3;	// IMP=0x0010000000064893
- (id)_masterEventsToSync;	// IMP=0x00100000000647b6
- (_Bool)allCalendarsInto:(id)arg1;	// IMP=0x0010000000063e5f
- (_Bool)allSourcesInto:(id)arg1;	// IMP=0x0010000000063756
- (void)notifyForDatabaseUpdates;	// IMP=0x001000000006370a
- (void)notifyForDatabaseUpdatesIfNeeded;	// IMP=0x00100000000636f8
- (void)databaseDidChange;	// IMP=0x0010000000063535
- (void)stopObservingChanges;	// IMP=0x0010000000063489
- (void)beginObservingChanges;	// IMP=0x001000000006338f
- (void)_defaultCalendarChanged:(id)arg1;	// IMP=0x001000000006331a
- (id)_eventCalendarKey;	// IMP=0x001000000006330d
- (id)_taskCalendarKey;	// IMP=0x0010000000063300
- (id)eventDatabaseController;	// IMP=0x00100000000632ee
- (void)dealloc;	// IMP=0x00100000000632b0
- (id)initWithQueue:(id)arg1 environment:(id)arg2;	// IMP=0x0010000000063206
- (id)initWithEnvironment:(id)arg1;	// IMP=0x00100000000631f8

@end

