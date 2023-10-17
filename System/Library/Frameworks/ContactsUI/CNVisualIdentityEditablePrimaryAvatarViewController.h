//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CAShapeLayer, CNPhotoPickerProviderItem, CNPhotoPickerVariantsManager, CNVisualIdentityEditablePrimaryAvatarTextField, NSString, UIFont, UIImageView, UIView;
@protocol CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNVisualIdentityEditablePrimaryAvatarViewController : UIViewController
{
    id <CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate> _delegate;	// 8 = 0x8
    double _desiredFontSize;	// 16 = 0x10
    CNPhotoPickerProviderItem *_providerItem;	// 24 = 0x18
    UIImageView *_imageContainerView;	// 32 = 0x20
    CNVisualIdentityEditablePrimaryAvatarTextField *_textField;	// 40 = 0x28
    UIFont *_originalFont;	// 48 = 0x30
    CAShapeLayer *_clippingLayer;	// 56 = 0x38
    UIView *_imageContentView;	// 64 = 0x40
    CNPhotoPickerVariantsManager *_variantsManager;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000001c8221
@property(retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager; // @synthesize variantsManager=_variantsManager;
@property(retain, nonatomic) UIView *imageContentView; // @synthesize imageContentView=_imageContentView;
@property(retain, nonatomic) CAShapeLayer *clippingLayer; // @synthesize clippingLayer=_clippingLayer;
@property(retain, nonatomic) UIFont *originalFont; // @synthesize originalFont=_originalFont;
@property(retain, nonatomic) CNVisualIdentityEditablePrimaryAvatarTextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIImageView *imageContainerView; // @synthesize imageContainerView=_imageContainerView;
@property(retain, nonatomic) CNPhotoPickerProviderItem *providerItem; // @synthesize providerItem=_providerItem;
@property(nonatomic) double desiredFontSize; // @synthesize desiredFontSize=_desiredFontSize;
@property(nonatomic) __weak id <CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutPrimaryAvatar;	// IMP=0x00000000001c80bb
- (_Bool)primaryAvatarShouldDisplay;	// IMP=0x00000000001c8088
- (void)updatePrimaryAvatarForVisualIdentity:(id)arg1;	// IMP=0x00000000001c7f14
- (id)viewForPrimaryAvatar;	// IMP=0x00000000001c7f02
- (void)centerTextFieldInContainerView;	// IMP=0x00000000001c7d09
- (double)maxTextFieldSize;	// IMP=0x00000000001c7cb1
- (_Bool)exceedsMaxCharacterCount:(long long)arg1 containsEmoji:(_Bool)arg2;	// IMP=0x00000000001c7c9b
- (_Bool)hasValidInputTypeForText:(id)arg1;	// IMP=0x00000000001c7c22
- (void)trimTextFieldTextIfNeeded:(id)arg1 containsEmoji:(_Bool)arg2;	// IMP=0x00000000001c7ba2
- (void)trimTextFieldTextIfNeeded:(id)arg1;	// IMP=0x00000000001c7b19
- (void)adjustFontSizeToFitWidthForText:(id)arg1;	// IMP=0x00000000001c7592
- (void)textViewDidEndEditing:(id)arg1;	// IMP=0x00000000001c74f5
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;	// IMP=0x00000000001c71cf
- (id)updatedProviderItemWithText:(id)arg1;	// IMP=0x00000000001c70e5
- (id)updatedProviderItem;	// IMP=0x00000000001c7065
- (void)updateContainerViewMask;	// IMP=0x00000000001c6e1b
- (_Bool)isMonogramProviderItemType;	// IMP=0x00000000001c6dd2
- (_Bool)isEmojiProviderItemType;	// IMP=0x00000000001c6d89
- (void)updateTextFieldFontSize:(double)arg1;	// IMP=0x00000000001c6c34
- (void)setupTextField;	// IMP=0x00000000001c6920
- (void)setupImageContainerView;	// IMP=0x00000000001c674e
- (void)populateViewWithTextEditableProviderItem:(id)arg1 imageType:(unsigned long long)arg2;	// IMP=0x00000000001c645e
- (void)updateViewWithProviderItem:(id)arg1;	// IMP=0x00000000001c632c
- (void)setupViewWithProviderItem:(id)arg1;	// IMP=0x00000000001c61b9
- (void)endEditing;	// IMP=0x00000000001c6116
- (void)beginEditing;	// IMP=0x00000000001c60d9
- (void)updateWithProviderItem:(id)arg1;	// IMP=0x00000000001c6084
@property(readonly, nonatomic) NSString *text;
- (void)viewDidLayoutSubviews;	// IMP=0x00000000001c5c0b
- (void)viewDidLoad;	// IMP=0x00000000001c5ad4
- (id)initWithProviderItem:(id)arg1 variantsManager:(id)arg2;	// IMP=0x00000000001c5a1f
- (id)initWithVariantsManager:(id)arg1;	// IMP=0x00000000001c5a08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
