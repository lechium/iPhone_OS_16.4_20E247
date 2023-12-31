//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILabel;
@protocol CNPropertyCellDelegate;

__attribute__((visibility("hidden")))
@interface CNGroupMembershipCell
{
    id <CNPropertyCellDelegate> _delegate;	// 8 = 0x8
    UILabel *_parentGroupNameLabel;	// 16 = 0x10
}

+ (_Bool)wantsHorizontalLayout;	// IMP=0x0060000000209f57
- (void).cxx_destruct;	// IMP=0x0000000000209f28
@property(readonly, nonatomic) UILabel *parentGroupNameLabel; // @synthesize parentGroupNameLabel=_parentGroupNameLabel;
@property(nonatomic) __weak id <CNPropertyCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateConstraints;	// IMP=0x0000000000209e80
- (void)setCardGroupItem:(id)arg1;	// IMP=0x0000000000209d69
- (id)labelView;	// IMP=0x0000000000209d1c
- (_Bool)allowsCellSelection;	// IMP=0x0000000000209d14

@end

