//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIGiftTableSectionHeaderView : UIView
{
    struct UIEdgeInsets _contentInsets;	// 8 = 0x8
    UILabel *_label;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000092730
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000092687
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000000092615
- (void)layoutSubviews;	// IMP=0x000000000009253e
@property(copy, nonatomic) NSString *label;

@end
