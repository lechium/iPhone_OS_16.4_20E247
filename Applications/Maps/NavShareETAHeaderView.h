//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, UILabel;

@interface NavShareETAHeaderView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_subtitleLabel;	// 16 = 0x10
    NSArray *_activeContacts;	// 24 = 0x18
}

- (void);	// IMP=0x00200000003cbf2c
@property(retain, nonatomic) NSArray *activeContacts; // @synthesize activeContacts=_activeContacts;
- (void)_updateText;	// IMP=0x00100000003cbb63
- (id)_effectiveTraitCollection;	// IMP=0x00100000003cba6c
- (id)_maximumContentSizeCategory;	// IMP=0x00100000003cba58
- (void)_updateFonts;	// IMP=0x00100000003cb98a
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000003cb89f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000003cb25f

@end

