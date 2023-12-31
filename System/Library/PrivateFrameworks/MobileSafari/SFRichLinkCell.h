//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class LPLinkMetadata, LPLinkView, NSString, UIView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface SFRichLinkCell : UICollectionViewCell
{
    UIVisualEffectView *_linkBackgroundView;	// 8 = 0x8
    UIView *_linkViewContainer;	// 16 = 0x10
    LPLinkView *_linkView;	// 24 = 0x18
}

+ (id)reuseIdentifier;	// IMP=0x00100000000d2809
- (void).cxx_destruct;	// IMP=0x00000000000d310f
- (_Bool)shouldShowContextMenuFromPoint:(struct CGPoint)arg1;	// IMP=0x00000000000d30aa
@property(copy, nonatomic) LPLinkMetadata *metadata;
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000000d2f58
- (void)_updateVibrancy;	// IMP=0x00000000000d2f3b
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000d2e89
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;	// IMP=0x00000000000d2ddd
@property(readonly, nonatomic) UIView *contextMenuPreviewView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000d2d99
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d2d6a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000d2816

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

