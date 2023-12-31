//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, PinView, _UIBackdropView;

@interface PinViewController
{
    NSNumber *_pinLength;	// 8 = 0x8
    PinView *_pinView;	// 16 = 0x10
    _UIBackdropView *_blurView;	// 24 = 0x18
    long long _currentInterfaceStyle;	// 32 = 0x20
    _Bool _ctkPin;	// 40 = 0x28
    NSNumber *_pinMaxLength;	// 48 = 0x30
    NSNumber *_pinMinLength;	// 56 = 0x38
    NSNumber *_pinCharset;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000001505e
@property(readonly, nonatomic) _Bool ctkPin; // @synthesize ctkPin=_ctkPin;
@property(readonly, nonatomic) NSNumber *pinCharset; // @synthesize pinCharset=_pinCharset;
@property(readonly, nonatomic) NSNumber *pinMinLength; // @synthesize pinMinLength=_pinMinLength;
@property(readonly, nonatomic) NSNumber *pinMaxLength; // @synthesize pinMaxLength=_pinMaxLength;
- (void)pinCancelled;	// IMP=0x0010000000015009
- (void)pinEntered:(id)arg1;	// IMP=0x0010000000014eee
- (void)didReceiveAuthenticationData;	// IMP=0x0010000000014bc4
- (void)_updateCurrentAppearanceIfNeeded;	// IMP=0x0010000000014ae3
- (void)viewDidLayoutSubviews;	// IMP=0x0010000000014aa2
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000014a59
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000014a10
- (long long)_backdropStyle;	// IMP=0x00100000000149b2
- (id)_createBlurView;	// IMP=0x00100000000148dc
- (void)loadView;	// IMP=0x00100000000145ea

@end

