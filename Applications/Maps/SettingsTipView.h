//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, CardView, NSString, UIButton, UILabel, UITapGestureRecognizer;
@protocol SettingsTipViewDelegate;

@interface SettingsTipView : UIView
{
    UIView *_contentMaskView;	// 8 = 0x8
    CAShapeLayer *_contentMaskLayer;	// 16 = 0x10
    CardView *_cardView;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_bodyLabel;	// 40 = 0x28
    UIButton *_closeButton;	// 48 = 0x30
    UITapGestureRecognizer *_tapGestureRecognizer;	// 56 = 0x38
    id <SettingsTipViewDelegate> _delegate;	// 64 = 0x40
    NSString *_blurGroupName;	// 72 = 0x48
}

+ (Class)layerClass;	// IMP=0x00400000007f8810
- (void).cxx_destruct;	// IMP=0x00200000007fa017
@property(retain, nonatomic) NSString *blurGroupName; // @synthesize blurGroupName=_blurGroupName;
@property(nonatomic) __weak id <SettingsTipViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_closeTapped;	// IMP=0x00100000007f9f4a
- (void)_tipTapped;	// IMP=0x00100000007f9f0e
- (void)_updateText;	// IMP=0x00100000007f9e05
- (void)_updateFonts;	// IMP=0x00100000007f9cab
- (void)layoutSubviews;	// IMP=0x00100000007f9b41
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000007f9a56
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000007f8833
- (id)_shapeLayer;	// IMP=0x00100000007f8821

@end
