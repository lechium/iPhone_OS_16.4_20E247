//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAccessibilityElement.h>

@class CALayer, ICDocCamImageQuadEditOverlay;

__attribute__((visibility("hidden")))
@interface ICDocCamImageQuadEditKnobAccessibilityElement : UIAccessibilityElement
{
    CALayer *_knobLayer;	// 8 = 0x8
    ICDocCamImageQuadEditOverlay *_overlayView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a48f7
@property(nonatomic) __weak ICDocCamImageQuadEditOverlay *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) __weak CALayer *knobLayer; // @synthesize knobLayer=_knobLayer;
- (struct CGRect)accessibilityFrame;	// IMP=0x00000000000a47ce
- (id)accessibilityHint;	// IMP=0x00000000000a47a4
- (id)accessibilityLabel;	// IMP=0x00000000000a44ee
- (_Bool)accessibilityViewIsModal;	// IMP=0x00000000000a44e6
- (_Bool)isAccessibilityElement;	// IMP=0x00000000000a44de
- (id)initWithKnobLayer:(id)arg1 overlayView:(id)arg2;	// IMP=0x00000000000a4440

@end

