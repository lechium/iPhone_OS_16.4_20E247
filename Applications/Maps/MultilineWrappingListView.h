//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSNumber;

@interface MultilineWrappingListView : UIView
{
    double _horizontalSpacing;	// 8 = 0x8
    double _interlineSpacing;	// 16 = 0x10
    double _maxLineHeight;	// 24 = 0x18
    NSMutableArray *_items;	// 32 = 0x20
    NSNumber *_cachedNumberOfLines;	// 40 = 0x28
    NSNumber *_cachedSingleLineWidth;	// 48 = 0x30
    struct CGRect _previousFrame;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000a58931
@property(nonatomic) struct CGRect previousFrame; // @synthesize previousFrame=_previousFrame;
@property(retain, nonatomic) NSNumber *cachedSingleLineWidth; // @synthesize cachedSingleLineWidth=_cachedSingleLineWidth;
@property(retain, nonatomic) NSNumber *cachedNumberOfLines; // @synthesize cachedNumberOfLines=_cachedNumberOfLines;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) double maxLineHeight; // @synthesize maxLineHeight=_maxLineHeight;
@property(nonatomic) double interlineSpacing; // @synthesize interlineSpacing=_interlineSpacing;
@property(nonatomic) double horizontalSpacing; // @synthesize horizontalSpacing=_horizontalSpacing;
- (double)_paddingForItem:(id)arg1;	// IMP=0x0010000000a58766
- (void)_enumerateLinesForPreferredMaxLayoutWidth:(double)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0010000000a581d1
- (void)_enumerateItemsForPreferredMaxLayoutWidth:(double)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0010000000a57df3
- (void)_invalidateFrameSize;	// IMP=0x0010000000a57dc3
- (void)_invalidateLayout;	// IMP=0x0010000000a57d93
- (struct CGSize)intrinsicContentSize;	// IMP=0x0010000000a57b1a
- (void)layoutSubviews;	// IMP=0x0010000000a578be
- (void)willRemoveSubview:(id)arg1;	// IMP=0x0010000000a57774
- (void)_addArrangedSubview:(id)arg1 horizontalSpacing:(id)arg2;	// IMP=0x0010000000a57682
- (void)addArrangedSubview:(id)arg1 withCustomHorizontalSpacing:(double)arg2;	// IMP=0x0010000000a575fc
- (void)addArrangedSubview:(id)arg1;	// IMP=0x0010000000a575e8
@property(readonly, nonatomic) double singleLineWidth;
@property(readonly, nonatomic) unsigned long long numberOfLines;
- (void)_commonInit;	// IMP=0x0010000000a57256
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000a571f9
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000a571ad

@end

