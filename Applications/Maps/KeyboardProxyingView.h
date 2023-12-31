//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSObject;
@protocol KeyboardProxyingViewDelegate;

@interface KeyboardProxyingView : UIView
{
    _Bool _shouldAppearFocused;	// 8 = 0x8
    NSObject<KeyboardProxyingViewDelegate> *_delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000295604
@property(readonly, nonatomic) _Bool shouldAppearFocused; // @synthesize shouldAppearFocused=_shouldAppearFocused;
@property(nonatomic) __weak NSObject<KeyboardProxyingViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000295511
- (_Bool)isHeadingDirectional:(unsigned long long)arg1;	// IMP=0x0010000000295505
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x0010000000295470
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00100000002953d0
- (_Bool)canBecomeFirstResponder;	// IMP=0x00100000002953c8
- (_Bool)canBecomeFocused;	// IMP=0x00100000002953c0
- (id)focusEffect;	// IMP=0x00100000002953b8
- (struct CGSize)intrinsicContentSize;	// IMP=0x00100000002953a7
- (void)dealloc;	// IMP=0x0010000000295323
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000002952d3

@end

