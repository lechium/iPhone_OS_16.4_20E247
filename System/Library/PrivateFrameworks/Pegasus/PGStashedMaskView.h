//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface PGStashedMaskView : UIView
{
    _Bool _tabHidden;	// 8 = 0x8
    _Bool _tabShownLeft;	// 9 = 0x9
    UIView *_mainBody;	// 16 = 0x10
    UIView *_tab;	// 24 = 0x18
    UIView *_tabTopCornerFill;	// 32 = 0x20
    UIView *_tabBottomCornerFill;	// 40 = 0x28
    UIView *_tabLeftTopCornerDestOut;	// 48 = 0x30
    UIView *_tabLeftBottomCornerDestOut;	// 56 = 0x38
    UIView *_tabRightTopCornerDestOut;	// 64 = 0x40
    UIView *_tabRightBottomCornerDestOut;	// 72 = 0x48
    UIView *_tabShadowView;	// 80 = 0x50
    struct CGSize _minimumStashTabSize;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000031e02
@property(nonatomic) struct CGSize minimumStashTabSize; // @synthesize minimumStashTabSize=_minimumStashTabSize;
@property(nonatomic) __weak UIView *tabShadowView; // @synthesize tabShadowView=_tabShadowView;
- (void)layoutSubviews;	// IMP=0x00000000000318d2
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000003180a
- (void)_setContinuousCornerRadius:(double)arg1;	// IMP=0x00000000000317ed
- (double)_continuousCornerRadius;	// IMP=0x00000000000317d0
- (struct CGRect)_mainBodyBounds;	// IMP=0x0000000000031753
@property(readonly, nonatomic) struct CGRect tabViewBounds;
- (void)setTabHidden:(_Bool)arg1 left:(_Bool)arg2;	// IMP=0x00000000000311b7
- (id)initWithFrame:(struct CGRect)arg1 minimumStashTabSize:(struct CGSize)arg2;	// IMP=0x0000000000030a7e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000030a5c

@end

