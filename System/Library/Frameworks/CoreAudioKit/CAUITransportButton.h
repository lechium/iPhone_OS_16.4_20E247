//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

__attribute__((visibility("hidden")))
@interface CAUITransportButton : UIButton
{
    int drawingStyle;	// 8 = 0x8
    struct CGColor *fillColor;	// 16 = 0x10
    struct CGRect imageRect;	// 24 = 0x18
}

+ (Class)layerClass;	// IMP=0x006000000001818e
- (struct CGPath *)newPathRefForStyle:(int)arg1;	// IMP=0x000000000001884f
- (void)flash;	// IMP=0x00000000000186ac
@property struct CGColor *fillColor;
@property int drawingStyle;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000001830c
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000001827b
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000001819f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000017f37
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000017cb4

@end
