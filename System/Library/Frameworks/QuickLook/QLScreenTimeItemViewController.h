//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLookUICore/QLItemViewController.h>

@class NSString, STBlockingViewController;

__attribute__((visibility("hidden")))
@interface QLScreenTimeItemViewController : QLItemViewController
{
    long long _policy;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    NSString *_categoryIdentifier;	// 24 = 0x18
    STBlockingViewController *_blockingViewController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000788f
@property(retain, nonatomic) STBlockingViewController *blockingViewController; // @synthesize blockingViewController=_blockingViewController;
@property(retain, nonatomic) NSString *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) long long policy; // @synthesize policy=_policy;
- (void)_updateBlockingViewControllerWithCurrentPolicy;	// IMP=0x00000000000077a3
- (void)hideBlockingViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007764
- (void)showBlockingViewControllerWithPolicy:(long long)arg1;	// IMP=0x000000000000770d
- (_Bool)canEnterFullScreen;	// IMP=0x0000000000007705
- (_Bool)canPinchToDismiss;	// IMP=0x00000000000076fd
- (_Bool)canSwipeToDismiss;	// IMP=0x00000000000076f5
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000072a4
- (id)initWithCategoryIdentifier:(id)arg1;	// IMP=0x0000000000007236
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x00000000000071c8

@end

