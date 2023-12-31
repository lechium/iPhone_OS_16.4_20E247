//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, SKUIAttributedStringView, UIImageView;

__attribute__((visibility("hidden")))
@interface SKUITomatoRatingView : UIView
{
    UIImageView *_imageView;	// 8 = 0x8
    SKUIAttributedStringView *_labelView;	// 16 = 0x10
}

+ (id)_tomatoImageForFreshness:(long long)arg1;	// IMP=0x0010000000358ba5
+ (id)_attributedStringForRating:(id)arg1 context:(id)arg2;	// IMP=0x0010000000358a38
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x001000000035844d
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0010000000358390
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x001000000035837a
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x0010000000358372
- (void).cxx_destruct;	// IMP=0x0000000000358c60
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000003589b9
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000035892b
- (void)layoutSubviews;	// IMP=0x00000000003587b1
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000003587a9
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000003587a1
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000358799
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000358793
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000358576

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

