//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class UIView, VUIAppSpinnerView;

__attribute__((visibility("hidden")))
@interface VUIAppLoadingViewController : UIViewController
{
    VUIAppSpinnerView *_loadingView;	// 8 = 0x8
    UIView *_parentView;	// 16 = 0x10
    UIView *_principalView;	// 24 = 0x18
    _Bool _cancelLoading;	// 32 = 0x20
    _Bool _loading;	// 33 = 0x21
}

- (void).cxx_destruct;	// IMP=0x0000000000132c9e
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
- (void)setView:(id)arg1;	// IMP=0x000000000013258f

@end

