//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface _UIWaitingForRemoteViewContainerViewController : UIViewController
{
    UIActivityIndicatorView *_loadingSpinner;	// 424 = 0x1a8
}

- (void).cxx_destruct;	// IMP=0x0000000000603b1e
@property(retain, nonatomic) UIActivityIndicatorView *loadingSpinner; // @synthesize loadingSpinner=_loadingSpinner;
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000603af1
- (void)stopSpinner;	// IMP=0x0000000000603ab4
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000603993
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000060381f

@end

