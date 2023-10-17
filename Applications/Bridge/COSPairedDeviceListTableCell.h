//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSTableCell.h>

@class COSPairedDeviceListCheckmark, COSWatchView, NSLayoutConstraint, UIImageView, UILabel, UIStackView;

@interface COSPairedDeviceListTableCell : PSTableCell
{
    _Bool _enabled;	// 120 = 0x78
    UIStackView *_horizontalStack;	// 128 = 0x80
    UIStackView *_labelStack;	// 136 = 0x88
    NSLayoutConstraint *_leadingSpaceConstraint;	// 144 = 0x90
    NSLayoutConstraint *_horizontalStackBottomConstraint;	// 152 = 0x98
    COSWatchView *_watchView;	// 160 = 0xa0
    UIImageView *_profileImageView;	// 168 = 0xa8
    UILabel *_watchName;	// 176 = 0xb0
    UILabel *_watchSubtitle;	// 184 = 0xb8
    UILabel *_watchBehavior;	// 192 = 0xc0
    UILabel *_watchMaterial;	// 200 = 0xc8
    UILabel *_watchSize;	// 208 = 0xd0
    UILabel *_watchMessage;	// 216 = 0xd8
    COSPairedDeviceListCheckmark *_checkmark;	// 224 = 0xe0
    unsigned long long _deviceState;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x00200000000da200
@property(nonatomic) unsigned long long deviceState; // @synthesize deviceState=_deviceState;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) COSPairedDeviceListCheckmark *checkmark; // @synthesize checkmark=_checkmark;
@property(retain, nonatomic) UILabel *watchMessage; // @synthesize watchMessage=_watchMessage;
@property(retain, nonatomic) UILabel *watchSize; // @synthesize watchSize=_watchSize;
@property(retain, nonatomic) UILabel *watchMaterial; // @synthesize watchMaterial=_watchMaterial;
@property(retain, nonatomic) UILabel *watchBehavior; // @synthesize watchBehavior=_watchBehavior;
@property(retain, nonatomic) UILabel *watchSubtitle; // @synthesize watchSubtitle=_watchSubtitle;
@property(retain, nonatomic) UILabel *watchName; // @synthesize watchName=_watchName;
@property(retain, nonatomic) UIImageView *profileImageView; // @synthesize profileImageView=_profileImageView;
@property(retain, nonatomic) COSWatchView *watchView; // @synthesize watchView=_watchView;
@property(retain, nonatomic) NSLayoutConstraint *horizontalStackBottomConstraint; // @synthesize horizontalStackBottomConstraint=_horizontalStackBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingSpaceConstraint; // @synthesize leadingSpaceConstraint=_leadingSpaceConstraint;
@property(retain, nonatomic) UIStackView *labelStack; // @synthesize labelStack=_labelStack;
@property(retain, nonatomic) UIStackView *horizontalStack; // @synthesize horizontalStack=_horizontalStack;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000d9f65
- (_Bool)canBeChecked;	// IMP=0x00100000000d9f5d
- (void)setLoading:(_Bool)arg1;	// IMP=0x00100000000d9f40
- (void)setChecked:(_Bool)arg1;	// IMP=0x00100000000d9f16
- (void)updateActiveWatchForFaceChange;	// IMP=0x00100000000d9ef9
- (void)refreshCellContentsWithSpecifier:(id)arg1;	// IMP=0x00100000000d8f90
- (void)layoutSubviews;	// IMP=0x00100000000d8f00
- (void)dealloc;	// IMP=0x00100000000d8eb3
- (void)updateCellLayout;	// IMP=0x00100000000d89e5
- (_Bool)_shouldUseSpaceConstrainedLayout;	// IMP=0x00100000000d88e4
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;	// IMP=0x00100000000d88b6
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x00100000000d789e

@end
