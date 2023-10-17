//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSString, SKUITracklistColumnData, UIView;

__attribute__((visibility("hidden")))
@interface SKUITracklistHeaderCollectionViewCell
{
    UIView *_bottomSeparatorView;	// 8 = 0x8
    SKUITracklistColumnData *_columnData;	// 16 = 0x10
    NSMutableDictionary *_columnViews;	// 24 = 0x18
    UIView *_topSeparatorView;	// 32 = 0x20
}

+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;	// IMP=0x0010000000347b6c
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x0010000000347079
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0010000000346ea8
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x0010000000346e92
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x0010000000346e8a
+ (struct CGSize)sizeForHeaderTitleLabel:(id)arg1;	// IMP=0x0010000000346e2e
- (void).cxx_destruct;	// IMP=0x0000000000347d31
- (void)layoutSubviews;	// IMP=0x0000000000347669
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x0000000000347661
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000347659
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000347651
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x000000000034764b
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000347291
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000346c74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
