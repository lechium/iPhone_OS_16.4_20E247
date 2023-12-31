//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class DDAction, DDReminderCreationController, REMReminderCreationViewController;
@protocol DDRemoteActionPresenter;

@interface DDReminderViewController : UIViewController
{
    id <DDRemoteActionPresenter> _proxy;	// 8 = 0x8
    DDAction *_action;	// 16 = 0x10
    REMReminderCreationViewController *_reminderViewController;	// 24 = 0x18
    DDReminderCreationController *_reminderDelegate;	// 32 = 0x20
}

+ (id)_exportedInterface;	// IMP=0x002000000000fc10
+ (id)_remoteViewControllerInterface;	// IMP=0x001000000000fbd0
- (void).cxx_destruct;	// IMP=0x0020000000010270
- (void)setCancellable:(_Bool)arg1;	// IMP=0x0010000000010210
- (void)adaptForPresentationInPopover:(_Bool)arg1;	// IMP=0x00100000000101f0
- (id)title;	// IMP=0x0010000000010130
- (void)prepareForAction:(id)arg1;	// IMP=0x001000000000fc50

@end

