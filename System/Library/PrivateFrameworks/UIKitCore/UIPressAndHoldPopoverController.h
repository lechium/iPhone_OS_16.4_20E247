//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TUIPressAndHoldView;

__attribute__((visibility("hidden")))
@interface UIPressAndHoldPopoverController
{
    TUIPressAndHoldView *_pressAndHoldView;	// 8 = 0x8
}

+ (_Bool)canPresentPressAndHoldPopoverForKeyString:(id)arg1;	// IMP=0x0010000000003020
+ (_Bool)canPresentPressAndHoldPopoverForEvent:(id)arg1;	// IMP=0x0010000000002f85
- (void).cxx_destruct;	// IMP=0x0000000000003518
- (void)insertSelectedAccentVariant:(id)arg1 shouldDismissPopover:(_Bool)arg2;	// IMP=0x000000000000345b
- (void)pressAndHoldViewDidAcceptAccentVariant:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000003444
- (void)showAccentVariantInForwardDirection:(_Bool)arg1;	// IMP=0x00000000000033dd
- (_Bool)hasAccentVariantInForwardDirection:(_Bool)arg1;	// IMP=0x00000000000033c0
- (_Bool)handleKeyInputForAccentSelector:(id)arg1;	// IMP=0x00000000000032c4
- (_Bool)handleSelectionEvent:(id)arg1;	// IMP=0x000000000000324b
- (_Bool)handleKeyInputForPressAndHoldSelector:(id)arg1;	// IMP=0x000000000000310e
- (_Bool)isSamePressAndHoldPopoverForKeyString:(id)arg1;	// IMP=0x000000000000308f
- (_Bool)handleHardwareKeyboardEvent:(id)arg1;	// IMP=0x0000000000002f10
- (id)initWithKeyString:(id)arg1;	// IMP=0x0000000000002d3e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
