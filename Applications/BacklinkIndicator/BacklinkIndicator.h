//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BacklinkIndicatorViewController, NSString, NSUserActivity, PGBackgroundPIPAuthorization, PGPictureInPictureProxy;

@interface BacklinkIndicator : NSObject
{
    PGPictureInPictureProxy *_pipProxy;	// 8 = 0x8
    PGBackgroundPIPAuthorization *_pipAuthorization;	// 16 = 0x10
    BacklinkIndicatorViewController *_backlinkIndicatorViewController;	// 24 = 0x18
    _Bool _isActive;	// 32 = 0x20
    NSString *__pipSessionIdentifier;	// 40 = 0x28
    NSUserActivity *_userActivity;	// 48 = 0x30
}

+ (_Bool)isBacklinkIndicatorRequestForScene:(id)arg1 continueUserActivity:(id)arg2;	// IMP=0x002000000000178c
+ (_Bool)isBacklinkIndicatorRequestForScene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x00100000000016d3
- (void).cxx_destruct;	// IMP=0x0020000000002780
@property(retain, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
- (void)backlinkIndicatorViewControllerWillDismiss:(id)arg1;	// IMP=0x0010000000002672
- (void)backlinkIndicatorViewControllerDidReceiveTap:(id)arg1;	// IMP=0x00100000000023fe
- (void)pictureInPictureProxy:(id)arg1 didUpdateStashedOrUnderLockState:(_Bool)arg2;	// IMP=0x0010000000002355
- (void)pictureInPictureProxy:(id)arg1 didStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;	// IMP=0x0010000000002275
- (void)pictureInPictureProxy:(id)arg1 willStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;	// IMP=0x0010000000002181
- (void)pictureInPictureProxy:(id)arg1 failedToStartPictureInPictureWithAnimationType:(long long)arg2 error:(id)arg3;	// IMP=0x0010000000002119
- (void)pictureInPictureProxy:(id)arg1 didStartPictureInPictureWithAnimationType:(long long)arg2;	// IMP=0x0010000000002039
- (id)pictureInPictureProxyViewControllerWindowForTransitionAnimation:(id)arg1;	// IMP=0x0010000000001f73
- (struct CGRect)pictureInPictureProxyViewFrameForTransitionAnimation:(id)arg1;	// IMP=0x0010000000001f14
- (void)_updateUI;	// IMP=0x0010000000001eb6
- (void)hide;	// IMP=0x0010000000001d77
- (void)_createPipProxyIfNeeded;	// IMP=0x0010000000001ca5
- (void)showWithUserActivity:(id)arg1;	// IMP=0x0010000000001869
- (id)_pipSessionIdentifier;	// IMP=0x00100000000017f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

