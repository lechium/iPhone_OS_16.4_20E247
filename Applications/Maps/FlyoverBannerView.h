//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel, UIVisualEffectView;
@protocol FlyoverBannerViewDelegate;

@interface FlyoverBannerView : UIView
{
    NSString *_locationString;	// 8 = 0x8
    UIVisualEffectView *_effectView;	// 16 = 0x10
    UILabel *_textLabel;	// 24 = 0x18
    UIButton *_stopButton;	// 32 = 0x20
    id <FlyoverBannerViewDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000b282a9
@property(nonatomic) __weak id <FlyoverBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *stopButton; // @synthesize stopButton=_stopButton;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) NSString *locationString; // @synthesize locationString=_locationString;
- (void)stopButtonPressed;	// IMP=0x0010000000b281b0
- (struct CGSize)intrinsicContentSize;	// IMP=0x0010000000b27f53
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000b276a9

@end

