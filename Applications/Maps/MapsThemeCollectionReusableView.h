//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, UIView;

@interface MapsThemeCollectionReusableView : UICollectionReusableView
{
    UIView *_contentView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000054fde6
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;	// IMP=0x001000000054fcf9
- (void)updateTheme;	// IMP=0x001000000054fcf3
- (void)didMoveToWindow;	// IMP=0x001000000054fc85
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000054fb63
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000054f9a6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

