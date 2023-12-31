//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CARDebugCollectionConfig, NSString, UIImageView;

@interface CARDebugCollectionView : UIView
{
    _Bool _cellFocused;	// 8 = 0x8
    _Bool _actioned;	// 9 = 0x9
    CARDebugCollectionConfig *_config;	// 16 = 0x10
    UIImageView *_selectedImageView;	// 24 = 0x18
    UIImageView *_actionedImageView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000001ff43
@property(retain, nonatomic) UIImageView *actionedImageView; // @synthesize actionedImageView=_actionedImageView;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(nonatomic) _Bool actioned; // @synthesize actioned=_actioned;
@property(retain, nonatomic) CARDebugCollectionConfig *config; // @synthesize config=_config;
@property(nonatomic, getter=isCellFocused) _Bool cellFocused; // @synthesize cellFocused=_cellFocused;
@property(nonatomic, getter=isCellHighlighted) _Bool cellHighlighted;
@property(nonatomic, getter=isCellSelected) _Bool cellSelected;
- (void)_updateColors;	// IMP=0x001000000001fceb
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;	// IMP=0x001000000001fc91
- (struct CGSize)intrinsicContentSize;	// IMP=0x001000000001fc37
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000001fc25
- (_Bool)canBecomeFocused;	// IMP=0x001000000001fc1d
- (void)action;	// IMP=0x001000000001fb82
- (id)initWithConfig:(id)arg1 color:(id)arg2;	// IMP=0x001000000001f548

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

