//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UITextView;

@interface TextViewTableViewCell : UITableViewCell
{
    UITextView *_textView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000601c65
@property(readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void)setupConstraints;	// IMP=0x001000000060183e
- (void)configureToolbar;	// IMP=0x00100000006016ca
- (void)doneButtonTapped:(id)arg1;	// IMP=0x001000000060168d
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;	// IMP=0x001000000060163c
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000601553

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

