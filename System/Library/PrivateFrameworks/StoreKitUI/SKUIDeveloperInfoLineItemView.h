//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface SKUIDeveloperInfoLineItemView : UIView
{
    struct UIEdgeInsets _contentInset;	// 8 = 0x8
    UILabel *_labelLabel;	// 40 = 0x28
    UIView *_separatorView;	// 48 = 0x30
    UILabel *_valueLabel;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000ffc13
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000ffaf8
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000000ffa6a
- (void)layoutSubviews;	// IMP=0x00000000000ff7b4
- (id)initWithLabel:(id)arg1 value:(id)arg2;	// IMP=0x00000000000ff4d7

@end
