//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBTableWelcomeController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9SiriSetup31VoiceSelectionWelcomeController : OBTableWelcomeController
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *orbView;	// 24 = 0x18
    MISSING_TYPE *currentVoiceSelection;	// 32 = 0x20
    MISSING_TYPE *voiceOptionsView;	// 40 = 0x28
    MISSING_TYPE *voiceSelectionPresenter;	// 48 = 0x30
    MISSING_TYPE *continueButton;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000c710
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 adoptTableViewScrollView:(_Bool)arg4;	// IMP=0x000000000000c6c0
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 adoptTableViewScrollView:(_Bool)arg4;	// IMP=0x000000000000c680
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;	// IMP=0x000000000000c650
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3;	// IMP=0x000000000000c610
- (void)chooseForMeTapped;	// IMP=0x000000000000c540
- (void)continueTapped;	// IMP=0x000000000000c480

@end

