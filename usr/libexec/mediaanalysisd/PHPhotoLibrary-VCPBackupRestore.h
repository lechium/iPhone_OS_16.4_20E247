//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHPhotoLibrary.h>

@interface PHPhotoLibrary (VCPBackupRestore)
- (id)vcp_mediaAnalysisBackupFilepath;	// IMP=0x0010000000060eeb
- (id)vcp_mediaAnalysisBackupDirectory;	// IMP=0x0010000000060e8b
- (_Bool)vcp_openAndWaitWithUpgrade:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00100000000d089c
- (int)_bumpFaceProcessingVersionIfNeededWithError:(id *)arg1;	// IMP=0x00100000000d078b
- (int)vcp_bumpFaceProcessingToVersion:(int)arg1 withError:(id *)arg2;	// IMP=0x00100000000d057d
- (int)_cacheCurrentFaceProgress;	// IMP=0x00100000000d045b
- (int)_resetChangeTokenAndProcessingStatusForFaceProcessing;	// IMP=0x00100000000d0229
@end
