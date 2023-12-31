//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MRUVisualStylingProvider, NSString, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface MRUVolumeNowPlayingView : UIView
{
    UIImage *_icon;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    MRUVisualStylingProvider *_stylingProvider;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UIImageView *_imageView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000051bb
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void)updateContentSizeCategory;	// IMP=0x00000000000050e3
- (void)updateVisualStyling;	// IMP=0x00000000000050b6
- (void)visualStylingProviderDidChange:(id)arg1;	// IMP=0x00000000000050a4
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000004dd2
- (void)layoutSubviews;	// IMP=0x000000000000495d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000480e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

