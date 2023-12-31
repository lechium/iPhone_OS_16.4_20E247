//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIButton, UILabel;

@interface COSPasscodeChoiceViewController
{
    _Bool _passcodeSkipChallenged;	// 8 = 0x8
    UIButton *_acceptButton;	// 16 = 0x10
    UIButton *_declineButton;	// 24 = 0x18
    UILabel *_footerLabel;	// 32 = 0x20
}

+ (_Bool)controllerNeedsToRun;	// IMP=0x0040000000120864
- (void).cxx_destruct;	// IMP=0x00200000001209ee
@property(nonatomic) _Bool passcodeSkipChallenged; // @synthesize passcodeSkipChallenged=_passcodeSkipChallenged;
@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) UIButton *declineButton; // @synthesize declineButton=_declineButton;
@property(retain, nonatomic) UIButton *acceptButton; // @synthesize acceptButton=_acceptButton;
- (_Bool)legacyButtonStyles;	// IMP=0x001000000012085c
- (void)okayButtonPressed:(id)arg1;	// IMP=0x001000000012080b
- (id)detailTitleString;	// IMP=0x001000000012079f
- (id)okayButtonTitle;	// IMP=0x0010000000120733
- (id)alternateButtonTitle;	// IMP=0x00100000001206c7
- (id)suggestedButtonTitle;	// IMP=0x001000000012065b
- (void)applyConfirmedOptin:(_Bool)arg1;	// IMP=0x00100000001205d8
- (void)alternateButtonPressed:(id)arg1;	// IMP=0x0000000000120558
- (void)suggestedButtonPressed:(id)arg1;	// IMP=0x00100000001204d8
- (id)imageResource;	// IMP=0x001000000012042a
- (id)detailString;	// IMP=0x00100000001202cb
- (id)titleString;	// IMP=0x001000000012025f
- (_Bool)wantsLightenBlendedScreen;	// IMP=0x0010000000120257
- (id)init;	// IMP=0x0010000000120108

@end

