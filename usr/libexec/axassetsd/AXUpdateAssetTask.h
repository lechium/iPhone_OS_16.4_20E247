//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AXUpdateAssetTask
{
}

- (void)assetController:(id)arg1 didFinishDownloadingAsset:(id)arg2 wasSuccessful:(_Bool)arg3 error:(id)arg4 hasRemainingDownloads:(_Bool)arg5;	// IMP=0x004000000001cc00
- (void)assetController:(id)arg1 asset:(id)arg2 downloadProgressTotalWritten:(long long)arg3 totalExpected:(long long)arg4 isStalled:(_Bool)arg5 expectedTimeRemaining:(double)arg6;	// IMP=0x001000000001c9c0
- (void)assetController:(id)arg1 didFinishPurgingAssets:(id)arg2 wasSuccessful:(_Bool)arg3 error:(id)arg4;	// IMP=0x001000000001c840
- (void)assetController:(id)arg1 didFinishRefreshingAssets:(id)arg2 wasSuccessful:(_Bool)arg3 error:(id)arg4;	// IMP=0x001000000001c660
- (void)_housekeeping_op3_downloadAssets:(id)arg1;	// IMP=0x001000000001b470
- (void)_housekeeping_op2_purgeAssets:(id)arg1;	// IMP=0x001000000001a7f0
- (void)_housekeeping_op1_refreshAssets;	// IMP=0x0010000000019df0
- (id)_restorationState;	// IMP=0x0010000000019dc0
- (id)initWithPolicy:(id)arg1 context:(id)arg2;	// IMP=0x0010000000019af0

@end
