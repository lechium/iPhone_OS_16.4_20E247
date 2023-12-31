//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKEventMetric, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface BRCEventMetric : NSObject
{
    _Bool _isCKMetric;	// 8 = 0x8
    NSString *_eventName;	// 16 = 0x10
    NSDate *_startTime;	// 24 = 0x18
    NSDate *_endTime;	// 32 = 0x20
    CKEventMetric *_associatedCKEventMetricIfAvailable;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000053711
@property(readonly, nonatomic) CKEventMetric *associatedCKEventMetricIfAvailable; // @synthesize associatedCKEventMetricIfAvailable=_associatedCKEventMetricIfAvailable;
@property(nonatomic) _Bool isCKMetric; // @synthesize isCKMetric=_isCKMetric;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (void)associateWithCompletedOperation:(id)arg1;	// IMP=0x00000000000535f7
- (id)associatedAppTelemetryEvent;	// IMP=0x00000000000535ef
- (id)additionalPayload;	// IMP=0x00000000000535e2
- (id)subDescription;	// IMP=0x00000000000535d5
- (double)duration;	// IMP=0x0000000000053552
- (id)description;	// IMP=0x00000000000534be
- (id)initWithEventName:(id)arg1;	// IMP=0x000000000005344f

@end

