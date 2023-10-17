//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AssetPromise, InAppDownloadStatus, InAppDownloadTimeEstimator, NSDictionary, NSNumber, NSString, NSTimer;

@interface InAppDownloadTask
{
    AssetPromise *_assetPromise;	// 8 = 0x8
    NSDictionary *_downloadInfo;	// 16 = 0x10
    NSString *_downloadPath;	// 24 = 0x18
    NSString *_installPath;	// 32 = 0x20
    NSTimer *_statusTimer;	// 40 = 0x28
    InAppDownloadStatus *_pendingDownloadStatus;	// 48 = 0x30
    InAppDownloadTimeEstimator *_timeEstimator;	// 56 = 0x38
    _Bool _paused;	// 64 = 0x40
    struct _BOMCopier *_copier;	// 72 = 0x48
    unsigned long long _expectedInstallSize;	// 80 = 0x50
    unsigned long long _totalInstalledSize;	// 88 = 0x58
    NSNumber *_downloadID;	// 96 = 0x60
    NSString *_logKey;	// 104 = 0x68
    CDUnknownBlockType _statusBlock;	// 112 = 0x70
    InAppDownloadStatus *_status;	// 120 = 0x78
    NSString *_bundleID;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00200000000a0be7
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) InAppDownloadStatus *status; // @synthesize status=_status;
@property(copy, nonatomic) CDUnknownBlockType statusBlock; // @synthesize statusBlock=_statusBlock;
@property(copy, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(copy, nonatomic) NSNumber *downloadID; // @synthesize downloadID=_downloadID;
- (id)_bomInstallFromPath:(id)arg1 withError:(id *)arg2;	// IMP=0x00100000000a049d
- (void)_bomInstall;	// IMP=0x001000000009fe44
- (void)_updateDownloadStatus:(id)arg1;	// IMP=0x001000000009fdbd
- (void)_sendDownloadStatus;	// IMP=0x001000000009fcfc
- (void)_install;	// IMP=0x001000000009fcea
- (void)_finalizeTaskWithError:(id)arg1;	// IMP=0x001000000009f93d
- (void)_downloadedBytes:(long long)arg1 expectedBytes:(long long)arg2;	// IMP=0x001000000009f836
- (void)pause;	// IMP=0x001000000009f6c5
- (void)cancel;	// IMP=0x001000000009f4d6
- (void)main;	// IMP=0x001000000009e5f8
- (id)initWithDownloadID:(id)arg1 info:(id)arg2 bundleID:(id)arg3 containerID:(id)arg4;	// IMP=0x001000000009e487

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
