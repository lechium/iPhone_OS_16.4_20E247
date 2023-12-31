//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ADNotifyAndPushContextCollector : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_completionsByPID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000025c280
- (void)_invokeAllCompletionsWithError;	// IMP=0x001000000025c082
- (void)_invokeCompletionWithContext:(id)arg1 forPID:(int)arg2;	// IMP=0x001000000025bf99
- (void)_addCompletion:(CDUnknownBlockType)arg1 forPID:(int)arg2;	// IMP=0x001000000025bf1d
- (_Bool)_hasCompletionForPID:(int)arg1;	// IMP=0x001000000025beac
- (void)_getContextForAppInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000025bc92
- (void)_setContext:(id)arg1 forPID:(int)arg2;	// IMP=0x001000000025bbdb
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000025bbd3
- (void)getContextForAppInfos:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000025b5d3
- (id)init;	// IMP=0x001000000025b538

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

