//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSTimer, WebBookmarkCollection, WebBookmarksXPCListener;

@interface SafariFetcherServer : NSObject
{
    WebBookmarksXPCListener *_listener;	// 8 = 0x8
    NSMutableArray *_connections;	// 16 = 0x10
    NSMutableArray *_readingListReplyConnections;	// 24 = 0x18
    NSTimer *_readingListFetcherStartTimer;	// 32 = 0x20
    WebBookmarkCollection *_collection;	// 40 = 0x28
}

+ (id)sharedServer;	// IMP=0x002000000000953f
- (void).cxx_destruct;	// IMP=0x002000000000a050
- (void)_connection:(id)arg1 clearReadingListArchiveWithMessage:(id)arg2;	// IMP=0x0010000000009fa0
- (void)_clearAllReadingListArchivesForConnection:(id)arg1;	// IMP=0x0010000000009f5b
- (void)deliverReadingListDidFinishFetching;	// IMP=0x0010000000009dd3
- (void)deliverReadingListFetchingProgress:(double)arg1;	// IMP=0x0010000000009c25
- (void)deliverReadingListFetchingDidStopForItemWithUUID:(id)arg1;	// IMP=0x0010000000009a5d
- (void)deliverReadingListFetchingDidStartForItemWithUUID:(id)arg1;	// IMP=0x0010000000009895
- (void)_unregisterConnectionForReadingListFetcherUpdates:(id)arg1;	// IMP=0x001000000000987f
- (void)_registerConnectionForReadingListFetcherUpdates:(id)arg1;	// IMP=0x001000000000970b
- (void);	// IMP=0x001000000000969e
- (void)_startReadingListFetcherNow;	// IMP=0x0010000000009618
- (void)_clearReadingListFetcherStartTimer;	// IMP=0x00100000000095da
- (void)connection:(id)arg1 didCloseWithError:(id)arg2;	// IMP=0x00100000000095c4
- (void)dealloc;	// IMP=0x0010000000009501
- (id)init;	// IMP=0x0010000000008f93

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
