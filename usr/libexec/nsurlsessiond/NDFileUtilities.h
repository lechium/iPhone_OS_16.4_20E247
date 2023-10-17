//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NDFileUtilities : NSObject
{
}

+ (_Bool)itemShouldBePurged:(id)arg1;	// IMP=0x004000000003a38e
+ (void)markItemAsPurged:(id)arg1;	// IMP=0x001000000003a342
+ (id)fetchStreamingZipModificationDate:(id)arg1;	// IMP=0x001000000003a2bc
+ (void)removeStreamingZipModificationDate:(id)arg1;	// IMP=0x001000000003a25a
+ (void)updateStreamingZipModificationDate:(id)arg1;	// IMP=0x001000000003a1c4
+ (void)setDaemonWorkState:(_Bool)arg1;	// IMP=0x001000000003a034
+ (id)defaultDownloadDirectoryForBundleID:(id)arg1;	// IMP=0x0010000000039f96
+ (id)defaultDownloadDirectoryContainer;	// IMP=0x0010000000039d32
+ (void)createDirectoryAtURL:(id)arg1;	// IMP=0x0010000000039bb4
+ (void)createDirectoryAtPath:(id)arg1;	// IMP=0x0010000000039a36
+ (_Bool)createDataVaultDirectoryAtPath:(id)arg1;	// IMP=0x0010000000039587
+ (void)removeItemAtURL:(id)arg1;	// IMP=0x001000000003940f
+ (void)removeItemAtPath:(id)arg1;	// IMP=0x0010000000039297
+ (id)nsurlsessiondLaunchdPath;	// IMP=0x0010000000039225
+ (id)sessionPath:(id)arg1 forBundleID:(id)arg2;	// IMP=0x0010000000039156
+ (id)bundleManagerPath:(id)arg1;	// IMP=0x001000000003908d
+ (id)nsurlsessiondPath;	// IMP=0x0010000000038fdf

@end
