//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILabel.h>

@class MISSING_TYPE, NSAttributedString, NSString;

@interface _TtC5Files12DOCFastLabel : UILabel
{
    MISSING_TYPE *textLayer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00400000003a9fc0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000003a9ed0
- (void)didMoveToWindow;	// IMP=0x00100000003a9e30
- (void)drawTextInRect:(struct CGRect)arg1;	// IMP=0x00100000003a9e20
- (void)layoutSubviews;	// IMP=0x00100000003a9df0
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;	// IMP=0x00100000003a96f0
@property(nonatomic) double contentScaleFactor;
@property(nonatomic, retain) NSAttributedString *attributedText;
@property(nonatomic, copy) NSString *text;
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000003a90c0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000003a8fc0

@end

