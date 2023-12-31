//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, PHContentEditingOutput, PICompositionController, PUEditableMediaProvider, PUPhotoEditIrisModel, PUReviewCreateAssetNode, PUVideoExportNode;
@protocol PUEditableAsset;

__attribute__((visibility("hidden")))
@interface PUSaveReviewAssetRequest : NSObject
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    double _beginTimestamp;	// 16 = 0x10
    PUReviewCreateAssetNode *_outputNode;	// 24 = 0x18
    PUVideoExportNode *_videoExportNode;	// 32 = 0x20
    int _identifier;	// 40 = 0x28
    id <PUEditableAsset> _editableAsset;	// 48 = 0x30
    PUEditableMediaProvider *_editableMediaProvider;	// 56 = 0x38
    NSURL *_directory;	// 64 = 0x40
    PICompositionController *_compositionController;	// 72 = 0x48
    PUPhotoEditIrisModel *_irisModel;	// 80 = 0x50
    PHContentEditingOutput *_contentEditingOutput;	// 88 = 0x58
    long long _workImageVersion;	// 96 = 0x60
    long long _currentState;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000004275bd
@property(readonly, nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) long long workImageVersion; // @synthesize workImageVersion=_workImageVersion;
@property(readonly, nonatomic) PHContentEditingOutput *contentEditingOutput; // @synthesize contentEditingOutput=_contentEditingOutput;
@property(readonly, copy, nonatomic) PUPhotoEditIrisModel *irisModel; // @synthesize irisModel=_irisModel;
@property(readonly, copy, nonatomic) PICompositionController *compositionController; // @synthesize compositionController=_compositionController;
@property(readonly, nonatomic) NSURL *directory; // @synthesize directory=_directory;
@property(readonly, nonatomic) PUEditableMediaProvider *editableMediaProvider; // @synthesize editableMediaProvider=_editableMediaProvider;
@property(readonly, nonatomic) id <PUEditableAsset> editableAsset; // @synthesize editableAsset=_editableAsset;
@property(readonly, nonatomic) int identifier; // @synthesize identifier=_identifier;
- (void)_transitionToState:(long long)arg1;	// IMP=0x00000000004274a4
@property(readonly, nonatomic) double progress;
@property(readonly, nonatomic) _Bool supportsProgress;
- (_Bool)_requiresVideoRender;	// IMP=0x00000000004273a5
- (void)_finishWithAsset:(id)arg1 error:(id)arg2;	// IMP=0x0000000000427257
- (void)cancelSaveOperation;	// IMP=0x00000000004271e2
- (void)_handleOutputNodeFinishedWithError:(id)arg1;	// IMP=0x000000000042710c
- (void)runNode:(id)arg1 didCancelWithError:(id)arg2;	// IMP=0x00000000004270ef
- (void)runNode:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x00000000004270d2
- (void)_performSaveOperation;	// IMP=0x0000000000426dad
- (void)_performInternalSaveOperation;	// IMP=0x000000000042698e
- (long long)_videoRequestVersion;	// IMP=0x000000000042688a
- (long long)_imageRequestVersion;	// IMP=0x00000000004267e3
- (void)beginSaveOperationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000042671b
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3 compositionController:(id)arg4 contentEditingOutput:(id)arg5 workImageVersion:(long long)arg6 irisEditModel:(id)arg7;	// IMP=0x00000000004265b5
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3 compositionController:(id)arg4 workImageVersion:(long long)arg5 irisEditModel:(id)arg6;	// IMP=0x000000000042647d
- (id)initWithAssetForCopying:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3 resourceURL:(id)arg4 contentEditingOutput:(id)arg5 workImageVersion:(long long)arg6 irisEditModel:(id)arg7;	// IMP=0x000000000042627a
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3 contentEditingOutput:(id)arg4 workImageVersion:(long long)arg5 irisEditModel:(id)arg6;	// IMP=0x000000000042624f
- (id)initWithAssetForRevertToOriginal:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3;	// IMP=0x0000000000426231
- (id)init;	// IMP=0x00000000004261aa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

