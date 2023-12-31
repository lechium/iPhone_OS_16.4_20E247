//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSTableCell.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface PSUIDanglingPlanTableCell : PSTableCell
{
    UILabel *_nameLabel;	// 120 = 0x78
    UILabel *_numberLabel;	// 128 = 0x80
    UILabel *_statusLabel;	// 136 = 0x88
}

+ (long long)cellStyle;	// IMP=0x0060000000004483
- (void).cxx_destruct;	// IMP=0x000000000000558a
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (id)detailTextLabel;	// IMP=0x0000000000005513
- (id)textLabel;	// IMP=0x000000000000550b
- (void)refreshCellContentsWithSpecifier:(id)arg1;	// IMP=0x0000000000005075
- (void)_setLabel:(id)arg1 andPhoneNumber:(id)arg2;	// IMP=0x0000000000004f6c
- (_Bool)canBeChecked;	// IMP=0x0000000000004f64
- (_Bool)canReload;	// IMP=0x0000000000004f5c
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000000448e

@end

