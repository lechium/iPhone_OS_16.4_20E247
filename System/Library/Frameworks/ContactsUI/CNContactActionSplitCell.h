//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIButton;

__attribute__((visibility("hidden")))
@interface CNContactActionSplitCell
{
    UIButton *_leftLabel;	// 8 = 0x8
    UIButton *_rightLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006e7cf
@property(readonly, nonatomic) UIButton *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(readonly, nonatomic) UIButton *leftLabel; // @synthesize leftLabel=_leftLabel;
- (void)_setupButton:(id)arg1 forAction:(id)arg2;	// IMP=0x000000000006e65f
- (id)constantConstraints;	// IMP=0x000000000006e3d4
- (void)setLabelTextAttributes:(id)arg1;	// IMP=0x000000000006e35e
- (id)rightMostView;	// IMP=0x000000000006e349
- (id)labelView;	// IMP=0x000000000006e2fc
- (double)minCellHeight;	// IMP=0x000000000006e2ee
- (id)standardButton;	// IMP=0x000000000006e192
- (void)setCardGroupItem:(id)arg1;	// IMP=0x000000000006df72
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000006de79

@end
