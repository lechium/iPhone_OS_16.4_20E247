//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

@interface OOPASpinnerTitle : UIView
{
    UILabel *_titleView;	// 8 = 0x8
    UIActivityIndicatorView *_spinner;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000003298
- (void)stopAnimating;	// IMP=0x001000000000327b
- (void)startAnimating;	// IMP=0x001000000000325e
- (void)layoutSubviews;	// IMP=0x0010000000003054
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0010000000002e90
- (void)dealloc;	// IMP=0x0010000000002e47
- (id)initWithTitle:(id)arg1;	// IMP=0x0010000000002cb5

@end
