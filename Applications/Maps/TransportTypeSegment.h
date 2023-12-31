//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class NSLayoutConstraint, UIImageView;

@interface TransportTypeSegment : UIControl
{
    NSLayoutConstraint *_aspectRatioConstraint;	// 8 = 0x8
    long long _transportType;	// 16 = 0x10
    UIImageView *_iconView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000091df57
@property(readonly, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(readonly, nonatomic) long long transportType; // @synthesize transportType=_transportType;
- (void)_updateViews;	// IMP=0x001000000091dc79
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x001000000091dbd7
- (void)setSelected:(_Bool)arg1;	// IMP=0x001000000091db53
- (void)didMoveToWindow;	// IMP=0x001000000091dae5
- (void)_setupConstraints;	// IMP=0x001000000091d64d
- (id)initWithTransportType:(long long)arg1;	// IMP=0x001000000091ce0c

@end

