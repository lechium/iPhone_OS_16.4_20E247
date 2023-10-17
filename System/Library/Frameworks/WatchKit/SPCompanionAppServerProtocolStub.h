//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SPCompanionAppServerProtocolStub : NSObject
{
}

- (void)extensionWithIdentifier:(id)arg1 gotUnknownInterfaceController:(id)arg2;	// IMP=0x000000000000c2e6
- (void)requestTimingData:(id)arg1 timingMetaData:(id)arg2;	// IMP=0x000000000000c2e0
- (void)fetchNotificationForNotificationID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c2da
- (void)sendData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000000c2d4
- (void)sendData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3;	// IMP=0x000000000000c2ce
- (void)sendCacheRequest:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000000c2c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
