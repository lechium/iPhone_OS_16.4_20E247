//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHAssetResourceManager.h>

@interface PHAssetResourceManager (FileBasedDownload)
+ (void)vcp_flushFileCache;	// IMP=0x001000000001497a
+ (void)vcp_flushResourceURL:(id)arg1;	// IMP=0x0010000000014782
+ (int)vcp_requestFileURLForAssetResource:(id)arg1 taskID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000013e89
+ (void)vcp_createFileCacheDirectoryIfNeeded;	// IMP=0x0010000000013b31
+ (id);	// IMP=0x0010000000013ae3
@end
