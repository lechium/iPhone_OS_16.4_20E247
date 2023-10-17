//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID, OKMediaFeederPhotoKit, OKPresentationViewController, OKProducerPreset, PHAssetCollection, PHFetchResult, PUSlideshowContextRegistry, PUSlideshowSettingsViewModel, PUSlideshowViewModel;

__attribute__((visibility("hidden")))
@interface PUSlideshowSession : NSObject
{
    OKMediaFeederPhotoKit *_mediaFeeder;	// 8 = 0x8
    PUSlideshowContextRegistry *_contextRegistry;	// 16 = 0x10
    OKProducerPreset *_currentPreset;	// 24 = 0x18
    _Bool __disablingIdleTimer;	// 32 = 0x20
    _Bool _didStartOnce;	// 33 = 0x21
    PHFetchResult *_fetchResult;	// 40 = 0x28
    PHAssetCollection *_assetCollection;	// 48 = 0x30
    PUSlideshowViewModel *_viewModel;	// 56 = 0x38
    PUSlideshowSettingsViewModel *_settingsViewModel;	// 64 = 0x40
    OKPresentationViewController *_presentationViewController;	// 72 = 0x48
    id __disablingIdleTimerToken;	// 80 = 0x50
    NSUUID *_uuid;	// 88 = 0x58
    long long _currentState;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000475dcd
@property(nonatomic) _Bool didStartOnce; // @synthesize didStartOnce=_didStartOnce;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic, setter=_setDisablingIdleTimerToken:) id _disablingIdleTimerToken; // @synthesize _disablingIdleTimerToken=__disablingIdleTimerToken;
@property(nonatomic, setter=_setDisablingIdleTimer:) _Bool _disablingIdleTimer; // @synthesize _disablingIdleTimer=__disablingIdleTimer;
@property(readonly, nonatomic) OKPresentationViewController *presentationViewController; // @synthesize presentationViewController=_presentationViewController;
@property(readonly, nonatomic) PUSlideshowSettingsViewModel *settingsViewModel; // @synthesize settingsViewModel=_settingsViewModel;
@property(readonly, nonatomic) PUSlideshowViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(readonly, nonatomic) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
- (void)_endDisablingIdleTimerIfNecessary;	// IMP=0x0000000000475cca
- (void)_beginDisablingIdleTimer;	// IMP=0x0000000000475c0f
- (void)_slideshowSettingsViewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x00000000004759c0
- (void)_slideshowViewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x00000000004758e5
- (void)_updateCurrentState;	// IMP=0x000000000047588c
- (void)_invalidateCurrentState;	// IMP=0x000000000047587a
- (void)_addCurrentSettingsToPayload:(id)arg1;	// IMP=0x00000000004755dd
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x0000000000475133
- (void)_configurePresentationViewController:(id)arg1;	// IMP=0x0000000000474e8c
- (id)_resolutionSizes;	// IMP=0x0000000000474cfc
- (void)unregisterSlideshowDisplayContext:(id)arg1;	// IMP=0x0000000000474c8c
- (void)registerSlideshowDisplayContext:(id)arg1;	// IMP=0x0000000000474c4d
- (void)_distributeSlideshowDisplayContextWithPresentationController:(id)arg1;	// IMP=0x00000000004749e0
- (void)updatePresentationViewController;	// IMP=0x00000000004746b6
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x000000000047444d
- (void)dealloc;	// IMP=0x00000000004743d1
- (id)initWithFetchResult:(id)arg1 assetCollection:(id)arg2;	// IMP=0x00000000004743bc
- (id)initWithFetchResult:(id)arg1 assetCollection:(id)arg2 startIndex:(unsigned long long)arg3;	// IMP=0x0000000000473ff6
- (id)init;	// IMP=0x0000000000473f5f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
