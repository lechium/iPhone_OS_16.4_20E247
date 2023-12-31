//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface LoadingIndicatorViewController : UIViewController
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_messageLabel;	// 16 = 0x10
    UIActivityIndicatorView *_spinnerView;	// 24 = 0x18
    NSString *_titleText;	// 32 = 0x20
    NSString *_messageText;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000166f
@property(retain, nonatomic) NSString *messageText; // @synthesize messageText=_messageText;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property __weak UIActivityIndicatorView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(nonatomic) __weak UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)dealloc;	// IMP=0x000000000000153e
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000014e2
- (void)viewDidLoad;	// IMP=0x0000000000001421
- (id)initWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x0000000000001390
- (id)init;	// IMP=0x00000000000012ef

@end

