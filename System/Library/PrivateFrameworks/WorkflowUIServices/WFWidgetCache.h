//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, WFWidgetWorkflowRequestQueue;
@protocol OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface WFWidgetCache : NSObject
{
    NSMutableDictionary *_resultsByIdentifier;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    WFWidgetWorkflowRequestQueue *_requestQueue;	// 24 = 0x18
    NSObject<OS_os_log> *_log;	// 32 = 0x20
}

+ (id)sharedCache;	// IMP=0x0010000000025ed3
- (void).cxx_destruct;	// IMP=0x0000000000025324
@property(readonly, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(readonly, nonatomic) WFWidgetWorkflowRequestQueue *requestQueue; // @synthesize requestQueue=_requestQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSMutableDictionary *resultsByIdentifier; // @synthesize resultsByIdentifier=_resultsByIdentifier;
- (id)init;	// IMP=0x00000000000251dd
- (void)observableResultDidChange:(id)arg1;	// IMP=0x000000000002512c
- (void)queue_notifyObserversOfChange:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x0000000000024e60
- (void)queue_storeAndNotifyWithResult:(id)arg1 forIdentifier:(id)arg2 resultsLimit:(unsigned long long)arg3;	// IMP=0x00000000000248a2
- (void)queue_getWidgetWorkflowsInCollectionWithIdentifier:(id)arg1 limit:(unsigned long long)arg2;	// IMP=0x000000000002472f
- (void)queue_getWidgetWorkflowWithIdentifier:(id)arg1;	// IMP=0x00000000000245c8
- (void)addDefaultShortcutsIfNecessary:(CDUnknownBlockType)arg1;	// IMP=0x00000000000244af
- (id)widgetWorkflowsInCollectionWithIdentifier:(id)arg1 limit:(unsigned long long)arg2;	// IMP=0x0000000000024228
- (id)widgetWorkflowWithIdentifier:(id)arg1;	// IMP=0x0000000000023fc5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
