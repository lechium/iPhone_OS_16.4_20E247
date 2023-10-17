//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, VKCImageAnalysis, VKImageAnalysisInteraction;
@protocol AVVisualAnalysisViewDelegate;

__attribute__((visibility("hidden")))
@interface AVVisualAnalysisView : UIView
{
    _Bool _showsAnalysisButtonIfAvailable;	// 8 = 0x8
    _Bool _analysisButtonVisibleOnlyWhenSelected;	// 9 = 0x9
    _Bool _interactionInProgress;	// 10 = 0xa
    id <AVVisualAnalysisViewDelegate> _delegate;	// 16 = 0x10
    VKCImageAnalysis *_analysis;	// 24 = 0x18
    double _analysisButtonBottomInset;	// 32 = 0x20
    VKImageAnalysisInteraction *_imageAnalysisInteraction;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000e8130
@property(retain, nonatomic) VKImageAnalysisInteraction *imageAnalysisInteraction; // @synthesize imageAnalysisInteraction=_imageAnalysisInteraction;
@property(nonatomic, getter=isInteractionInProgress) _Bool interactionInProgress; // @synthesize interactionInProgress=_interactionInProgress;
@property(nonatomic) double analysisButtonBottomInset; // @synthesize analysisButtonBottomInset=_analysisButtonBottomInset;
@property(nonatomic) _Bool analysisButtonVisibleOnlyWhenSelected; // @synthesize analysisButtonVisibleOnlyWhenSelected=_analysisButtonVisibleOnlyWhenSelected;
@property(nonatomic) _Bool showsAnalysisButtonIfAvailable; // @synthesize showsAnalysisButtonIfAvailable=_showsAnalysisButtonIfAvailable;
@property(copy, nonatomic) VKCImageAnalysis *analysis; // @synthesize analysis=_analysis;
@property(nonatomic) __weak id <AVVisualAnalysisViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resetSelection;	// IMP=0x00000000000e805d
- (_Bool)hasActiveTextSelection;	// IMP=0x00000000000e8040
- (_Bool)highlightsSelectableItems;	// IMP=0x00000000000e8023
- (id)analysisButton;	// IMP=0x00000000000e8006
- (void)_updateActionInfoViewHiddenStateIfNeeded;	// IMP=0x00000000000e7f7c
@property(readonly, nonatomic) _Bool hasProminentText;
@property(nonatomic) _Bool highlightsInteractableAreas;
- (void)_removeInteractionIfNeeded;	// IMP=0x00000000000e7d9b
- (void)_addInteractionIfNeeded;	// IMP=0x00000000000e7cd6
- (void)imageAnalysisInteraction:(id)arg1 highlightSelectedItemsValueDidChange:(_Bool)arg2;	// IMP=0x00000000000e8551
- (void)imageAnalysisInteraction:(id)arg1 didRequestLiveTextButtonSelectedState:(_Bool)arg2;	// IMP=0x00000000000e84fe
- (void)imageAnalysisInteraction:(id)arg1 liveTextButtonDidChangeToVisible:(_Bool)arg2;	// IMP=0x00000000000e84ad
- (void)imageAnalysisInteraction:(id)arg1 prepareForCalloutAction:(SEL)arg2 competion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e8432
- (void)imageAnalysisInteraction:(id)arg1 imageAnalysisButtonPressed:(id)arg2;	// IMP=0x00000000000e8349
- (void)hasActiveTextSelectionDidChangeForImageAnalysisInteraction:(id)arg1;	// IMP=0x00000000000e82f6
- (_Bool)imageAnalysisInteraction:(id)arg1 shouldBeginAtPoint:(struct CGPoint)arg2 forAnalysisType:(unsigned long long)arg3;	// IMP=0x00000000000e8269

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
