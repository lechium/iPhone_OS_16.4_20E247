//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface PUAvalancheStackView : UIView
{
    CALayer *_imageLayer;	// 8 = 0x8
    CALayer *_stackLayer0;	// 16 = 0x10
    CALayer *_stackLayer1;	// 24 = 0x18
    long long _contentMode;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000393733
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(retain, nonatomic) CALayer *stackLayer1; // @synthesize stackLayer1=_stackLayer1;
@property(retain, nonatomic) CALayer *stackLayer0; // @synthesize stackLayer0=_stackLayer0;
@property(retain, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
- (struct CGRect)_imageContentFrame;	// IMP=0x0000000000393499
- (void)layoutSubviews;	// IMP=0x0000000000393230
- (void)setImage:(id)arg1;	// IMP=0x00000000003930a5
- (id)init;	// IMP=0x0000000000392c45

@end
