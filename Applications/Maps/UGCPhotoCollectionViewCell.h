//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIActivityIndicatorView, UIButton, UIHoverGestureRecognizer, UIImage, UIImageView, UIView;
@protocol UGCPhotoCollectionViewCellDelegate;

@interface UGCPhotoCollectionViewCell : UICollectionViewCell
{
    UIButton *_closeButton;	// 8 = 0x8
    UIView *_closeButtonBlurView;	// 16 = 0x10
    UIActivityIndicatorView *_spinner;	// 24 = 0x18
    UIHoverGestureRecognizer *_hoverGestureRecognizer;	// 32 = 0x20
    _Bool _hoverActive;	// 40 = 0x28
    NSString *_identifier;	// 48 = 0x30
    id <UGCPhotoCollectionViewCellDelegate> _delegate;	// 56 = 0x38
    UIImageView *_contentImageView;	// 64 = 0x40
}

+ (id)reuseIdentifier;	// IMP=0x00200000009d30f6
- (void).cxx_destruct;	// IMP=0x00200000009d322d
@property(nonatomic) _Bool hoverActive; // @synthesize hoverActive=_hoverActive;
@property(retain, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(nonatomic) __weak id <UGCPhotoCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)endAnimatingActivityIndicatorWithError:(id)arg1;	// IMP=0x00100000009d3189
- (void)beginAnimatingActivityIndicator;	// IMP=0x00100000009d316c
- (void)prepareForReuse;	// IMP=0x00100000009d3103
- (void)_cancelButtonPressed;	// IMP=0x00100000009d30aa
- (id)imageView;	// IMP=0x00100000009d3095
@property(retain, nonatomic) UIImage *image;
- (void)_handleHover:(id)arg1;	// IMP=0x00100000009d2f83
- (void)_setupConstraints;	// IMP=0x00100000009d2784
- (void)_setupSubviews;	// IMP=0x00100000009d2445
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000009d213f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

