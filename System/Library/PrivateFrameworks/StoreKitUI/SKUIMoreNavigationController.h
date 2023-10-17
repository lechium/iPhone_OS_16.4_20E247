//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIMoreNavigationController.h>

@class UINavigationController, UIViewController;
@protocol SKUIMoreNavigationControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIMoreNavigationController : UIMoreNavigationController
{
    UINavigationController *_displayedViewController;	// 8 = 0x8
    UIViewController *_firstActualViewController;	// 16 = 0x10
    id <SKUIMoreNavigationControllerDelegate> _storeKitDelegate;	// 24 = 0x18
}

+ (Class)_moreListControllerClass;	// IMP=0x006000000003eb54
- (void).cxx_destruct;	// IMP=0x000000000003f08f
@property(nonatomic) __weak id <SKUIMoreNavigationControllerDelegate> storeKitDelegate; // @synthesize storeKitDelegate=_storeKitDelegate;
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000003efb3
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000003ee43
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000003ecf9
- (void)setDisplayedViewController:(id)arg1;	// IMP=0x000000000003ebc7
- (id)displayedViewController;	// IMP=0x000000000003eb65

@end
