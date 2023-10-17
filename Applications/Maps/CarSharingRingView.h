//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, NSString;
@protocol CAAnimationDelegate;

@interface CarSharingRingView : UIView
{
    struct CGSize _lastSize;	// 8 = 0x8
    _Bool _filled;	// 24 = 0x18
    id <CAAnimationDelegate> _animationDelegate;	// 32 = 0x20
}

+ (Class)layerClass;	// IMP=0x002000000076c651
- (void).cxx_destruct;	// IMP=0x002000000076cd96
@property(nonatomic, getter=isFilled) _Bool filled; // @synthesize filled=_filled;
@property(nonatomic) __weak id <CAAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x001000000076ccc4
- (MISSING_TYPE *)setFilled:animated: /* Error: Ran out of types for this method. */;	// IMP=0x001000000076ca13
@property(nonatomic) struct CGColor *color;
- (void)layoutSubviews;	// IMP=0x001000000076c815
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000076c674
- (id)shapeLayer;	// IMP=0x001000000076c662

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
