//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BackgroundColorButton, MapsProgressButton, NSString, NavTrafficIncidentHeaderView, UILabel, UILayoutGuide, UIStackView;
@protocol MKArtworkImageSource, NavUserDecisionConfirmationViewDelegate;

@interface NavUserDecisionConfirmationView
{
    NavTrafficIncidentHeaderView *_headerView;	// 8 = 0x8
    id <NavUserDecisionConfirmationViewDelegate> _delegate;	// 16 = 0x10
    BackgroundColorButton *_cancelButton;	// 24 = 0x18
    MapsProgressButton *_confirmButton;	// 32 = 0x20
    UIStackView *_buttonsStackView;	// 40 = 0x28
    UILayoutGuide *_paddingGuide;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000813c18
@property(retain, nonatomic) UILayoutGuide *paddingGuide; // @synthesize paddingGuide=_paddingGuide;
@property(readonly, nonatomic) UIStackView *buttonsStackView; // @synthesize buttonsStackView=_buttonsStackView;
@property(retain, nonatomic) MapsProgressButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) BackgroundColorButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak id <NavUserDecisionConfirmationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapActionButton:(id)arg1;	// IMP=0x0010000000813b1f
- (void)_didTapCancelButton:(id)arg1;	// IMP=0x0010000000813ad3
@property(nonatomic) _Bool progressBarHidden;
@property(nonatomic) double completionProgress;
- (void)confirmButtonTitlesetCompletionProgress:(double)arg1;	// IMP=0x0010000000813955
@property(copy, nonatomic) NSString *confirmButtonTitle;
@property(copy, nonatomic) NSString *cancelButtonTitle;
@property(retain, nonatomic) id <MKArtworkImageSource> imageSource;
@property(readonly, nonatomic) UILabel *secondaryLabel;
@property(readonly, nonatomic) UILabel *primaryLabel;
- (id)_initialConstraints;	// IMP=0x0010000000813089
- (void)_customInit;	// IMP=0x0010000000812bc0
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000812b62
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000812af3

@end
