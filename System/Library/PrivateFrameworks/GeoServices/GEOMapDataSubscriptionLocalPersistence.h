//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOTileDB, NSString;

__attribute__((visibility("hidden")))
@interface GEOMapDataSubscriptionLocalPersistence : NSObject
{
    GEOTileDB *_db;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000013d6f8e
- (void)removeSubscriptionWithIdentifier:(id)arg1 callbackQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000013d6ec0
- (void)fetchSubscriptionsWithIdentifiers:(id)arg1 callbackQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000013d6eaa
- (void)addSubscriptionWithIdentifier:(id)arg1 auditToken:(id)arg2 dataTypes:(unsigned long long)arg3 policy:(long long)arg4 region:(id)arg5 expirationDate:(id)arg6 callbackQueue:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x00000000013d6c23
- (id)initWithTileDB:(id)arg1;	// IMP=0x00000000013d6ba5
- (id)init;	// IMP=0x00000000013d6b7b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
