//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface XBViewMatchingImageView : UIView
{
    _Bool _bottom;	// 8 = 0x8
    UIView *_matchingView;	// 16 = 0x10
    UIImageView *_imageView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000004947
@property(nonatomic) _Bool bottom; // @synthesize bottom=_bottom;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *matchingView; // @synthesize matchingView=_matchingView;
- (void)layoutSubviews;	// IMP=0x0010000000004720
- (id)initWithMatchingView:(id)arg1 image:(id)arg2 bottom:(_Bool)arg3;	// IMP=0x00100000000045ca

@end
