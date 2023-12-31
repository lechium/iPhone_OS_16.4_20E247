//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafari/SFUnifiedBar.h>

@class NSArray, NSString, UITextField;
@protocol _SFBarRegistrationToken, _SFNavigationBarDelegateCommon, _SFPopoverSourceInfo;

__attribute__((visibility("hidden")))
@interface UnifiedBar : SFUnifiedBar
{
    id <_SFBarRegistrationToken> _barRegistrationToken;	// 8 = 0x8
    id <_SFNavigationBarDelegateCommon> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000f9952
@property __weak id <_SFNavigationBarDelegateCommon> delegate; // @synthesize delegate=_delegate;
- (void)didCompleteBarRegistrationWithToken:(id)arg1;	// IMP=0x00000000000f9911
@property(readonly, nonatomic) id <_SFPopoverSourceInfo> URLOutlinePopoverSourceInfo;
@property(readonly, nonatomic) id <_SFPopoverSourceInfo> formatMenuButtonPopoverSourceInfo;
- (struct CGRect)urlOutlineFrameRelativeToView:(id)arg1;	// IMP=0x00000000000f96a0
@property(readonly, nonatomic) struct CGRect URLOutlineFrameInNavigationBarSpace;
@property(readonly, copy, nonatomic) NSArray *popoverPassthroughViews;
@property(readonly, nonatomic) UITextField *textField;
- (id)popoverSourceInfoForBarItem:(long long)arg1;	// IMP=0x00000000000f9259
- (void)animateLinkImage:(struct CGImage *)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3 toBarItem:(long long)arg4 afterImageDisappearsBlock:(CDUnknownBlockType)arg5 afterDestinationLayerBouncesBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000000f90d1
- (void)animateSafariIconLinkFromPoint:(struct CGPoint)arg1 inView:(id)arg2;	// IMP=0x00000000000f8fe6
- (void)unifiedTabBar:(id)arg1 multipleExtensionButtonTapped:(id)arg2;	// IMP=0x00000000000f8f75
- (void)unifiedTabBar:(id)arg1 extensionButtonTapped:(id)arg2 extension:(id)arg3;	// IMP=0x00000000000f8ee2
- (void)unifiedTabBar:(id)arg1 didFinishShowingAvailabilityLabelOfType:(long long)arg2;	// IMP=0x00000000000f8e86
- (void)unifiedTabBarURLTapped:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f8e15
- (void)unifiedTabBarMediaStateMuteButtonTapped:(id)arg1;	// IMP=0x00000000000f8dbe
- (void)unifiedTabBarTranslationButtonTapped:(id)arg1;	// IMP=0x00000000000f8d67
- (void)unifiedTabBarReaderButtonTapped:(id)arg1;	// IMP=0x00000000000f8d10
- (void)unifiedTabBarStopButtonTapped:(id)arg1;	// IMP=0x00000000000f8cb9
- (void)unifiedTabBarReloadButtonTapped:(id)arg1;	// IMP=0x00000000000f8c62
- (void)unifiedTabBarVoiceSearchButtonTapped:(id)arg1;	// IMP=0x00000000000f8c0b
- (void)unifiedTabBarMenuButtonClicked:(id)arg1;	// IMP=0x00000000000f8bb4
- (void)unifiedTabBarMenuButtonReceivedTouchDown:(id)arg1;	// IMP=0x00000000000f8b5d
- (void)unifiedTabBarMenuButtonTapped:(id)arg1;	// IMP=0x00000000000f8b06
- (id)viewForBarItem:(long long)arg1;	// IMP=0x00000000000f8aad
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000000f8aa5
- (void)squishedBarTapped;	// IMP=0x00000000000f8a69
- (void)metricsDidChange;	// IMP=0x00000000000f8a12

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

