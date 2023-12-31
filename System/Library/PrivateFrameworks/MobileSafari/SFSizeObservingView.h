//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSLayoutDimension;

__attribute__((visibility("hidden")))
@interface SFSizeObservingView : UIView
{
    struct CGSize _lastLayoutSize;	// 8 = 0x8
    NSLayoutConstraint *_heightConstraint;	// 24 = 0x18
    NSLayoutDimension *_observedHeightDimension;	// 32 = 0x20
    CDUnknownBlockType _sizeChangeCallback;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000ac666
@property(copy, nonatomic) CDUnknownBlockType sizeChangeCallback; // @synthesize sizeChangeCallback=_sizeChangeCallback;
@property(retain, nonatomic) NSLayoutDimension *observedHeightDimension; // @synthesize observedHeightDimension=_observedHeightDimension;
- (void)layoutSubviews;	// IMP=0x00000000000ac58d
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000ac474
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000ac283

@end

