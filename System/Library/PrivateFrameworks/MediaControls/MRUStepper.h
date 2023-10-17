//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MRUTransportButton, MRUVisualStylingProvider, NSString, UIImage, UIImageSymbolConfiguration;
@protocol MRUStepperDelegate;

__attribute__((visibility("hidden")))
@interface MRUStepper : UIView
{
    _Bool _dimmed;	// 8 = 0x8
    id <MRUStepperDelegate> _delegate;	// 16 = 0x10
    UIImage *_decrementImage;	// 24 = 0x18
    UIImage *_incrementImage;	// 32 = 0x20
    MRUVisualStylingProvider *_stylingProvider;	// 40 = 0x28
    UIImageSymbolConfiguration *_preferredSymbolConfiguration;	// 48 = 0x30
    UIView *_decrementBackground;	// 56 = 0x38
    UIView *_incrementBackground;	// 64 = 0x40
    MRUTransportButton *_decrementButton;	// 72 = 0x48
    MRUTransportButton *_incrementButton;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000002461b
@property(retain, nonatomic) MRUTransportButton *incrementButton; // @synthesize incrementButton=_incrementButton;
@property(retain, nonatomic) MRUTransportButton *decrementButton; // @synthesize decrementButton=_decrementButton;
@property(retain, nonatomic) UIView *incrementBackground; // @synthesize incrementBackground=_incrementBackground;
@property(retain, nonatomic) UIView *decrementBackground; // @synthesize decrementBackground=_decrementBackground;
@property(nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration; // @synthesize preferredSymbolConfiguration=_preferredSymbolConfiguration;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(retain, nonatomic) UIImage *incrementImage; // @synthesize incrementImage=_incrementImage;
@property(retain, nonatomic) UIImage *decrementImage; // @synthesize decrementImage=_decrementImage;
@property(nonatomic) __weak id <MRUStepperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateVisualStyling;	// IMP=0x00000000000244a5
- (void)visualStylingProviderDidChange:(id)arg1;	// IMP=0x0000000000024493
- (void)increaseButtonHoldReleased:(id)arg1;	// IMP=0x0000000000024441
- (void)increaseButtonHoldBegan:(id)arg1;	// IMP=0x00000000000243ef
- (void)increaseTouchUpInside:(id)arg1;	// IMP=0x0000000000024392
- (void)decreaseButtonHoldReleased:(id)arg1;	// IMP=0x0000000000024340
- (void)decreaseButtonHoldBegan:(id)arg1;	// IMP=0x000000000002430a
- (void)decreaseTouchUpInside:(id)arg1;	// IMP=0x00000000000242ad
- (void)layoutSubviews;	// IMP=0x0000000000023cef
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000023a56

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
