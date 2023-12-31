//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKAssociatedMessageTranscriptCell.h"

@class CKAnimatedImage, CKBalloonImageView, NSArray, NSString, UIImage, UILongPressGestureRecognizer, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface CKAssociatedStickerTranscriptCell : CKAssociatedMessageTranscriptCell
{
    CKBalloonImageView *_imageView;	// 8 = 0x8
    UIImage *_image;	// 16 = 0x10
    CKAnimatedImage *_animatedImage;	// 24 = 0x18
    NSArray *_frames;	// 32 = 0x20
    UILongPressGestureRecognizer *_longPressGestureRecognizer;	// 40 = 0x28
    UITapGestureRecognizer *_tapGestureRecognizer;	// 48 = 0x30
}

+ (double)associatedStickerXOriginForStickerFrame:(struct CGRect)arg1 parentSize:(struct CGSize)arg2 contentAlignmentRect:(struct CGRect)arg3 orientation:(BOOL)arg4 geometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor)arg5 outBalloonOffset:(double *)arg6;	// IMP=0x00100000004a7098
- (void).cxx_destruct;	// IMP=0x00000000004a779d
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(copy, nonatomic) NSArray *frames; // @synthesize frames=_frames;
@property(retain, nonatomic) CKAnimatedImage *animatedImage; // @synthesize animatedImage=_animatedImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) CKBalloonImageView *imageView; // @synthesize imageView=_imageView;
- (void)longPressGestureRecognized:(id)arg1;	// IMP=0x00000000004a767a
- (void)doubleTapGestureRecognized:(id)arg1;	// IMP=0x00000000004a762e
- (void)updateAnimationTimerObserving;	// IMP=0x00000000004a7563
- (void)animationTimerFired:(unsigned long long)arg1;	// IMP=0x00000000004a74bd
- (void)performReload:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000004a6de4
- (void)performReveal:(CDUnknownBlockType)arg1;	// IMP=0x00000000004a6b16
- (void)performHide:(CDUnknownBlockType)arg1;	// IMP=0x00000000004a6848
- (void)layoutSubviewsForDrawer;	// IMP=0x00000000004a67f2
- (void)layoutSubviewsForAlignmentContents;	// IMP=0x00000000004a61fe
- (void)didMoveToWindow;	// IMP=0x00000000004a61bd
- (void)prepareForReuse;	// IMP=0x00000000004a603c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000004a5e94
- (void)dealloc;	// IMP=0x00000000004a5e1f
- (void)configureForChatItem:(id)arg1 context:(id)arg2;	// IMP=0x0000000000365dfd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

