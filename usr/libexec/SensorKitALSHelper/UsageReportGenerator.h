//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, RDLaunchEvents, SRCHClient, SRSensorWriter;
@protocol OS_dispatch_queue, _DKKnowledgeQuerying;

@interface UsageReportGenerator : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    SRCHClient *_chClient;	// 16 = 0x10
    RDLaunchEvents *_launchEvents;	// 24 = 0x18
    id <_DKKnowledgeQuerying> _knowledgeStore;	// 32 = 0x20
    NSString *_chVersion;	// 40 = 0x28
    SRSensorWriter *_deviceUsageReportWriter;	// 48 = 0x30
    NSMutableSet *_eventsPendingCategories;	// 56 = 0x38
    NSMutableSet *_eventsPendingSupplementalCategories;	// 64 = 0x40
    NSMutableDictionary *_notificationBundleIdsByNotificationId;	// 72 = 0x48
    SRSensorWriter *_messagesUsageReportWriter;	// 80 = 0x50
    SRSensorWriter *_phoneUsageReportWriter;	// 88 = 0x58
    NSMutableDictionary *_deviceUsageReports;	// 96 = 0x60
    NSMutableDictionary *_messagesUsageReports;	// 104 = 0x68
    NSMutableDictionary *_phoneUsageReports;	// 112 = 0x70
    NSMutableDictionary *_appUsesByBundleId;	// 120 = 0x78
}

+ (void)initialize;	// IMP=0x002000000000938f
- (void)sensorWriterDidStopMonitoring:(id)arg1;	// IMP=0x002000000001164b
- (void)sensorWriterWillStartMonitoring:(id)arg1;	// IMP=0x00100000000115c2
- (void)launchEventRunActivity:(id)arg1;	// IMP=0x0010000000010b28
- (double)relativeAppStartTimeForReport:(id)arg1 eventStartTime:(double)arg2;	// IMP=0x001000000000fe6a
- (void)queryUsageDuringInterval:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d11f
- (void)dealloc;	// IMP=0x001000000000975f
- (id)initWithLaunchEvents:(id)arg1 knowledgeStore:(id)arg2 usageReportWriter:(id)arg3 messagesUsageReportWriter:(id)arg4 phoneUsageReportWriter:(id)arg5 chClient:(id)arg6 queue:(id)arg7;	// IMP=0x00100000000095e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
