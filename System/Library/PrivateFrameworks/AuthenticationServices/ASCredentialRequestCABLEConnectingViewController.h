//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSTimer, UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface ASCredentialRequestCABLEConnectingViewController
{
    NSTimer *_informativeTextTimer;	// 8 = 0x8
    UIActivityIndicatorView *_activityIndicator;	// 16 = 0x10
    UILabel *_informativeTextLabel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001fc3f
- (id)_informativeTextFont;	// IMP=0x000000000001fc1c
- (id)_informativeText;	// IMP=0x000000000001fbfd
- (void)_setUpInformativeTextLabel;	// IMP=0x000000000001f75a
- (void)_showInformativeText;	// IMP=0x000000000001f675
- (void)_startInformativeTextTimerIfNeeded;	// IMP=0x000000000001f52f
- (id)_connectingText;	// IMP=0x000000000001f510
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000001f4b1
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000001f470
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000001f427
- (void)viewDidLoad;	// IMP=0x000000000001eff9
- (id)initRequiringTableView:(_Bool)arg1;	// IMP=0x000000000001efc8

@end
