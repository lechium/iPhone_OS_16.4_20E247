//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILabel;
@protocol CNPropertyCellDelegate;

__attribute__((visibility("hidden")))
@interface CNContactContainerCell
{
    id <CNPropertyCellDelegate> _delegate;	// 8 = 0x8
    UILabel *_accountLabel;	// 16 = 0x10
    UILabel *_accountNameLabel;	// 24 = 0x18
}

+ (_Bool)wantsChevron;	// IMP=0x00600000001ccb4e
- (void).cxx_destruct;	// IMP=0x00000000001ccb0e
@property(readonly, nonatomic) UILabel *accountNameLabel; // @synthesize accountNameLabel=_accountNameLabel;
@property(readonly, nonatomic) UILabel *accountLabel; // @synthesize accountLabel=_accountLabel;
@property(nonatomic) __weak id <CNPropertyCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateConstraints;	// IMP=0x00000000001cca1d
- (void)setCardGroupItem:(id)arg1;	// IMP=0x00000000001cc618
- (void)performDefaultAction;	// IMP=0x00000000001cc5a4
- (_Bool)shouldPerformDefaultAction;	// IMP=0x00000000001cc59c
- (id)valueView;	// IMP=0x00000000001cc54f
- (id)labelView;	// IMP=0x00000000001cc502

@end

