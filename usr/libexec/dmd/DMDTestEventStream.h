//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface DMDTestEventStream : NSObject
{
}

- (id)_testEvent;	// IMP=0x00200000000839e0
- (id)eventStatusRollupSinceStartDate:(id)arg1;	// IMP=0x00100000000839ce
- (void)startNotificationStreamWithEventsHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000008390e
- (void)updateEvent:(id)arg1;	// IMP=0x0010000000083908
@property(readonly, copy, nonatomic) NSString *eventType;

@end
