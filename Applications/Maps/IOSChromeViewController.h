//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface IOSChromeViewController
{
    id _luminanceChromeDeactivationToken;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0010000000bb6830
- (struct UIEdgeInsets)mapAttributionInsets;	// IMP=0x0010000000bb672d
- (id)createMapReplacementView;	// IMP=0x0010000000bb664f
- (void)_acquireChromeDeactivationTokenForLuminanceIfNeeded;	// IMP=0x0010000000bb65b9
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000bb6510
- (void)lightLevelController:(id)arg1 didUpdateLightLevel:(long long)arg2;	// IMP=0x0010000000bb63eb
- (id)preferredFocusEnvironments;	// IMP=0x0010000000bb6360
- (void)_updateOverlayVisibilityWithCurrentContainerStyle:(unsigned long long)arg1 progress:(double)arg2;	// IMP=0x0010000000bb6010
- (void)contextStackDidUpdateFrom:(id)arg1 to:(id)arg2 withAnimation:(id)arg3;	// IMP=0x0010000000bb5dd1
- (void)contextStackWillUpdateFrom:(id)arg1 to:(id)arg2 withAnimation:(id)arg3;	// IMP=0x0010000000bb5caa
- (void)viewDidLoad;	// IMP=0x0010000000bb5c28
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0010000000bb5b02
- (id)keyCommands;	// IMP=0x0010000000bb5970
- (void)initKeyCommand;	// IMP=0x00100000000e32d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
