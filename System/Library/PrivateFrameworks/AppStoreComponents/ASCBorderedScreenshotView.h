//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class ASCArtworkView;

__attribute__((visibility("hidden")))
@interface ASCBorderedScreenshotView : UIView
{
    ASCArtworkView *_artworkView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001a14d
@property(retain, nonatomic) ASCArtworkView *artworkView; // @synthesize artworkView=_artworkView;
- (struct CGSize)preferredArtworkSize;	// IMP=0x000000000001a0a7
- (id)imageView;	// IMP=0x000000000001a092
- (void)layoutSubviews;	// IMP=0x0000000000019f68
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000019f53
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000019f28
- (id)initWithFrame:(struct CGRect)arg1 screenshotDisplayConfiguration:(id)arg2;	// IMP=0x0000000000019e0d

@end
