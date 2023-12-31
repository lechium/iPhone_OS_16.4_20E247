//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class AKASAuthorizationProvider, ASCAuthorizationPresentationContext, NSString, UIImage, UIImageView, UILabel, UIStackView;
@protocol ASCLoginChoiceProtocol;

__attribute__((visibility("hidden")))
@interface ASCredentialRequestLoginChoiceCell : UITableViewCell
{
    id <ASCLoginChoiceProtocol> _loginChoice;	// 8 = 0x8
    ASCAuthorizationPresentationContext *_presentationContext;	// 16 = 0x10
    AKASAuthorizationProvider *_authorizationProvider;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_detailLabel;	// 40 = 0x28
    UIImageView *_iconImageView;	// 48 = 0x30
    UIStackView *_iconAndTextStackView;	// 56 = 0x38
    _Bool _isSelectedLoginChoice;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000030817
@property(nonatomic) _Bool isSelectedLoginChoice; // @synthesize isSelectedLoginChoice=_isSelectedLoginChoice;
- (double)_additionalLeadingSeparatorInset;	// IMP=0x00000000000307c9
- (void)_updateLayoutForCurrentContentSizeCategory;	// IMP=0x0000000000030653
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000030560
- (id)_selectedRadioButtonImage;	// IMP=0x0000000000030540
- (id)_emptyRadioButtonImage;	// IMP=0x00000000000304ac
- (void)_updateAccessoryImageView;	// IMP=0x0000000000030423
- (void)_setUpAccessoryImageView;	// IMP=0x0000000000030357
- (id)_defaultPasskeyIcon;	// IMP=0x000000000003033e
- (id)_cableIcon;	// IMP=0x00000000000302c1
- (id)_detailTextForExternalPasswordLoginChoice:(id)arg1;	// IMP=0x0000000000030153
- (id)_detailTextForPasswordLoginChoiceFromKeychain:(id)arg1;	// IMP=0x00000000000300b3
- (id)_detailTextForPasswordLoginChoice:(id)arg1;	// IMP=0x000000000002ff9a
@property(retain, nonatomic) NSString *detailText;
@property(retain, nonatomic) NSString *title;
- (id)_subtitleForPublicKeyCredentialAssertion;	// IMP=0x000000000002fe93
- (id)_titleForPublicKeyCredentialAssertionWithName:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000002fd45
- (id)_publicKeyCredentialImageForPresentationContext:(id)arg1;	// IMP=0x000000000002fd2c
- (void)_setUpContent;	// IMP=0x000000000002f2d1
- (void)_configureIconImageStyle;	// IMP=0x000000000002f293
- (_Bool)_shouldUseAppIconImageViewStyle;	// IMP=0x000000000002f227
- (void)_configureImageViewForAppIcon;	// IMP=0x000000000002f195
- (void)_configureImageViewForSymbolImage;	// IMP=0x000000000002f0d2
@property(retain, nonatomic) UIImage *iconImage;
- (void)_setUpFormat;	// IMP=0x000000000002e7c9
- (id)initWithLoginChoice:(id)arg1 presentationContext:(id)arg2 authorizationProvider:(id)arg3;	// IMP=0x000000000002e6bc

@end

