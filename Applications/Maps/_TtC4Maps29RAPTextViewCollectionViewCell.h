//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, TextViewWithPlaceholderText;
@protocol _TtP4Maps37RAPTextViewCollectionViewCellDelegate_;

@interface _TtC4Maps29RAPTextViewCollectionViewCell
{
    MISSING_TYPE *textView;	// 8 = 0x8
    MISSING_TYPE *delegate;	// 16 = 0x10
}

+ (id)reuseIdentifier;	// IMP=0x002000000000e610
- (void).cxx_destruct;	// IMP=0x004000000000ed70
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000ec80
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000000eba0
@property(nonatomic) __weak id <_TtP4Maps37RAPTextViewCollectionViewCellDelegate_> delegate; // @synthesize delegate;
@property(nonatomic, readonly) TextViewWithPlaceholderText *textView; // @synthesize textView;

@end

