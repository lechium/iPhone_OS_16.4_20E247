//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSDate;

@interface _TtC15PromotedContent19MetricEventsTracker : _TtCs12_SwiftObject
{
    MISSING_TYPE *placeholderPlacedTimestamp;	// 3 = 0x3
    MISSING_TYPE *replacedPlaceholderTimestamp;	// 52 = 0x34
    MISSING_TYPE *adRequestTimestamp;	// 101777541 = 0x6110085
    MISSING_TYPE *adResponseTimestamp;	// 25 = 0x19
    MISSING_TYPE *prerollAdRequestTimestamp;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *prerollAdResponseTimestamp;	// 0 = 0x0
    MISSING_TYPE *analyticsEventName;	// 0 = 0x0
    MISSING_TYPE *intervalKey;	// 0 = 0x0
    MISSING_TYPE *intervalTypeKey;	// 0 = 0x0
    MISSING_TYPE *networkTypeKey;	// 0 = 0x0
    MISSING_TYPE *placementTypeKey;	// 0 = 0x0
    MISSING_TYPE *failedKey;	// 0 = 0x0
}

- (void)sendAnalyticsEventFor:(long long)arg1 interval:(double)arg2 networkType:(unsigned long long)arg3 placementType:(unsigned long long)arg4 failed:(_Bool)arg5;	// IMP=0x0000000000008b10
- (void)didReceivePrerollVideoResponse;	// IMP=0x00000000000087b0
- (void)didRequestPrerollVideo;	// IMP=0x0000000000008790
- (void)didReceiveAdResponse;	// IMP=0x0000000000008770
- (void)didReplacePlaceholder;	// IMP=0x0000000000008750
- (void)didPlacePlaceholder;	// IMP=0x0000000000008730
@property(nonatomic, copy) NSDate *prerollAdResponseTimestamp;
@property(nonatomic, copy) NSDate *prerollAdRequestTimestamp;
@property(nonatomic, copy) NSDate *adResponseTimestamp;
@property(nonatomic, copy) NSDate *replacedPlaceholderTimestamp;
@property(nonatomic, copy) NSDate *placeholderPlacedTimestamp;

@end

