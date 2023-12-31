//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCSyncContext, PQLResultSet;

__attribute__((visibility("hidden")))
@interface BRCFSDownloaderBatchEnumerator : NSObject
{
    long long _now;	// 8 = 0x8
    long long *_retryQueueKick;	// 16 = 0x10
    PQLResultSet *_rs;	// 24 = 0x18
    BRCSyncContext *_syncContext;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000008d10f
@property(readonly, nonatomic) BRCSyncContext *syncContext; // @synthesize syncContext=_syncContext;
- (void)close;	// IMP=0x000000000008d0ef
- (long long)transferQOS;	// IMP=0x000000000008d0d4
- (long long)transferSize;	// IMP=0x000000000008d0b9
- (long long)completedUnitCount;	// IMP=0x000000000008d09e
- (id)stageID;	// IMP=0x000000000008d083
- (id)etag;	// IMP=0x000000000008d068
- (id)nextDocumentItem;	// IMP=0x000000000008ce94
- (id)initWithSyncContext:(id)arg1 kind:(int)arg2 now:(long long)arg3 retryQueueKick:(long long *)arg4;	// IMP=0x000000000008cd89

@end

