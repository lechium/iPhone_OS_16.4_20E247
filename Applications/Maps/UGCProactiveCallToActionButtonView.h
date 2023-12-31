//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIButton;
@protocol UGCProactiveCallToActionButtonViewDelegate;

@interface UGCProactiveCallToActionButtonView : UIView
{
    NSString *_lookupIdentifier;	// 8 = 0x8
    id <UGCProactiveCallToActionButtonViewDelegate> _delegate;	// 16 = 0x10
    UIButton *_button;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000b38566
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) __weak id <UGCProactiveCallToActionButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *lookupIdentifier; // @synthesize lookupIdentifier=_lookupIdentifier;
- (void)_didTapOnButton;	// IMP=0x0010000000b384b7
- (void)_setupButton;	// IMP=0x0010000000b38307
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000b382aa

@end

