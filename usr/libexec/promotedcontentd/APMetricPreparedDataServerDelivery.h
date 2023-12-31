//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APBackoffTimer, APEncryptedFileManager, APMetricHTTPDelivery, APSequentialProcessor, NSEnumerator;
@protocol APMetricStoringEC, OS_dispatch_queue;

@interface APMetricPreparedDataServerDelivery : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <APMetricStoringEC> _storage;	// 16 = 0x10
    APMetricHTTPDelivery *_httpDelivery;	// 24 = 0x18
    NSEnumerator *_files;	// 32 = 0x20
    APBackoffTimer *_backoffTimer;	// 40 = 0x28
    APSequentialProcessor *_processor;	// 48 = 0x30
    APEncryptedFileManager *_metricsFileManager;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000cdd35
- (void)setMetricsFileManager:(id)arg1;	// IMP=0x00100000000cdd24
- (id)metricsFileManager;	// IMP=0x00100000000cdd1a
@property(retain, nonatomic) APSequentialProcessor *processor; // @synthesize processor=_processor;
@property(retain, nonatomic) APBackoffTimer *backoffTimer; // @synthesize backoffTimer=_backoffTimer;
@property(retain, nonatomic) NSEnumerator *files; // @synthesize files=_files;
@property(nonatomic) __weak APMetricHTTPDelivery *httpDelivery; // @synthesize httpDelivery=_httpDelivery;
@property(nonatomic) __weak id <APMetricStoringEC> storage; // @synthesize storage=_storage;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_backoffTimerReset;	// IMP=0x00100000000cdc0b
- (void)_backoffTimerScheduleNextLevel;	// IMP=0x00100000000cdb02
- (_Bool)_sendRequest:(id)arg1;	// IMP=0x00100000000cd8e2
- (_Bool)_uploadFile:(id)arg1;	// IMP=0x00100000000cd68d
- (void)_continueProcessing;	// IMP=0x00100000000cd58b
- (void)backoffTimerFired;	// IMP=0x00100000000cd579

@end

