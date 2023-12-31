//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXRunNode.h>

@class NSArray, NSString, PUReviewAsset;
@protocol PUAdjustmentURLNode, PUImageDataRenderNode, PUImageInfoNode, PUReviewImageURLNode, PUReviewVideoURLNode, PUVideoAssetNode, PUVideoURLExportNode, PXRunNodeDelegate;

__attribute__((visibility("hidden")))
@interface PUReviewCreateAssetNode : PXRunNode
{
    PUReviewAsset *_reviewAsset;	// 8 = 0x8
    PUReviewAsset *_inputAsset;	// 16 = 0x10
    id <PUReviewImageURLNode> _imageInfoNode;	// 24 = 0x18
    id <PUImageInfoNode> _renderImageInfoNode;	// 32 = 0x20
    id <PUImageDataRenderNode> _renderImageDataNode;	// 40 = 0x28
    id <PUReviewVideoURLNode> _videoURLNode;	// 48 = 0x30
    id <PUVideoAssetNode> _videoAssetNode;	// 56 = 0x38
    id <PUVideoURLExportNode> _renderVideoURLNode;	// 64 = 0x40
    id <PUVideoAssetNode> _renderVideoAssetNode;	// 72 = 0x48
    id <PUAdjustmentURLNode> _adjustmentURLNode;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000408c1c
@property(readonly, nonatomic) id <PUAdjustmentURLNode> adjustmentURLNode; // @synthesize adjustmentURLNode=_adjustmentURLNode;
@property(readonly, nonatomic) id <PUVideoAssetNode> renderVideoAssetNode; // @synthesize renderVideoAssetNode=_renderVideoAssetNode;
@property(readonly, nonatomic) id <PUVideoURLExportNode> renderVideoURLNode; // @synthesize renderVideoURLNode=_renderVideoURLNode;
@property(readonly, nonatomic) id <PUVideoAssetNode> videoAssetNode; // @synthesize videoAssetNode=_videoAssetNode;
@property(readonly, nonatomic) id <PUReviewVideoURLNode> videoURLNode; // @synthesize videoURLNode=_videoURLNode;
@property(readonly, nonatomic) id <PUImageDataRenderNode> renderImageDataNode; // @synthesize renderImageDataNode=_renderImageDataNode;
@property(readonly, nonatomic) id <PUImageInfoNode> renderImageInfoNode; // @synthesize renderImageInfoNode=_renderImageInfoNode;
@property(readonly, nonatomic) id <PUReviewImageURLNode> imageInfoNode; // @synthesize imageInfoNode=_imageInfoNode;
@property(readonly, nonatomic) PUReviewAsset *inputAsset; // @synthesize inputAsset=_inputAsset;
@property(readonly, nonatomic) PUReviewAsset *reviewAsset; // @synthesize reviewAsset=_reviewAsset;
- (void)run;	// IMP=0x0000000000408262
- (id)initWithInputAsset:(id)arg1 imageInfoNode:(id)arg2 renderImageInfoNode:(id)arg3 renderImageDataNode:(id)arg4 videoURLNode:(id)arg5 videoAssetNode:(id)arg6 renderVideoURLNode:(id)arg7 renderVideoAssetNode:(id)arg8 adjustmentURLNode:(id)arg9;	// IMP=0x0000000000407ed5

// Remaining properties
@property(readonly, getter=isCanceled) _Bool canceled;
@property(readonly, getter=isComplete) _Bool complete;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <PXRunNodeDelegate> delegate;
@property(readonly, copy, nonatomic) NSArray *dependencies;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, getter=isRunning) _Bool running;
@property(readonly) unsigned long long state;
@property(readonly) Class superclass;
@property(readonly, getter=isWaiting) _Bool waiting;

@end

