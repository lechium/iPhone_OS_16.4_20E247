//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, NSURL, WFRemotePINEntryViewController, _UIFallbackPresentationViewController;

__attribute__((visibility("hidden")))
@interface WFPINEntryViewController : UIViewController
{
    _UIFallbackPresentationViewController *_fallbackPresentationVC;	// 8 = 0x8
    NSArray *_windowsWithDisabledRotation;	// 16 = 0x10
    UIViewController *_rootViewControllerToUse;	// 24 = 0x18
    WFRemotePINEntryViewController *_remoteViewController;	// 32 = 0x20
    NSURL *_URL;	// 40 = 0x28
    NSString *_pageTitle;	// 48 = 0x30
    CDUnknownBlockType _completion;	// 56 = 0x38
    CDUnknownBlockType _dismissCompletionHandler;	// 64 = 0x40
}

+ (Class)remoteViewControllerClass;	// IMP=0x001000000000ec65
+ (id)serviceViewControllerClassName;	// IMP=0x001000000000ec58
- (void).cxx_destruct;	// IMP=0x000000000000fc55
@property(copy, nonatomic) CDUnknownBlockType dismissCompletionHandler; // @synthesize dismissCompletionHandler=_dismissCompletionHandler;
- (void)userDidCancel;	// IMP=0x000000000000fb6e
- (void)userEnteredCorrectPIN;	// IMP=0x000000000000facd
- (unsigned long long)_supportedInterfaceOrientationsForRootViewController;	// IMP=0x000000000000fabb
- (id)delegate;	// IMP=0x000000000000fab3
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x000000000000faa6
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000000fa9b
- (_Bool)shouldAutorotate;	// IMP=0x000000000000fa93
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000000f923
- (_Bool)hasUIWebViewSubView:(id)arg1;	// IMP=0x000000000000f7b9
- (void)presentViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f28b
- (void)insertRemoteViewController:(id)arg1;	// IMP=0x000000000000f118
- (void)dealloc;	// IMP=0x000000000000f088
- (id)initWithURL:(id)arg1 pageTitle:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000ec76

@end

