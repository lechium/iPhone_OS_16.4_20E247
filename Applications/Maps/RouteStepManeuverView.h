//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GuidanceManeuverView, NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface RouteStepManeuverView
{
    UIImageView *_shieldImageView;	// 8 = 0x8
    GuidanceManeuverView *_guidanceManeuverView;	// 16 = 0x10
    UILabel *_primaryTextLabel;	// 24 = 0x18
    UILabel *_secondaryTextLabel;	// 32 = 0x20
    UILabel *_tertiaryTextLabel;	// 40 = 0x28
    UIView *_trailingView;	// 48 = 0x30
    NSLayoutConstraint *_containerWidthConstraint;	// 56 = 0x38
    NSLayoutConstraint *_imageWidthConstraint;	// 64 = 0x40
    NSLayoutConstraint *_imageHeightConstraint;	// 72 = 0x48
    NSLayoutConstraint *_primaryTrailingConstraint;	// 80 = 0x50
    NSLayoutConstraint *_primaryTopConstraint;	// 88 = 0x58
    NSLayoutConstraint *_secondaryTopConstraint;	// 96 = 0x60
    NSLayoutConstraint *_tertiaryTopConstraint;	// 104 = 0x68
}

+ (double)heightForItem:(id)arg1 width:(double)arg2 maximumHeight:(double)arg3;	// IMP=0x004000000065e1a6
- (void).cxx_destruct;	// IMP=0x002000000065f097
@property(retain, nonatomic) NSLayoutConstraint *tertiaryTopConstraint; // @synthesize tertiaryTopConstraint=_tertiaryTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *secondaryTopConstraint; // @synthesize secondaryTopConstraint=_secondaryTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *primaryTopConstraint; // @synthesize primaryTopConstraint=_primaryTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *primaryTrailingConstraint; // @synthesize primaryTrailingConstraint=_primaryTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageHeightConstraint; // @synthesize imageHeightConstraint=_imageHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageWidthConstraint; // @synthesize imageWidthConstraint=_imageWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *containerWidthConstraint; // @synthesize containerWidthConstraint=_containerWidthConstraint;
@property(retain, nonatomic) UIView *trailingView; // @synthesize trailingView=_trailingView;
@property(retain, nonatomic) UILabel *tertiaryTextLabel; // @synthesize tertiaryTextLabel=_tertiaryTextLabel;
@property(retain, nonatomic) UILabel *secondaryTextLabel; // @synthesize secondaryTextLabel=_secondaryTextLabel;
@property(retain, nonatomic) UILabel *primaryTextLabel; // @synthesize primaryTextLabel=_primaryTextLabel;
@property(retain, nonatomic) GuidanceManeuverView *guidanceManeuverView; // @synthesize guidanceManeuverView=_guidanceManeuverView;
@property(retain, nonatomic) UIImageView *shieldImageView; // @synthesize shieldImageView=_shieldImageView;
- (void)setItem:(id)arg1;	// IMP=0x001000000065e7f1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000065d142

@end
