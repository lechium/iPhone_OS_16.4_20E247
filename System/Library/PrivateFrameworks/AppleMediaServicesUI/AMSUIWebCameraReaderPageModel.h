//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSMetricsEvent, AMSUIWebClientContext, AMSUIWebNavigationBarModel, NSString, UIViewController;
@protocol AMSUIWebActionRunnable;

__attribute__((visibility("hidden")))
@interface AMSUIWebCameraReaderPageModel : NSObject
{
    _Bool _allowsCameraToggle;	// 8 = 0x8
    _Bool _allowsTextEntry;	// 9 = 0x9
    _Bool _fullScreen;	// 10 = 0xa
    NSString *_backgroundColor;	// 16 = 0x10
    AMSMetricsEvent *_impressionEvent;	// 24 = 0x18
    AMSUIWebNavigationBarModel *_navigationBar;	// 32 = 0x20
    NSString *_bottomLinkLabel;	// 40 = 0x28
    id <AMSUIWebActionRunnable> _bottomLinkAction;	// 48 = 0x30
    long long _pageType;	// 56 = 0x38
    NSString *_primaryLabel;	// 64 = 0x40
    NSString *_secondaryLabel;	// 72 = 0x48
    NSString *_textFieldPlaceholder;	// 80 = 0x50
    id <AMSUIWebActionRunnable> _action;	// 88 = 0x58
    AMSUIWebClientContext *_context;	// 96 = 0x60
    UIViewController *_presentedViewController;	// 104 = 0x68
    struct CGSize _windowSize;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000008060c
@property(nonatomic) __weak UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(retain, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
@property(retain, nonatomic) id <AMSUIWebActionRunnable> action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *textFieldPlaceholder; // @synthesize textFieldPlaceholder=_textFieldPlaceholder;
@property(retain, nonatomic) NSString *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) NSString *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(nonatomic) long long pageType; // @synthesize pageType=_pageType;
@property(nonatomic, getter=isFullScreen) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(retain, nonatomic) id <AMSUIWebActionRunnable> bottomLinkAction; // @synthesize bottomLinkAction=_bottomLinkAction;
@property(retain, nonatomic) NSString *bottomLinkLabel; // @synthesize bottomLinkLabel=_bottomLinkLabel;
@property(nonatomic) _Bool allowsTextEntry; // @synthesize allowsTextEntry=_allowsTextEntry;
@property(nonatomic) _Bool allowsCameraToggle; // @synthesize allowsCameraToggle=_allowsCameraToggle;
@property(readonly, nonatomic) struct CGSize windowSize; // @synthesize windowSize=_windowSize;
@property(readonly, nonatomic) AMSUIWebNavigationBarModel *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(readonly, nonatomic) AMSMetricsEvent *impressionEvent; // @synthesize impressionEvent=_impressionEvent;
@property(readonly, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, copy) NSString *description;
- (id)loadPage;	// IMP=0x000000000007ff85
@property(readonly, nonatomic) _Bool disableReappearPlaceholder;
- (id)createViewControllerForContainer:(id)arg1;	// IMP=0x000000000007ff14
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x000000000007f9da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

