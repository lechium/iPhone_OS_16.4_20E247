//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AppStoreService : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000c0a6d
- (void)reloadWidgetOnConnectivityToEndpoint:(id)arg1 parameters:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c09e7
- (void)removeBadgeMetricsForBadgeIDs:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c07bd
- (void)removeBadgeIDs:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c0593
- (void)removeAllBadgeIDsWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c03d2
- (void)badgeIDCountWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c0215
- (void)allBadgeMetricsWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bffca
- (void)allBadgeIDsWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bfdc8
- (void)addBadgeIDs:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000bfbdf
- (void)launchAppStoreWithURL:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000bf874
- (id)init;	// IMP=0x00100000000bf798

@end
