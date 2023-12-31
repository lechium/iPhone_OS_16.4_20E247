//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CPSPermissionItemView, NSString, UIImage, UIImageView, UIView;
@protocol CPSPermissionsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CPSPermissionsViewController : UIViewController
{
    NSString *_appName;	// 8 = 0x8
    UIImageView *_backgroundImageView;	// 16 = 0x10
    UIView *_optionsContainer;	// 24 = 0x18
    CPSPermissionItemView *_notificationItemView;	// 32 = 0x20
    CPSPermissionItemView *_locationConfirmationItemView;	// 40 = 0x28
    _Bool _backgroundImageNeedsUpdate;	// 48 = 0x30
    UIImage *_backgroundImage;	// 56 = 0x38
    id <CPSPermissionsViewControllerDelegate> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000021f43
@property(nonatomic) __weak id <CPSPermissionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(readonly, nonatomic) _Bool allowsPullToDismiss;
- (void)updatePreferredContentSizeForCardWidth:(double)arg1;	// IMP=0x0000000000021e8a
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000021e82
@property(nonatomic) _Bool locationConfirmationPermissionEnabled;
@property(nonatomic) _Bool notificationPermissionEnabled;
- (void)doneTapped;	// IMP=0x0000000000021d71
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000021a93
- (void)setUpOptionsContainer;	// IMP=0x00000000000215ad
- (void)viewDidLoad;	// IMP=0x000000000001ff2f
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000001fd96
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001fd49
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000001fcec
- (id)init;	// IMP=0x000000000001fca8
- (id)initWithAppName:(id)arg1 backgroundImage:(id)arg2;	// IMP=0x000000000001f9ea
- (void)loadView;	// IMP=0x000000000001f9b1

// Remaining properties
@property(readonly, nonatomic) long long cardStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

