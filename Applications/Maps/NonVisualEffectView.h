//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIColor, UIView, UIVisualEffect;

@interface NonVisualEffectView
{
    UIView *_contentView;	// 8 = 0x8
    UIView *_backgroundView;	// 16 = 0x10
    double _cornerRadius;	// 24 = 0x18
    UIVisualEffect *_effect;	// 32 = 0x20
    UIColor *_customBackgroundColor;	// 40 = 0x28
    NSString *__groupName;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000824f52
@property(copy, nonatomic, setter=_setGroupName:) NSString *_groupName; // @synthesize _groupName=__groupName;
@property(copy, nonatomic) UIColor *customBackgroundColor; // @synthesize customBackgroundColor=_customBackgroundColor;
@property(copy, nonatomic) UIVisualEffect *effect; // @synthesize effect=_effect;
- (void)updateTheme;	// IMP=0x0010000000824e46
- (void)_setCornerRadius:(double)arg1 continuous:(_Bool)arg2 maskedCorners:(unsigned long long)arg3;	// IMP=0x0010000000824b60
- (double)_cornerRadius;	// IMP=0x0010000000824b4e
- (void)_setCornerRadius:(double)arg1;	// IMP=0x00100000008249eb
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00100000008249ce
- (id)backgroundColor;	// IMP=0x00100000008249b1
@property(readonly, nonatomic) UIView *contentView;
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000824649
- (id)initWithEffect:(id)arg1;	// IMP=0x00100000008245b0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000824562

@end
