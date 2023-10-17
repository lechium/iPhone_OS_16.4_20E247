//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLayoutConstraint, NSLayoutDimension, NSLayoutXAxisAnchor, NSString, UIButton, UIImage;

@interface CRLiOSMultipaneSegmentedControlSegment : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    UIImage *_image;	// 32 = 0x20
    double _width;	// 40 = 0x28
    UIButton *_button;	// 48 = 0x30
    NSLayoutConstraint *_leadingConstraint;	// 56 = 0x38
    NSLayoutConstraint *_trailingConstraint;	// 64 = 0x40
    NSLayoutConstraint *_widthConstraint;	// 72 = 0x48
    NSLayoutConstraint *_equalWidthConstraint;	// 80 = 0x50
    NSLayoutXAxisAnchor *_previousTrailingAnchor;	// 88 = 0x58
    NSLayoutDimension *_distanceToPreviousTrailingAnchor;	// 96 = 0x60
    NSLayoutConstraint *_distanceBetweenPreviousAndNextSegmentConstraint;	// 104 = 0x68
    struct UIEdgeInsets _edgeInsets;	// 112 = 0x70
}

+ (id)segmentWithObject:(id)arg1 edgeInsets:(struct UIEdgeInsets)arg2;	// IMP=0x00400000000181db
+ (id)segmentWithImage:(id)arg1 edgeInsets:(struct UIEdgeInsets)arg2;	// IMP=0x0010000000018172
+ (id)segmentWithString:(id)arg1 edgeInsets:(struct UIEdgeInsets)arg2;	// IMP=0x001000000001810b
- (void).cxx_destruct;	// IMP=0x002000000001858a
@property(retain, nonatomic) NSLayoutConstraint *distanceBetweenPreviousAndNextSegmentConstraint; // @synthesize distanceBetweenPreviousAndNextSegmentConstraint=_distanceBetweenPreviousAndNextSegmentConstraint;
@property(retain, nonatomic) NSLayoutDimension *distanceToPreviousTrailingAnchor; // @synthesize distanceToPreviousTrailingAnchor=_distanceToPreviousTrailingAnchor;
@property(nonatomic) __weak NSLayoutXAxisAnchor *previousTrailingAnchor; // @synthesize previousTrailingAnchor=_previousTrailingAnchor;
@property(retain, nonatomic) NSLayoutConstraint *equalWidthConstraint; // @synthesize equalWidthConstraint=_equalWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void)updateAccessibilityLabel;	// IMP=0x00100000000183d3
- (id)initWithType:(long long)arg1 title:(id)arg2 image:(id)arg3 edgeInsets:(struct UIEdgeInsets)arg4;	// IMP=0x0010000000017fe0

@end
