//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, PDFPage, UIButton, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface PDFIconCollectionViewCell_iOS : UICollectionViewCell
{
    UIView *_overlayView;	// 8 = 0x8
    NSLayoutConstraint *_ratioConstraint;	// 16 = 0x10
    NSLayoutConstraint *_imageViewWidthConstraint;	// 24 = 0x18
    UIButton *_actionsButton;	// 32 = 0x20
    UIImageView *_imageView;	// 40 = 0x28
    PDFPage *_page;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000002ded9
@property(retain, nonatomic) PDFPage *page; // @synthesize page=_page;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIButton *actionsButton; // @synthesize actionsButton=_actionsButton;
- (void)setThumbnailWidth:(double)arg1;	// IMP=0x000000000002dcdd
- (void)updateAspectConstraintWithSize:(struct CGSize)arg1;	// IMP=0x000000000002daba
- (void)setupSubviews;	// IMP=0x000000000002cd71
- (void)updateOverlay;	// IMP=0x000000000002cd36
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000000002ccf5
- (void)prepareForReuse;	// IMP=0x000000000002cc37
- (void)setNeedsUpdate;	// IMP=0x000000000002cc31
- (void)_commonInit;	// IMP=0x000000000002cb55
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002cb09
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000002caac

@end

