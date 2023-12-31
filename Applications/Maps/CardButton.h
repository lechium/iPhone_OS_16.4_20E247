//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIButton, UIMenu;

@interface CardButton : UIView
{
    UIButton *_actionButton;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000873211
@property(readonly, nonatomic) UIButton *underlyingButton;
- (id)_cardButtonTypeAsString:(unsigned long long)arg1;	// IMP=0x00100000008731d8
@property(retain, nonatomic) UIMenu *menu;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;	// IMP=0x0010000000873181
@property(readonly, nonatomic) __weak UIView *viewForVisualAlignment;
- (id)initWithType:(unsigned long long)arg1 blurred:(_Bool)arg2 tintColor:(id)arg3;	// IMP=0x001000000087206f
- (id)initWithType:(unsigned long long)arg1;	// IMP=0x0010000000872058

@end

