//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AFConversation, NSString, SiriUISuggestionsView;
@protocol SRSuggestionsViewControllerDelegate;

@interface SRSuggestionsViewController : UIViewController
{
    AFConversation *_conversation;	// 8 = 0x8
    id <SRSuggestionsViewControllerDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000112d8
@property(nonatomic) __weak id <SRSuggestionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000000112a1
- (_Bool)suggestionsViewIsInTextInputMode:(id)arg1;	// IMP=0x001000000001121b
- (double)contentWidthForSuggestionsView:(id)arg1;	// IMP=0x00100000000111c4
- (void)suggestionsView:(id)arg1 didHideVibrantView:(id)arg2;	// IMP=0x0010000000011130
- (double)statusViewHeightForSuggestionsView:(id)arg1;	// IMP=0x00100000000110d9
- (double)statusBarHeightForSuggestionsView:(id)arg1;	// IMP=0x0010000000011059
- (void)didShowSuggestionsForSuggestionsView:(id)arg1;	// IMP=0x0010000000010fcf
- (void)conversation:(id)arg1 presentationStateDidChangeForItemsAtIndexPaths:(id)arg2;	// IMP=0x0010000000010fc9
- (void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1 inConversation:(id)arg2;	// IMP=0x0010000000010fc3
- (void)conversation:(id)arg1 didRemoveItemsWithIdentifiers:(id)arg2 atIndexPaths:(id)arg3 parentItemIdentifiers:(id)arg4;	// IMP=0x0010000000010fbd
- (void)conversation:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2;	// IMP=0x0010000000010fb7
- (void)conversation:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;	// IMP=0x0010000000010fb1
- (void)keyboardHeightDidChange;	// IMP=0x0010000000010fab
- (void)_createGuideController;	// IMP=0x0010000000010ecc
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000010e4b
- (void)animateOut;	// IMP=0x0010000000010d9e
- (void)showRootGuide;	// IMP=0x0010000000010d98
- (void)showGuideStart;	// IMP=0x0010000000010d92
- (_Bool)isShowingGuide;	// IMP=0x0010000000010d4f
- (void)showGuideAnimated:(_Bool)arg1;	// IMP=0x0010000000010d49
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000010c8e
- (void)hideAcousticIDSpinner;	// IMP=0x0010000000010c51
- (void)showAcousticIDSpinner;	// IMP=0x0010000000010c14
- (void)_showHeaderText:(id)arg1 subheaderText:(id)arg2 largeSubheaderText:(id)arg3;	// IMP=0x0010000000010ab2
- (void)showEmptyView;	// IMP=0x0010000000010a59
- (_Bool)isShowingUserNudge;	// IMP=0x001000000001097d
- (void)showUserNudge;	// IMP=0x00100000000108f7
- (void)showGreeting;	// IMP=0x0010000000010858
- (void)showUnavailable;	// IMP=0x0010000000010716
- (id)_nudgeHeaderText;	// IMP=0x0010000000010645
- (id)_initialHeaderText;	// IMP=0x0010000000010574
- (void)loadView;	// IMP=0x00100000000104ab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SiriUISuggestionsView *view; // @dynamic view;

@end

