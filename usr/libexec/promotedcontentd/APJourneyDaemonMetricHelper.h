//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APContentData, NSString;

@interface APJourneyDaemonMetricHelper : NSObject
{
    APContentData *_contentData;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000d5d77
@property(readonly, nonatomic) APContentData *contentData; // @synthesize contentData=_contentData;
- (void)requestFailedForBundleID:(id)arg1 withCode:(long long)arg2 requestID:(id)arg3 placement:(unsigned long long)arg4 placementType:(long long)arg5;	// IMP=0x00100000000d5bf2
- (void)requestFailedForBundleID:(id)arg1 withCode:(long long)arg2 requestID:(id)arg3 placementType:(long long)arg4;	// IMP=0x00100000000d5bd0
- (void)downloaded;	// IMP=0x00100000000d5b9d
- (void)conversionForBundleID:(id)arg1 source:(id)arg2 conversionValue:(short)arg3;	// IMP=0x00100000000d5a77
- (void)discardedForBundleID:(id)arg1 withCode:(long long)arg2;	// IMP=0x00100000000d597c
- (void)receivedForBundleID:(id)arg1 adServer:(long long)arg2 elapsedTime:(double)arg3 relayValues:(id)arg4;	// IMP=0x00100000000d5784
- (void)receivedForBundleID:(id)arg1 elapsedTime:(double)arg2 relayValues:(id)arg3;	// IMP=0x00100000000d5768
- (void);	// IMP=0x00100000000d554a
- (void)recordMetric:(long long)arg1 forPurpose:(long long)arg2 bundleID:(id)arg3 properties:(id)arg4 internalProperties:(id)arg5 options:(long long)arg6;	// IMP=0x00100000000d5527
- (void)recordMetric:(long long)arg1 forPurpose:(long long)arg2 properties:(id)arg3 internalProperties:(id)arg4 options:(long long)arg5;	// IMP=0x00100000000d5503
- (id)initWithContentData:(id)arg1;	// IMP=0x00100000000d5498

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

