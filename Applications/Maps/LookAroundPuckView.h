//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class LookAroundPuckGlyphView, UIImageView;

@interface LookAroundPuckView : UIView
{
    UIView *_coneContainerView;	// 8 = 0x8
    UIImageView *_puckConeView;	// 16 = 0x10
    UIImageView *_puckImageView;	// 24 = 0x18
    LookAroundPuckGlyphView *_glyphView;	// 32 = 0x20
    _Bool _subviewsNeedUpdate;	// 40 = 0x28
    _Bool _dimmed;	// 41 = 0x29
    long long _state;	// 48 = 0x30
    double _pitch;	// 56 = 0x38
    double _heading;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000009b9de1
@property(nonatomic) double heading; // @synthesize heading=_heading;
@property(nonatomic) double pitch; // @synthesize pitch=_pitch;
@property(nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void)updateSubviewsIfNeededAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000009b9d74
- (void)updateSubviewsIfNeededAnimated:(_Bool)arg1;	// IMP=0x00100000009b9d60
- (void)updateSubviewsIfNeeded;	// IMP=0x00100000009b9d4a
- (void)setNeedsUpdateSubviews;	// IMP=0x00100000009b9d39
- (void)updateSubviewsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000009b91ef
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000009b8b20

@end
