//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC18UsageTrackingAgent23DeviceActivityCollector : NSObject
{
    MISSING_TYPE *backgroundActivity;	// 8 = 0x8
    MISSING_TYPE *dataSource;	// 24 = 0x18
    MISSING_TYPE *dataStore;	// 64 = 0x40
}

+ (void)deleteLocalActivity;	// IMP=0x0020000000027480
+ (void)refreshLocalActivity;	// IMP=0x0010000000025d10
+ (void)startCollecting;	// IMP=0x0010000000025950
- (void).cxx_destruct;	// IMP=0x00400000000277e0
- (void)localeDidChangeWithNotification:(id)arg1;	// IMP=0x0010000000025810
- (id)init;	// IMP=0x00100000000257f0

@end

