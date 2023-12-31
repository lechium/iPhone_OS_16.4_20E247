//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SASRequestOptions, SRCompactAutoDismissController, SRCompactViewController, SiriDismissalOptions, SiriSharedUICompactViewModelController;
@protocol AFUIBugReportPresenting, SiriUIPresentationDataSource, SiriUIPresentationDelegate;

@interface SRCompactPresentation : NSObject
{
    SRCompactViewController *_compactViewController;	// 8 = 0x8
    id <AFUIBugReportPresenting> _bugReportingPresenter;	// 16 = 0x10
    SRCompactAutoDismissController *;	// 24 = 0x18
    _Bool _hasPresentedContent;	// 32 = 0x20
    _Bool _userCancelledRequestViaOrbViewTap;	// 33 = 0x21
    _Bool _hasOmittedDialogFromPresenting;	// 34 = 0x22
    _Bool _isPresentingSystemUI;	// 35 = 0x23
    long long _initialRequestSource;	// 40 = 0x28
    unsigned long long _lastDismissalReason;	// 48 = 0x30
    SiriDismissalOptions *_lastDismissalOptions;	// 56 = 0x38
    id <SiriUIPresentationDataSource> _dataSource;	// 64 = 0x40
    id <SiriUIPresentationDelegate> _delegate;	// 72 = 0x48
    SiriSharedUICompactViewModelController *_activeViewModelController;	// 80 = 0x50
    long long _inputType;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x002000000002c405
@property(nonatomic, getter=_inputType, setter=_setInputType:) long long inputType; // @synthesize inputType=_inputType;
@property(retain, nonatomic) SiriSharedUICompactViewModelController *activeViewModelController; // @synthesize activeViewModelController=_activeViewModelController;
@property(nonatomic) __weak id <SiriUIPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SiriUIPresentationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)alwaysShowRecognizedSpeech;	// IMP=0x001000000002c358
- (long long)_viewModelInputTypeForRequestInputType:(long long)arg1;	// IMP=0x001000000002c33e
- (void)_dismissVideoPlayerViewController;	// IMP=0x001000000002c226
- (void)playbackDidFailForVideoPlayerViewController:(id)arg1;	// IMP=0x001000000002c214
- (void)playbackDidFinishForVideoPlayerViewController:(id)arg1;	// IMP=0x001000000002c202
- (void)modalContainerViewControllerViewDidDisappear:(id)arg1;	// IMP=0x001000000002c18d
- (void)modalContainerViewControllerViewWillDisappear:(id)arg1;	// IMP=0x001000000002c118
- (void)autoDismissControllerRequestsDismissal:(id)arg1;	// IMP=0x001000000002c0c7
- (void)_showFullScreenDimmingLayer;	// IMP=0x001000000002c013
- (id)dismissalUserInfo;	// IMP=0x001000000002bf2a
- (void)siriDidHidePasscodeUnlock;	// IMP=0x001000000002bf12
- (void)siriWillShowPasscodeUnlockAndCancelRequest:(_Bool)arg1;	// IMP=0x001000000002bef7
- (_Bool)shouldUseEventDrivenIdleAndQuietUpdates;	// IMP=0x001000000002beef
- (void)didReceiveOrbViewTapToCancelRequest;	// IMP=0x001000000002bee5
- (void)siriIsIdleAndQuietStatusDidChange:(_Bool)arg1;	// IMP=0x001000000002bd54
@property(readonly, copy, nonatomic, getter=_activeRequestOptions) SASRequestOptions *activeRequestOptions;
- (void)compactViewControllerCancelHIDEventDefferal:(id)arg1;	// IMP=0x001000000002bca9
- (void)compactViewControllerRequestsHIDEventDefferal:(id)arg1;	// IMP=0x001000000002bc5d
- (void)viewController:(id)arg1 didFinishEditingUtteranceWithText:(id)arg2 originalUserUtterance:(id)arg3 selectionResults:(id)arg4;	// IMP=0x001000000002b9c1
- (void)viewController:(id)arg1 siriRequestEnteredWithText:(id)arg2;	// IMP=0x001000000002b94c
- (void)compactViewControllerDidEndEditing:(id)arg1;	// IMP=0x001000000002b900
- (void)compactViewController:(id)arg1 willBeginEditingOfType:(long long)arg2;	// IMP=0x001000000002b8a9
- (void)compactViewController:(id)arg1 requestsKeyboardWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002b834
- (_Bool)bugReportPresenterShouldPromptUserForScreenshotPermission:(id)arg1;	// IMP=0x001000000002b82c
- (void)bugReportPresenter:(id)arg1 setStatusViewHidden:(_Bool)arg2;	// IMP=0x001000000002b7db
- (id)bugReportPresenterRequestsPresentingView:(id)arg1;	// IMP=0x001000000002b7c5
- (double)bugReportPresenterRequestsLastPresentationTime:(id)arg1;	// IMP=0x001000000002b7af
- (id)bugReportPresenterRequestsBugReportPrefixForTitle:(id)arg1;	// IMP=0x001000000002b72b
- (id)bugReportPresenterRequestsBugReportKeywordIdentifiers:(id)arg1;	// IMP=0x001000000002b6c4
- (id)bugReportPresenterRequestsActiveConversation:(id)arg1;	// IMP=0x001000000002b6b2
- (void)bugReportPresenter:(id)arg1 setBugReportingAvailable:(_Bool)arg2;	// IMP=0x001000000002b661
- (void)bugReportPresenter:(id)arg1 requestsToTakeScreenshotWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002b5ec
- (void)bugReportPresenter:(id)arg1 requestsToPresentViewController:(id)arg2;	// IMP=0x001000000002b5cb
- (void)bugReportPresenter:(id)arg1 requestsToPerformAceCommand:(id)arg2;	// IMP=0x001000000002b550
- (void)bugReportPresenter:(id)arg1 requestsToOpenURL:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002b4c4
- (void)bugReportPresenter:(id)arg1 requestsToHandlePasscodeUnlockWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002b44f
- (void)_setupBugReportingPresenterIfNecessary;	// IMP=0x001000000002b405
- (void)didReceiveReportBugAction;	// IMP=0x001000000002b3d6
- (void)didReceiveBugButtonLongPress;	// IMP=0x001000000002b3a7
- (id)_analytics;	// IMP=0x001000000002b38e
- (void)userDrilledIntoSnippet;	// IMP=0x001000000002b351
- (void)compactViewController:(id)arg1 viewDidDisappearForAceObject:(id)arg2;	// IMP=0x001000000002b295
- (void)compactViewController:(id)arg1 viewDidAppearForAceObject:(id)arg2;	// IMP=0x001000000002b220
- (void)siriCompactViewController:(id)arg1 willDismissViewController:(id)arg2;	// IMP=0x001000000002b1ab
- (void)didBeginProcessingConversationItems;	// IMP=0x001000000002b16e
- (void)siriCompactViewController:(id)arg1 willPresentViewController:(id)arg2;	// IMP=0x001000000002b0f9
- (id)effectiveCoreLocationBundleForCompactViewController:(id)arg1;	// IMP=0x001000000002b09a
- (void)didPresentContentForCompactViewController:(id)arg1;	// IMP=0x001000000002afc6
- (void)cancelRequestForViewController:(id)arg1;	// IMP=0x001000000002af7a
- (void)stopRecordingForViewController:(id)arg1;	// IMP=0x001000000002af2e
- (void)endSiriSessionForViewController:(id)arg1 withDismissalReason:(unsigned long long)arg2;	// IMP=0x001000000002aedd
- (void)viewController:(id)arg1 requestsHostBackgroundBlurVisible:(_Bool)arg2 reason:(long long)arg3 fence:(id)arg4;	// IMP=0x001000000002ae5d
- (void)viewControllerViewWillDisappear:(id)arg1;	// IMP=0x001000000002ae47
- (void)compactViewController:(id)arg1 setStatusViewHidden:(_Bool)arg2;	// IMP=0x001000000002adf6
- (void)compactViewController:(id)arg1 handleStartLocalRequest:(id)arg2 turnIdentifier:(id)arg3;	// IMP=0x001000000002ad2d
- (void)userTouchedSnippet;	// IMP=0x001000000002acf0
- (void)viewControllerDidPresentUserInterface:(id)arg1;	// IMP=0x001000000002acba
- (id)localeForCompactViewController:(id)arg1;	// IMP=0x001000000002ac5b
- (unsigned long long)lockStateForCompactViewController:(id)arg1;	// IMP=0x001000000002ac08
- (void)stopSpeakingForCompactViewController:(id)arg1;	// IMP=0x001000000002abbc
- (void)compactViewController:(id)arg1 speakText:(id)arg2 isPhonetic:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000002ab1b
- (void)viewController:(id)arg1 performAceCommands:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002a57d
- (void)viewController:(id)arg1 openURL:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002a4f1
- (struct CGRect)effectiveContentFrame;	// IMP=0x001000000002a495
- (struct CGSize)maxSizeForSnippet;	// IMP=0x001000000002a47f
- (void)tapToEditPresented;	// IMP=0x001000000002a433
- (double)expectedContentWidth;	// IMP=0x001000000002a3dc
- (void)siriWillBeginTearDownForDismissalReason:(unsigned long long)arg1 withOriginalDismissalOptions:(id)arg2;	// IMP=0x001000000002a330
- (void)setTopContentInset:(double)arg1 animated:(_Bool)arg2;	// IMP=0x001000000002a31a
- (void)setBottomContentInset:(double)arg1;	// IMP=0x001000000002a304
- (_Bool)hasContentAtPoint:(struct CGPoint)arg1;	// IMP=0x001000000002a1fb
- (void)immersiveExperienceRequestedForViewModelController:(id)arg1;	// IMP=0x001000000002a1a1
- (id)compactViewModelController:(id)arg1 requestsTranscriptItemForAceObject:(id)arg2;	// IMP=0x001000000002a0ff
- (_Bool)siriDeviceLockedForViewModelController:(id)arg1;	// IMP=0x001000000002a0a8
- (_Bool)compactViewModelControllerShouldAlwaysShowRecognizedSpeech:(id)arg1;	// IMP=0x001000000002a096
- (void)compactViewModelController:(id)arg1 didProcessConversationItemsWithIdentifiers:(id)arg2;	// IMP=0x001000000002a021
- (long long)inputTypeForCompactViewModelController:(id)arg1;	// IMP=0x0010000000029ff0
- (void)_activeConversationDidChange;	// IMP=0x0010000000029ef9
- (void)didReceiveUpdateVisualResponseCommand:(id)arg1;	// IMP=0x0010000000029ee3
- (void)didPresentSystemUI;	// IMP=0x0010000000029e52
- (void)resetViewsAndClearASR:(_Bool)arg1;	// IMP=0x0010000000029e3c
- (void)didOmitDialogFromPresenting;	// IMP=0x0010000000029e32
- (void)showFullScreenEffect:(id)arg1;	// IMP=0x0010000000029e1c
- (void)siriDidTapOutsideContent;	// IMP=0x0010000000029e06
- (void)siriDidUpdateASRWithRecognition:(id)arg1;	// IMP=0x0010000000029df0
- (void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(_Bool)arg2;	// IMP=0x0010000000029dda
- (void)siriDidStartSpeakingWithIdentifier:(id)arg1;	// IMP=0x0010000000029dc4
- (void)siriDidDeactivateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000029d39
- (int)viewRegionForPresentedAceObject:(id)arg1;	// IMP=0x0010000000029d23
- (_Bool)supportsVisualPresentationForConversationItem:(id)arg1;	// IMP=0x0010000000029ce2
- (void)handlePlayContentCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000029931
- (_Bool)shouldResumeInterruptedAudioPlayback;	// IMP=0x0010000000029929
- (void)siriDidStartNewConversationWithIdentifier:(id)arg1;	// IMP=0x0010000000029836
- (void)siriDidActivateFromSource:(long long)arg1;	// IMP=0x00100000000296d6
- (void)siriResponseModeDidChange:(unsigned long long)arg1;	// IMP=0x00100000000296c0
- (void)siriRequestWillStartWithRequestOptions:(id)arg1;	// IMP=0x00100000000296a6
- (void)activeRequestOptionsDidChange;	// IMP=0x001000000002963e
- (void)dealloc;	// IMP=0x00100000000295fc
- (void)didReceiveRevealRecognizedSpeechCommand:(id)arg1;	// IMP=0x0010000000029430
- (void)conversation:(id)arg1 didChangeWithTransaction:(id)arg2;	// IMP=0x00100000000293be
- (id)viewController;	// IMP=0x00100000000293b0
- (void)configureForRequestOptions:(id)arg1;	// IMP=0x00100000000292de
- (id)_activeConversation;	// IMP=0x0010000000029234
- (id)_identifierOfPreviousConversation;	// IMP=0x0010000000029140
- (id)_conversationIdentifiers;	// IMP=0x00100000000290e1
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;	// IMP=0x0010000000028f4f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

