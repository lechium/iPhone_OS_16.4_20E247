//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SKUIViewElement, UILabel;

__attribute__((visibility("hidden")))
@interface SKUITextFooterSettingsHeaderFooterDescriptionView
{
    UILabel *_label;	// 8 = 0x8
    SKUIViewElement *_viewElement;	// 16 = 0x10
}

+ (id)_labelWithLabelElements:(id)arg1;	// IMP=0x0060000000322acf
+ (id)_labelElementsFromViewElement:(id)arg1;	// IMP=0x0060000000322aba
+ (id)_concatenateTextFromLabelElements:(id)arg1;	// IMP=0x00600000003228a7
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingsHeaderFooterDescription:(id)arg2 context:(id)arg3;	// IMP=0x0060000000322486
+ (void)requestLayoutForSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0060000000322480
+ (_Bool)prefetchResourcesForSettingsHeaderFooterDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x0060000000322478
+ (struct CGSize)preferredSizeForSettingsHeaderFooterDescription:(id)arg1 context:(id)arg2;	// IMP=0x0060000000322462
- (void).cxx_destruct;	// IMP=0x0000000000322ba7
- (void)layoutSubviews;	// IMP=0x00000000003226fb
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000003226f3
- (void)reloadWithSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000003225f8

@end
