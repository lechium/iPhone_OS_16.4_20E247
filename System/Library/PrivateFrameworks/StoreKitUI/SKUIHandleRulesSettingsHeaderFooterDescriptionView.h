//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, SKUIHandleRulesSettingsHeaderFooterDescription, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIHandleRulesSettingsHeaderFooterDescriptionView
{
    NSMutableArray *_buttons;	// 8 = 0x8
    SKUIHandleRulesSettingsHeaderFooterDescription *_description;	// 16 = 0x10
    UILabel *_label;	// 24 = 0x18
}

+ (id)_labelWithDescription:(id)arg1 forWidth:(double)arg2;	// IMP=0x0060000000366db6
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 settingsHeaderFooterDescription:(id)arg2 context:(id)arg3;	// IMP=0x0060000000366a27
+ (void)requestLayoutForSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0060000000366a21
+ (struct CGSize)preferredSizeForSettingsHeaderFooterDescription:(id)arg1 context:(id)arg2;	// IMP=0x0060000000366a0b
+ (_Bool)prefetchResourcesForSettingsHeaderFooterDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x0060000000366a03
- (void).cxx_destruct;	// IMP=0x0000000000366f30
- (void)layoutSubviews;	// IMP=0x0000000000366bc7
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000366bbf
- (void)reloadWithSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000366b1b

@end
