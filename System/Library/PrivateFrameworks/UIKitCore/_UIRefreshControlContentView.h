//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSAttributedString, UIColor, UIImpactFeedbackGenerator, UIRefreshControl;

__attribute__((visibility("hidden")))
@interface _UIRefreshControlContentView : UIView
{
    UIRefreshControl *_refreshControl;	// 144 = 0x90
    UIColor *_tintColor;	// 152 = 0x98
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00000000005f5b09
@property(retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator; // @synthesize impactFeedbackGenerator=_impactFeedbackGenerator;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
- (void)_removeAllAnimations;	// IMP=0x00000000005f5a97
- (double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;	// IMP=0x00000000005f5a8e
- (void)didTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x00000000005f5a88
- (void)willTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x00000000005f5a41
- (void)refreshControlInvalidatedSnappingHeight;	// IMP=0x00000000005f5a3b
@property(readonly, nonatomic) double maximumSnappingHeight;
@property(readonly, nonatomic) double minimumSnappingHeight;
@property(readonly, nonatomic) long long style;
@property(retain, nonatomic) NSAttributedString *attributedTitle;

@end

