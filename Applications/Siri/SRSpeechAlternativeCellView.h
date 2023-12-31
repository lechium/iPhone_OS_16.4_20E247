//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UILabel;

@interface SRSpeechAlternativeCellView : UIView
{
    UILabel *_displayTextLabel;	// 8 = 0x8
    UIView *_containerView;	// 16 = 0x10
    NSAttributedString *_titleString;	// 24 = 0x18
    _Bool _hasSetUpConstraints;	// 32 = 0x20
    NSString *_responseText;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000077eef
@property(copy, nonatomic) NSString *responseText; // @synthesize responseText=_responseText;
- (void)updateConstraints;	// IMP=0x0010000000077c7e
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0010000000077bf7
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0010000000077ba8
- (struct UIEdgeInsets)edgeInsets;	// IMP=0x0010000000077b3f
- (id)initWithTitle:(id)arg1;	// IMP=0x00100000000779a9

@end

