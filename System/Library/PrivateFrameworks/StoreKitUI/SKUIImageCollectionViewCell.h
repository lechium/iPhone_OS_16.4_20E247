//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SKUIImageView;

__attribute__((visibility("hidden")))
@interface SKUIImageCollectionViewCell
{
    SKUIImageView *_highlightImageView;	// 8 = 0x8
    id _imageRequestCacheKey;	// 16 = 0x10
    _Bool _showsReflectionImage;	// 24 = 0x18
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x001000000000e8c2
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x001000000000e8a9
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x001000000000e88c
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x001000000000e79d
- (void).cxx_destruct;	// IMP=0x000000000000f3ae
@property(nonatomic) _Bool showsReflectionImage; // @synthesize showsReflectionImage=_showsReflectionImage;
- (void)_reloadHighlightImageView;	// IMP=0x000000000000f007
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000000000efc6
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000000ef85
- (void)layoutSubviews;	// IMP=0x000000000000eca5
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x000000000000ec9d
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000000ec95
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x000000000000eaab
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000000e914
- (void)reloadWithCarouselItem:(id)arg1 size:(struct CGSize)arg2 context:(id)arg3;	// IMP=0x000000000000e367

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
