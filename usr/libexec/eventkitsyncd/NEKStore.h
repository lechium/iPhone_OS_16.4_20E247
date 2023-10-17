//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NEKEnvironment;
@protocol NEKChangeObserver;

@interface NEKStore : NSObject
{
    NEKEnvironment *_environment;	// 8 = 0x8
    id <NEKChangeObserver> _changeObserver;	// 16 = 0x10
}

+ (id)storeForReminderWithEnvironment:(id)arg1;	// IMP=0x0040000000009fbc
+ (id)storeForEventWithEnvironment:(id)arg1;	// IMP=0x0010000000009f6f
- (void).cxx_destruct;	// IMP=0x002000000000a06c
@property(retain, nonatomic) id <NEKChangeObserver> changeObserver; // @synthesize changeObserver=_changeObserver;
- (void)deleteObjectByID:(id)arg1 store:(id)arg2;	// IMP=0x001000000000a04b
- (void)deleteItem:(id)arg1 store:(id)arg2;	// IMP=0x001000000000a045
- (void)updateICS:(id)arg1 store:(id)arg2 session:(id)arg3;	// IMP=0x001000000000a03f
- (void)updateCalendar:(id)arg1 store:(id)arg2;	// IMP=0x001000000000a039
- (void)updateSource:(id)arg1 store:(id)arg2;	// IMP=0x001000000000a033
- (void)removeAllItems;	// IMP=0x001000000000a02d
- (void)saveEventStore:(id)arg1;	// IMP=0x001000000000a027
- (id)freshEventStoreFor:(id)arg1;	// IMP=0x001000000000a01f
- (id)environment;	// IMP=0x001000000000a009
- (id)initWithEnvironment:(id)arg1;	// IMP=0x0010000000009f0b
- (id)init;	// IMP=0x0010000000009efd

@end
