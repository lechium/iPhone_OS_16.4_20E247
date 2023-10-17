//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString;

@interface UIView (MapsUI)
+ (void)_mapsui_animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000bcd4d
- (id)_addHairlineAtBottom:(_Bool)arg1 leadingMargin:(double)arg2 trailingMargin:(double)arg3;	// IMP=0x001000000006ce2f
- (id)_mapsui_addHairlineAtBottomWithLeadingMargin:(double)arg1 trailingMargin:(double)arg2;	// IMP=0x001000000006ce18
- (id)_mapsui_addHairlineAtBottomWithMargin:(double)arg1;	// IMP=0x001000000006ce03
- (id)_mapsui_addHairlineAtTopWithLeadingMargin:(double)arg1 trailingMargin:(double)arg2;	// IMP=0x001000000006cdef
- (id)_mapsui_addHairlineAtTopWithMargin:(double)arg1;	// IMP=0x001000000006cdda
- (_Bool)_mapsui_isRTL;	// IMP=0x00100000000bce9e
- (void)_mapsui_addSelectGestureRecognizerWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00100000000bcca6
- (void)_mapsui_performImageLoadingTransitionWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000bcbe7
- (void)_mapsui_setBackgroundColor:(id)arg1;	// IMP=0x00100000000bcbd5
- (void)_mapsui_setCardCorner;	// IMP=0x00100000000bcb2d
- (void)_mapsui_layoutIfNeeded;	// IMP=0x00100000000bcb1b
- (struct CGSize)_mapsui_fittingSize;	// IMP=0x00100000000bcaf9
- (void)_mapsui_disableTranslatesAutoresizingMaskIntoConstraints;	// IMP=0x00100000000d94a9
@property(readonly, nonatomic) NSString *_mapsui_recursiveLayoutMarginsDescription;
@property(readonly, nonatomic) NSString *_mapsui_preservedLayoutMarginsDescription;
@property(readonly, nonatomic) NSString *_mapsui_layoutMarginsDescription;
- (void)_mapsui_resetLayoutMarginsWithPreservesSuperview:(_Bool)arg1 insetsFromSafeArea:(_Bool)arg2;	// IMP=0x00100000000d9bbb
- (void)_mapsui_resetLayoutMarginsWithPreservesSuperview:(_Bool)arg1;	// IMP=0x00100000000d9ba7
- (void)_mapsui_resetLayoutMargins;	// IMP=0x00100000000d9b91

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
