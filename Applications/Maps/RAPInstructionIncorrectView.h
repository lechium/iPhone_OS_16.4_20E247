//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface RAPInstructionIncorrectView : UIView
{
    UIImageView *_chevronView;	// 8 = 0x8
    int _displayMode;	// 16 = 0x10
    CDUnknownBlockType _tapblock;	// 24 = 0x18
    UIImageView *_flagView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000061f4ff
@property(readonly, nonatomic) UIImageView *flagView; // @synthesize flagView=_flagView;
@property(copy, nonatomic) CDUnknownBlockType tapblock; // @synthesize tapblock=_tapblock;
@property(nonatomic) int displayMode; // @synthesize displayMode=_displayMode;
- (void)showFlag:(_Bool)arg1;	// IMP=0x001000000061f256
- (void)viewTapped;	// IMP=0x001000000061f1dc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000061ecb4

@end

