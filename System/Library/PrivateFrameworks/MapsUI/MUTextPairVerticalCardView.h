//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MUPlaceVerticalCardContainerView.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface MUTextPairVerticalCardView : MUPlaceVerticalCardContainerView
{
    NSArray *_viewModels;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000a5116
@property(retain, nonatomic) NSArray *viewModels; // @synthesize viewModels=_viewModels;
- (void)_contentSizeDidChange;	// IMP=0x00000000000a50f3
- (void)_recalculateStackingIfNeeded;	// IMP=0x00000000000a4e42
- (void)layoutSubviews;	// IMP=0x00000000000a4de0
- (void)_updateInsets;	// IMP=0x00000000000a4d66
- (void)_updateAppearance;	// IMP=0x00000000000a4ab3
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000a49d0

@end

