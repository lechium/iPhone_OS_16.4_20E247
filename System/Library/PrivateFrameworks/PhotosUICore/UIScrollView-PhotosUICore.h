//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@interface UIScrollView (PhotosUICore)
@property(readonly, nonatomic) _Bool px_isPerformingScrollTest;
- (void)px_cancelScrollAnimation;	// IMP=0x0030000000278ab0
- (void)px_cancelScrollGesture;	// IMP=0x0030000000278a54
- (_Bool)_px_isScrolledAtEdge:(unsigned int)arg1 tolerance:(double)arg2;	// IMP=0x00300000002788fb
- (struct CGSize)_px_currentContentSize;	// IMP=0x0030000000278869
@property(readonly, nonatomic) unsigned long long px_scrollableAxis;
- (void)px_adjustInsetsForKeyboardInfo:(id)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;	// IMP=0x003000000027833c
@property(readonly, nonatomic) _Bool px_isBouncing;
@property(readonly, nonatomic) _Bool px_isDecelerating;
- (struct CGPoint)px_contentOffsetForEdge:(unsigned int)arg1;	// IMP=0x00300000002780fe
- (void)px_scrollToEdge:(unsigned int)arg1 animated:(_Bool)arg2;	// IMP=0x00300000002780c1
- (_Bool)px_isScrolledBeyondEdge:(unsigned int)arg1;	// IMP=0x00300000002780a7
- (_Bool)px_isScrolledAtEdge:(unsigned int)arg1 tolerance:(double)arg2;	// IMP=0x0030000000277ff2
- (_Bool)px_isScrolledAtEdge:(unsigned int)arg1;	// IMP=0x0030000000277f8c
- (void)px_scrollToContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x0030000000277f4f
- (struct CGPoint)px_constrainedContentOffset:(struct CGPoint)arg1;	// IMP=0x0030000000277db5
@end
