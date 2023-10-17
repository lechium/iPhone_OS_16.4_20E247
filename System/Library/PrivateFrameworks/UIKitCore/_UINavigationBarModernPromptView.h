//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIColor, UILabel;

__attribute__((visibility("hidden")))
@interface _UINavigationBarModernPromptView : UIView
{
    UILabel *_promptLabel;	// 8 = 0x8
    NSString *_prompt;	// 16 = 0x10
    UIColor *_textColor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001b5461
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
- (void)updateLayoutData:(id)arg1 layoutWidth:(double)arg2;	// IMP=0x00000000001b5429
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001b541b
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000001b5405
- (void)_updatePromptLabel;	// IMP=0x00000000001b4f39
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001b4e80

@end
