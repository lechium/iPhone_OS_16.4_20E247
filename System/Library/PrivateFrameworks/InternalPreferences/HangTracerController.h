//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class NSString, PSSpecifier;

__attribute__((visibility("hidden")))
@interface HangTracerController : PSListController
{
    float _hudThresholdMS;	// 192 = 0xc0
    PSSpecifier *_hangtracerExplanation;	// 200 = 0xc8
    PSSpecifier *_emptyGap;	// 208 = 0xd0
    PSSpecifier *_hudTitle;	// 216 = 0xd8
    PSSpecifier *_enabledHUD;	// 224 = 0xe0
    PSSpecifier *_hudThresholdText;	// 232 = 0xe8
    PSSpecifier *_hudThresholdSlider;	// 240 = 0xf0
    PSSpecifier *_hudThresholdLabel;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x0000000000002ff4
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000002e54
- (void)handleSliderTouchUpEvent:(id)arg1;	// IMP=0x0000000000002daa
- (void)handleSliderChangedEvent:(id)arg1;	// IMP=0x0000000000002ca7
- (id)specifiers;	// IMP=0x000000000000278e
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00000000000026cd
- (id)hudThresholdText:(id)arg1;	// IMP=0x000000000000269f
- (id)hudThreshold:(id)arg1;	// IMP=0x0000000000002677
- (void)setHUDThreshold:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000002671
- (void)updateHUDThreshold:(float)arg1;	// IMP=0x00000000000025da
- (void)setHUDEnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000024fc
- (id)isEnabledHUD:(id)arg1;	// IMP=0x000000000000249f
- (id)init;	// IMP=0x000000000000235f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
