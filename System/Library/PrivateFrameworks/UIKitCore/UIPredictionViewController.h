//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class NSArray, NSDate, NSString, NSTimer, TIAutocorrectionList, TUIPredictionView;

__attribute__((visibility("hidden")))
@interface UIPredictionViewController : UIViewController
{
    NSTimer *_updateUITimer;	// 8 = 0x8
    NSDate *_lastUIUpdateTime;	// 16 = 0x10
    TUIPredictionView *_predictionView;	// 24 = 0x18
    TIAutocorrectionList *_cachedAutocorrectionList;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000014df0f3
@property(retain, nonatomic) TIAutocorrectionList *cachedAutocorrectionList; // @synthesize cachedAutocorrectionList=_cachedAutocorrectionList;
@property(readonly, nonatomic) TUIPredictionView *predictionView; // @synthesize predictionView=_predictionView;
- (void)predictionView:(id)arg1 didSelectCandidate:(id)arg2;	// IMP=0x00000000014ded92
- (void)autocorrectionControllerDidClearAutocorrections:(id)arg1;	// IMP=0x00000000014ded7e
- (void)autocorrectionController:(id)arg1 didUpdateAutocorrectionList:(id)arg2;	// IMP=0x00000000014ded69
- (void)_updateAutocorrectionList:(id)arg1;	// IMP=0x00000000014debd0
- (_Bool)_autocorrectionListMayCausePredictionViewToReappear:(id)arg1;	// IMP=0x00000000014dead4
- (void)_registerAsAutocorrectionObserver;	// IMP=0x00000000014dea5e
- (void)_throttledUpdateUIWithAutocorrectionList:(id)arg1;	// IMP=0x00000000014de820
- (void)_performThrottledUpdateUIWithAutocorrectionList:(id)arg1;	// IMP=0x00000000014de672
- (_Bool)_autocorrectionListContainsContinuousPathConversions:(id)arg1;	// IMP=0x00000000014de581
@property(readonly, nonatomic) NSArray *displayedCandidates;
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000014de47c
- (void)loadView;	// IMP=0x00000000014de34e
- (void)_inputResponderDidChangeNotification:(id)arg1;	// IMP=0x00000000014de33c
- (void)_inputModeDidChange;	// IMP=0x00000000014de2a1
- (void)_registerForNotifications;	// IMP=0x00000000014de1e7
- (void)_clearTextSuggestions;	// IMP=0x00000000014de174
- (id)_currentTextSuggestions;	// IMP=0x00000000014de0f3
- (_Bool)requiresKeyboard;	// IMP=0x00000000014de0eb
- (_Bool)hidesExpandableButton;	// IMP=0x00000000014de0e3
- (double)preferredHeightForTraitCollection:(id)arg1;	// IMP=0x00000000014de0ca
- (_Bool)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2;	// IMP=0x00000000014dd8d2
- (_Bool)_isVisibleForAutocorrectionType:(long long)arg1;	// IMP=0x00000000014dd80d
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000014dd805
- (void)dealloc;	// IMP=0x00000000014dd734
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000014dd6e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

