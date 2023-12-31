//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIScrollView;

@interface OverflowView : UIView
{
    UIScrollView *_scrollView;	// 8 = 0x8
    struct CGSize _lastLayoutSize;	// 16 = 0x10
    UIView *_contentView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000090d674
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)_addContentView:(id)arg1;	// IMP=0x001000000090d5bd
- (void)resetContentOffset;	// IMP=0x001000000090d590
- (void)willMoveToWindow:(id)arg1;	// IMP=0x001000000090d4f5
- (void)layoutSubviews;	// IMP=0x001000000090d42f
- (id)_initialConstraintsForContentView:(id)arg1;	// IMP=0x001000000090d055
- (id)_initialScrollViewConstraints;	// IMP=0x001000000090cd67
- (id)initWithContentView:(id)arg1;	// IMP=0x001000000090cc23

@end

