//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SPPowerLog : NSObject
{
    NSMutableDictionary *_eventsByBundleID;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_logUpdateTimer;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_logQueue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0040000000002c5f
- (void).cxx_destruct;	// IMP=0x0020000000002fb9
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *logQueue; // @synthesize logQueue=_logQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *logUpdateTimer; // @synthesize logUpdateTimer=_logUpdateTimer;
@property(retain) NSMutableDictionary *eventsByBundleID; // @synthesize eventsByBundleID=_eventsByBundleID;
- (void)updatePowerLogs;	// IMP=0x0010000000002f5a
- (id)newEventFromEvent:(id)arg1 usingLogEvent:(id)arg2;	// IMP=0x0010000000002d7a
- (void)logEvent:(id)arg1 withName:(id)arg2;	// IMP=0x0010000000002d74
- (void)startLogUpdateTimer;	// IMP=0x0010000000002d6e
- (void)cancelLogUpdateTimer;	// IMP=0x0010000000002d38
- (id)init;	// IMP=0x0010000000002cb4

@end
