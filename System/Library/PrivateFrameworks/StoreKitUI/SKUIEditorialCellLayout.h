//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUICellLayout.h"

@class NSString, SKUIEditorialLinkView, SKUITextBoxView;

__attribute__((visibility("hidden")))
@interface SKUIEditorialCellLayout : SKUICellLayout
{
    struct UIEdgeInsets _contentInset;	// 8 = 0x8
    double _linkSpacing;	// 40 = 0x28
    SKUIEditorialLinkView *_linkView;	// 48 = 0x30
    SKUITextBoxView *_textBoxView;	// 56 = 0x38
    double _totalHeight;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000002fdd94
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (id)_textBoxView;	// IMP=0x00000000002fdbdd
- (id)_linkView;	// IMP=0x00000000002fdad4
- (void)editorialLinkView:(id)arg1 didSelectLink:(id)arg2;	// IMP=0x00000000002fda13
- (void)setColoringWithColorScheme:(id)arg1;	// IMP=0x00000000002fd973
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000002fd8e5
- (void)layoutSubviews;	// IMP=0x00000000002fd690
@property(readonly, nonatomic) SKUITextBoxView *textBoxView;
- (void)applyEditorialLayout:(id)arg1 withOrientation:(long long)arg2 expanded:(_Bool)arg3;	// IMP=0x00000000002fd387
- (void)resetContentInset;	// IMP=0x00000000002fd375
- (void)dealloc;	// IMP=0x00000000002fd32a
- (id)initWithParentView:(id)arg1;	// IMP=0x00000000002fd2de
- (id)initWithCollectionViewCell:(id)arg1;	// IMP=0x00000000002fd292
- (void)_initContentInset;	// IMP=0x00000000002fd275

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
