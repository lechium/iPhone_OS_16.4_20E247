//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface FRAppCacheSnapshotter : NSObject
{
    NSDate *_existingSnapshotCreationDate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000db421
- (id)creationDateOFURL:(id)arg1;	// IMP=0x00100000000db32f
- (id)snapshotURLForCachesURL:(id)arg1;	// IMP=0x00100000000db313
- (id)URLWithSuffix:(id)arg1 baseURL:(id)arg2;	// IMP=0x00100000000db236
- (id)tempRestoreURL;	// IMP=0x00100000000db1e2
- (id)snapshotURL;	// IMP=0x00100000000db195
- (void)copyURL:(id)arg1 toURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000daf74
@property(readonly, nonatomic) NSDate *existingSnapshotCreationDate; // @synthesize existingSnapshotCreationDate=_existingSnapshotCreationDate;
@property(readonly, nonatomic) _Bool snapshotPreparedAndWaitingForRestoration;
- (void)finalizeRestoreOfCachesDirectory;	// IMP=0x00100000000dad3c
- (void)prepareToRestoreSnapshotAndKillApp;	// IMP=0x00100000000daade
- (void)removeExistingSnapshotWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000daa12
- (void)snapshotWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000da7b0

@end
