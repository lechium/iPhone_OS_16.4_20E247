//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class COSHorizontalCheckmarkChoiceView, COSWatchView, NRDevice, NSString, UIImageView, UITapGestureRecognizer;

@interface COSCrownOrientationChoiceViewController
{
    _Bool _selectedRightCrown;	// 8 = 0x8
    NRDevice *_observedDevice;	// 16 = 0x10
    COSWatchView *_watchesView;	// 24 = 0x18
    UITapGestureRecognizer *_watchTapRecognizer;	// 32 = 0x20
    COSHorizontalCheckmarkChoiceView *_choiceView;	// 40 = 0x28
    UIImageView *_sideBySideImageView;	// 48 = 0x30
}

+ (void)sendCrownOnRightChoiceToWatch:(_Bool)arg1;	// IMP=0x00200000000ca19b
+ (void)resumePairingDidFinishIPEWithSavedValue:(id)arg1;	// IMP=0x00100000000c902c
+ (void)resumePairingWithSavedValue:(id)arg1;	// IMP=0x00100000000c8ff8
+ (_Bool)controllerNeedsToRun;	// IMP=0x00100000000c8f7c
- (void).cxx_destruct;	// IMP=0x00200000000ca785
@property(retain, nonatomic) UIImageView *sideBySideImageView; // @synthesize sideBySideImageView=_sideBySideImageView;
@property(retain, nonatomic) COSHorizontalCheckmarkChoiceView *choiceView; // @synthesize choiceView=_choiceView;
@property(retain, nonatomic) UITapGestureRecognizer *watchTapRecognizer; // @synthesize watchTapRecognizer=_watchTapRecognizer;
@property(retain, nonatomic) COSWatchView *watchesView; // @synthesize watchesView=_watchesView;
@property(retain, nonatomic) NRDevice *observedDevice; // @synthesize observedDevice=_observedDevice;
@property(nonatomic) _Bool selectedRightCrown; // @synthesize selectedRightCrown=_selectedRightCrown;
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;	// IMP=0x00100000000ca514
- (void)selectedCrownOnRight:(_Bool)arg1;	// IMP=0x00100000000ca0a7
- (void)choiceView:(id)arg1 didSelectChoice:(unsigned long long)arg2;	// IMP=0x00100000000ca053
- (void)tappedCrownImage:(id)arg1;	// IMP=0x00100000000c9f79
- (void)suggestedButtonPressed:(id)arg1;	// IMP=0x00100000000c9bba
- (id)suggestedButtonTitle;	// IMP=0x00100000000c9b4e
- (id)detailString;	// IMP=0x00100000000c9ae2
- (id)titleString;	// IMP=0x00100000000c9a76
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000c99c7
- (id)sideBySideImageResource:(id)arg1;	// IMP=0x00100000000c9976
- (id)agaveSideBySideImage;	// IMP=0x00100000000c995d
- (id)preLuxoSideBySideImage;	// IMP=0x00100000000c9944
- (id)primarySideBySideImage;	// IMP=0x00100000000c992b
- (void)viewDidLoad;	// IMP=0x00100000000c9060
- (_Bool)requiresActivationCheck;	// IMP=0x00100000000c8f74
- (void)dealloc;	// IMP=0x00100000000c8eb4
- (id)init;	// IMP=0x00100000000c8e63

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
