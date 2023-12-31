//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CalendarModel, IdentitySwitcherCell, NSDictionary, NSString, UILabel, UISegmentedControl;
@protocol MasterNavigationPaletteDelegate;

@interface MasterNavigationPaletteView : UIView
{
    IdentitySwitcherCell *_identityCell;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    NSDictionary *_titleAttributes;	// 24 = 0x18
    _Bool _showIdentity;	// 32 = 0x20
    id <MasterNavigationPaletteDelegate> _delegate;	// 40 = 0x28
    UISegmentedControl *_segmentedControl;	// 48 = 0x30
    CalendarModel *_model;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000fc3c0
@property(nonatomic) CalendarModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool showIdentity; // @synthesize showIdentity=_showIdentity;
@property(nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(nonatomic) id <MasterNavigationPaletteDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cellTapped;	// IMP=0x00100000000fc304
- (void)updateIdentity:(id)arg1;	// IMP=0x00100000000fc192
@property(retain, nonatomic) NSString *title;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00100000000fbe08
- (void)layoutSubviews;	// IMP=0x00100000000fbab5
- (_Bool)showsHeader;	// IMP=0x00100000000fba6d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000fb970

@end

