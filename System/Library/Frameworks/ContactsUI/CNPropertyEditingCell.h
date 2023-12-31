//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNRepeatingGradientSeparatorView, NSString, UIButton;

__attribute__((visibility("hidden")))
@interface CNPropertyEditingCell
{
    UIButton *_labelButton;	// 56 = 0x38
    CNRepeatingGradientSeparatorView *_vseparator;	// 64 = 0x40
}

+ (_Bool)wantsStandardConstraints;	// IMP=0x0010000000148b04
+ (_Bool)wantsChevron;	// IMP=0x0010000000148afc
- (void).cxx_destruct;	// IMP=0x0000000000148a9f
@property(retain, nonatomic) CNRepeatingGradientSeparatorView *vseparator; // @synthesize vseparator=_vseparator;
@property(readonly, nonatomic) UIButton *labelButton; // @synthesize labelButton=_labelButton;
- (void)regainFocus;	// IMP=0x0000000000148a2c
- (void)picker:(id)arg1 didDeleteItem:(id)arg2;	// IMP=0x0000000000148978
- (void)picker:(id)arg1 didPickItem:(id)arg2;	// IMP=0x000000000014885c
- (void)pickerDidCancel:(id)arg1;	// IMP=0x00000000001487ba
- (id)variableConstraints;	// IMP=0x00000000001480ad
- (id)constantConstraints;	// IMP=0x0000000000147e09
- (void)setVseparatorHidden:(_Bool)arg1;	// IMP=0x0000000000147dec
- (double)effectiveLabelWidth;	// IMP=0x0000000000147d2e
- (double)minCellHeight;	// IMP=0x0000000000147d20
- (double)leftValueMargin;	// IMP=0x0000000000147cf7
- (id)valueString;	// IMP=0x0000000000147ca7
- (void)setValueTextAttributes:(id)arg1;	// IMP=0x0000000000147b89
- (void)updateWithPropertyItem:(id)arg1;	// IMP=0x0000000000147945
- (void)labelButtonClicked:(id)arg1;	// IMP=0x00000000001477f0
- (id)labelView;	// IMP=0x00000000001476b5
- (void)dealloc;	// IMP=0x0000000000147640
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000014756a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

