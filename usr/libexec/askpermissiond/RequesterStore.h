//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, RequestStore;
@protocol OS_dispatch_queue;

@interface RequesterStore : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSMutableDictionary *_itemIdentifierStore;	// 16 = 0x10
    NSMutableDictionary *_requestIdentifierStore;	// 24 = 0x18
    NSMutableDictionary *_requestItems;	// 32 = 0x20
    RequestStore *_requestStore;	// 40 = 0x28
}

+ (id)sharedStore;	// IMP=0x00200000000019df
- (void).cxx_destruct;	// IMP=0x0020000000003afc
@property(readonly, nonatomic) RequestStore *requestStore; // @synthesize requestStore=_requestStore;
@property(readonly, nonatomic) NSMutableDictionary *requestItems; // @synthesize requestItems=_requestItems;
@property(readonly, nonatomic) NSMutableDictionary *requestIdentifierStore; // @synthesize requestIdentifierStore=_requestIdentifierStore;
@property(readonly, nonatomic) NSMutableDictionary *itemIdentifierStore; // @synthesize itemIdentifierStore=_itemIdentifierStore;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
- (id)_migrationItems;	// IMP=0x00100000000035d9
- (void)_loadItemsIntoMemory;	// IMP=0x00100000000030b1
- (void)_saveChanges;	// IMP=0x0010000000002e0b
- (id)_requesterRequestWithStoreItem:(id)arg1;	// IMP=0x0010000000002dbe
- (void)storeRequest:(id)arg1;	// IMP=0x0010000000002c20
- (id)requestWithIdentifier:(id)arg1;	// IMP=0x00100000000027f0
- (id)requestIdentifierWithItemIdentifier:(id)arg1;	// IMP=0x0010000000002480
- (_Bool)containsRequestWithIdentifier:(id)arg1;	// IMP=0x0010000000002130
- (void)clearRequests;	// IMP=0x0010000000001f44
- (void)clearExpiredRequests;	// IMP=0x0010000000001a34
- (id)init;	// IMP=0x0010000000001893

@end

