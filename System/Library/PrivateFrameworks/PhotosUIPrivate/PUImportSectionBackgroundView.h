//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class UIColor, UIView;

__attribute__((visibility("hidden")))
@interface PUImportSectionBackgroundView : UICollectionReusableView
{
    _Bool _needsBottomStrokeViewUpdate;	// 8 = 0x8
    double _strokeWidth;	// 16 = 0x10
    UIColor *_bottomStrokeColor;	// 24 = 0x18
    UIView *_bottomStrokeView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000211dee
@property(nonatomic) _Bool needsBottomStrokeViewUpdate; // @synthesize needsBottomStrokeViewUpdate=_needsBottomStrokeViewUpdate;
@property(retain, nonatomic) UIView *bottomStrokeView; // @synthesize bottomStrokeView=_bottomStrokeView;
@property(retain, nonatomic) UIColor *bottomStrokeColor; // @synthesize bottomStrokeColor=_bottomStrokeColor;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
- (void)layoutSubviews;	// IMP=0x0000000000211c0f
- (_Bool)needsStroke;	// IMP=0x0000000000211a4e
- (void)updateBottomStrokeViewIfNeeded;	// IMP=0x0000000000211872
- (void)setNeedsBottomStrokeViewUpdate;	// IMP=0x000000000021185b
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x0000000000211734

@end

