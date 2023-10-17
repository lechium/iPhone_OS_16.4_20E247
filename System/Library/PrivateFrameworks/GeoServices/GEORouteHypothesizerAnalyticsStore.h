//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface GEORouteHypothesizerAnalyticsStore : NSObject
{
    double _observedEarlyDeltaFromRequiredTimeToLeave;	// 8 = 0x8
    double _observedLateDeltaFromRequiredTimeToLeave;	// 16 = 0x10
    unsigned long long _hypothesizerRerouteCount;	// 24 = 0x18
    unsigned long long _etaUpdatesAfterEventStart;	// 32 = 0x20
    _Bool _etaUpdatesWereReported;	// 40 = 0x28
    unsigned long long _hypothesisCount;	// 48 = 0x30
    _Bool _stopped;	// 56 = 0x38
    unsigned long long _uiNotificationType;	// 64 = 0x40
    NSDate *_lastGenerationDate;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000001401654
- (void).cxx_destruct;	// IMP=0x0000000001401682
@property(nonatomic) _Bool etaUpdatesWereReported; // @synthesize etaUpdatesWereReported=_etaUpdatesWereReported;
@property(nonatomic) unsigned long long etaUpdatesAfterEventStart; // @synthesize etaUpdatesAfterEventStart=_etaUpdatesAfterEventStart;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000001401329
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000140110e
- (void)didShowUI:(unsigned long long)arg1;	// IMP=0x0000000001401104
- (void)didStopHypothesizing;	// IMP=0x000000000140105a
- (void)didGenerateHypothesis;	// IMP=0x0000000001400fad
- (void)didArriveWithExpectedArrivalTime:(id)arg1;	// IMP=0x0000000001400e09
- (void)didStopMoving;	// IMP=0x0000000001400d5e
- (void)didStartMovingWithExpectedDepartureTime:(id)arg1;	// IMP=0x0000000001400cae
- (void)didReroute;	// IMP=0x0000000001400c9e
- (void)dealloc;	// IMP=0x0000000001400c5b
- (id)init;	// IMP=0x0000000001400b88

@end
