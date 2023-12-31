//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class KeyboardAvoidingView, NSLayoutConstraint, UIButton, UIStackView;
@protocol SearchNoResultsTableViewCellDelegate;

@interface SearchNoResultsTableViewCell : UITableViewCell
{
    _Bool _enableStructuredRAPAffordance;	// 8 = 0x8
    id <SearchNoResultsTableViewCellDelegate> _delegate;	// 16 = 0x10
    KeyboardAvoidingView *_keyboardAvoidingView;	// 24 = 0x18
    NSLayoutConstraint *_heightConstraint;	// 32 = 0x20
    UIStackView *_stackView;	// 40 = 0x28
    UIButton *_rapButton;	// 48 = 0x30
}

+ (id)identifier;	// IMP=0x0040000000313809
- (void).cxx_destruct;	// IMP=0x0020000000313d96
@property(retain, nonatomic) UIButton *rapButton; // @synthesize rapButton=_rapButton;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) KeyboardAvoidingView *keyboardAvoidingView; // @synthesize keyboardAvoidingView=_keyboardAvoidingView;
@property(nonatomic) __weak id <SearchNoResultsTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enableStructuredRAPAffordance; // @synthesize enableStructuredRAPAffordance=_enableStructuredRAPAffordance;
- (void)layoutSubviews;	// IMP=0x0010000000313c5b
- (void)_didTapOnRAPButton;	// IMP=0x0010000000313c1e
- (void)_removeRAPButton;	// IMP=0x0010000000313bd0
- (void)_addRAPButton;	// IMP=0x0010000000313ba5
- (void)setHeightConstraint:(double)arg1 withPriority:(float)arg2;	// IMP=0x0010000000313877
- (void)clearHeightConstraint;	// IMP=0x001000000031381b
- (void)setupSubviews;	// IMP=0x0010000000312f1e
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000312e91

@end

