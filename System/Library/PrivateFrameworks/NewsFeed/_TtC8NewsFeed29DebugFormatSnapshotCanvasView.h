//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8NewsFeed29DebugFormatSnapshotCanvasView : UIView
{
    MISSING_TYPE *toolbarItems;	// 8 = 0x8
    MISSING_TYPE *contentView;	// 16 = 0x10
    MISSING_TYPE *_selectedSnapshotView;	// 24 = 0x18
    MISSING_TYPE *$__lazy_storage_$_rotateGesture;	// 32 = 0x20
    MISSING_TYPE *$__lazy_storage_$_translateGesture;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_zoomGesture;	// 48 = 0x30
    MISSING_TYPE *rotateState;	// 56 = 0x38
    MISSING_TYPE *translateState;	// 104 = 0x68
    MISSING_TYPE *zoomState;	// 152 = 0x98
    MISSING_TYPE *hiddenSlider;	// 200 = 0xc8
    MISSING_TYPE *depthSlider;	// 208 = 0xd0
    MISSING_TYPE *snapshots;	// 216 = 0xd8
    MISSING_TYPE *snapshotTransform;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x0000000001168fe0
- (void)doHiddenChangedWithSender:(id)arg1;	// IMP=0x0000000001168f60
- (void)doDepthChangedWithSender:(id)arg1;	// IMP=0x0000000001168db0
- (void)doPerspectiveWithSender:(id)arg1;	// IMP=0x0000000001168d60
- (void)doZoomWithGesture:(id)arg1;	// IMP=0x0000000001168ae0
- (void)doTranslateWithGesture:(id)arg1;	// IMP=0x00000000011689a0
- (void)doRotateWithGesture:(id)arg1;	// IMP=0x0000000001168840
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000011677d0
- (void)layoutSubviews;	// IMP=0x00000000011675b0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000001167380
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000011670b0

@end
