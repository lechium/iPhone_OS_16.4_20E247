//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface _MKSmallCalloutPassthroughButton : UIControl
{
    UIControl *_targetControl;	// 8 = 0x8
    UIView *_highlightView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000025287d
@property(retain, nonatomic) UIControl *targetControl; // @synthesize targetControl=_targetControl;
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000025262d
- (void)handleTap:(id)arg1;	// IMP=0x000000000025260b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000025258c

@end
