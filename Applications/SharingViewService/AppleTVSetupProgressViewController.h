//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;

@interface AppleTVSetupProgressViewController
{
    UIButton *_dismissButton;	// 32 = 0x20
    UIImageView *_imageView;	// 40 = 0x28
    UIView *_progressView;	// 48 = 0x30
    UILabel *_progressLabel;	// 56 = 0x38
    UIActivityIndicatorView *_progressSpinner;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000161f85
- (void)handleProgressEvent:(unsigned int)arg1;	// IMP=0x0010000000161e93
- (void)handleDismissButton:(id)arg1;	// IMP=0x0010000000161e0b
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000161d87
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000161bf2

@end

