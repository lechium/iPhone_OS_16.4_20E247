//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface ADFlowServiceListener : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000113e1f
- (oneway void)getPersonalSettingsForSharedUserID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000113b67
- (oneway void)fetchSiriKitApplicationsWithNotificationPreviewRestrictionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000113af1
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000001137c3
- (void)setupListener;	// IMP=0x00100000001136d9
- (id)init;	// IMP=0x0010000000113630

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
