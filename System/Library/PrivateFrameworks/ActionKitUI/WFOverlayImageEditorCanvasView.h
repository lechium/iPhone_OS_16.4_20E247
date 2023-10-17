//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UIRotationGestureRecognizer, WFOverlayImageTransform;

__attribute__((visibility("hidden")))
@interface WFOverlayImageEditorCanvasView : UIView
{
    WFOverlayImageTransform *_imageTransform;	// 8 = 0x8
    UIRotationGestureRecognizer *_rotateRecognizer;	// 16 = 0x10
    UIImageView *_backgroundImageView;	// 24 = 0x18
    UIImageView *_overlayImageView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000051b75
@property(readonly, nonatomic) __weak UIImageView *overlayImageView; // @synthesize overlayImageView=_overlayImageView;
@property(readonly, nonatomic) __weak UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(readonly, nonatomic) __weak UIRotationGestureRecognizer *rotateRecognizer; // @synthesize rotateRecognizer=_rotateRecognizer;
@property(readonly, nonatomic) WFOverlayImageTransform *imageTransform; // @synthesize imageTransform=_imageTransform;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000051b11
- (void)reset;	// IMP=0x0000000000051ad5
- (void)setOverlayImageOpacity:(double)arg1;	// IMP=0x0000000000051a9c
@property(nonatomic, getter=isRotationEnabled) _Bool rotationEnabled;
- (void)handlePinchGesture:(id)arg1;	// IMP=0x00000000000518de
- (void)handlePanGesture:(id)arg1;	// IMP=0x0000000000051697
- (void)handleRotateGesture:(id)arg1;	// IMP=0x0000000000051602
- (void)layoutSubviews;	// IMP=0x0000000000051111
- (id)initWithBackgroundImage:(id)arg1 overlayImage:(id)arg2 transform:(id)arg3;	// IMP=0x0000000000050e49

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
