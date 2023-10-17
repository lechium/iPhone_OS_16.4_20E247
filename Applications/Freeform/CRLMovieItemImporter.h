//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAsset, CRLMovieCompatibilityChecker, CRLMovieCompatibilityConverter, CRLMoviePosterImageGenerator, CRLScaledProgress, NSError, NSObject, _TtC8Freeform12CRLBoardItem, _TtC8Freeform8CRLAsset;
@protocol OS_dispatch_queue;

@interface CRLMovieItemImporter
{
    NSObject<OS_dispatch_queue> *_importQueue;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    CRLScaledProgress *_progress;	// 24 = 0x18
    _TtC8Freeform8CRLAsset *_movieData;	// 32 = 0x20
    _TtC8Freeform8CRLAsset *_posterImageData;	// 40 = 0x28
    _TtC8Freeform8CRLAsset *_readonlyMovieData;	// 48 = 0x30
    AVAsset *_asset;	// 56 = 0x38
    CRLMovieCompatibilityChecker *_compatibilityChecker;	// 64 = 0x40
    CRLMovieCompatibilityConverter *_compatibilityConverter;	// 72 = 0x48
    CRLMoviePosterImageGenerator *_posterImageGenerator;	// 80 = 0x50
    _Bool _isCancelled;	// 88 = 0x58
    _Bool _didMessageDelegateAboutMovieCompatibility;	// 89 = 0x59
    _TtC8Freeform12CRLBoardItem *_boardItem;	// 96 = 0x60
    NSError *_error;	// 104 = 0x68
}

+ (void)p_setMovieProperties:(id)arg1 fromLoadedAsset:(id)arg2 containsVideoTrack:(_Bool)arg3;	// IMP=0x0040000000358e38
+ (void)t_setMoviePropertiesFromAsset:(id)arg1;	// IMP=0x0010000000358e08
+ (_Bool)p_canImportImageSource:(struct CGImageSource *)arg1;	// IMP=0x0010000000357381
+ (_Bool)protected_canImportFileWithPreinsertionAsset:(id)arg1 type:(id)arg2;	// IMP=0x00100000003572a6
+ (_Bool)protected_canImportFileAtURL:(id)arg1 type:(id)arg2;	// IMP=0x00100000003571d3
+ (id)protected_supportedAnimatedImageFileTypes;	// IMP=0x00100000003571ba
+ (id)protected_supportedFileUTTypes;	// IMP=0x00100000003571a1
+ (id)protected_supportedFileTypes;	// IMP=0x0010000000357188
- (void).cxx_destruct;	// IMP=0x002000000035b311
- (id)error;	// IMP=0x001000000035b300
- (id)boardItem;	// IMP=0x001000000035b2ef
- (id)progress;	// IMP=0x001000000035b2de
- (unsigned long long)p_onlyMovieFileDataLength;	// IMP=0x001000000035b258
- (unsigned long long)embeddedDataLength;	// IMP=0x001000000035b195
- (unsigned long long)uploadDataLength;	// IMP=0x001000000035b10f
- (void)cancel;	// IMP=0x001000000035b02b
- (void)p_finishImportingWithBoardItem:(id)arg1 error:(id)arg2;	// IMP=0x001000000035a94d
- (_Bool)p_validateSizeOfImportWithBoardItem:(id)arg1 error:(id *)arg2;	// IMP=0x001000000035a939
- (void)p_tellMovieCompatibilityProviderToIgnoreCompatibilityLevelIfNeeded;	// IMP=0x001000000035a865
- (void)p_importBoardItemFromAnimatedGIF;	// IMP=0x0010000000359d86
- (void)p_importBoardItemFromAsset;	// IMP=0x0010000000359926
- (void)p_asynchronouslyGeneratePosterImagesAndFinishImportingMovieItem:(id)arg1;	// IMP=0x001000000035928a
- (void)p_setPropertiesFromLoadedAssetToMovie:(id)arg1 containsVideoTrack:(_Bool)arg2;	// IMP=0x0010000000358e0e
- (id)p_makeMovieItemWithContainsVisibleTrack:(_Bool)arg1 andIsURLRemote:(_Bool)arg2;	// IMP=0x0010000000358b33
- (id)p_importErrorForLackOfAVTracks;	// IMP=0x00100000003589a7
- (void)p_importBoardItemFromAssetConvertingIfNeededToRequiredCompatibilityLevel:(long long)arg1 allowHEVCContent:(_Bool)arg2 fromCompatibilityLevel:(long long)arg3;	// IMP=0x00100000003583e9
- (void)p_performMovieCompatibilityAnalysis;	// IMP=0x0010000000357c1c
- (void)p_createAssetDataAndThenContinueImport;	// IMP=0x001000000035758b
- (void)importBoardItemWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000003574fc
- (_Bool)p_isURLRemote;	// IMP=0x00100000003574af
- (id)initWithData:(id)arg1 boardItemFactory:(id)arg2;	// IMP=0x001000000035746b
- (id)initWithURL:(id)arg1 boardItemFactory:(id)arg2;	// IMP=0x0010000000357396

@end
