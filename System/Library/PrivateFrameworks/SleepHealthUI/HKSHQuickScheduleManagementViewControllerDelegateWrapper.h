//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKSHQuickScheduleManagementViewController;
@protocol HKSHQuickScheduleManagementViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface HKSHQuickScheduleManagementViewControllerDelegateWrapper : NSObject
{
    id <HKSHQuickScheduleManagementViewControllerDelegate> _wrappedDelegate;	// 8 = 0x8
    HKSHQuickScheduleManagementViewController *_viewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000012b885
@property(nonatomic) __weak HKSHQuickScheduleManagementViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <HKSHQuickScheduleManagementViewControllerDelegate> wrappedDelegate; // @synthesize wrappedDelegate=_wrappedDelegate;
- (void)quickScheduleManagementViewControllerWillSave:(id)arg1;	// IMP=0x000000000012b798
- (void)quickScheduleManagementViewController:(id)arg1 shouldPresent:(id)arg2;	// IMP=0x000000000012b6f1
- (void)quickScheduleManagementViewControllerDidCancel:(id)arg1;	// IMP=0x000000000012b697
- (void)quickScheduleManagementViewController:(id)arg1 didSave:(id)arg2;	// IMP=0x000000000012b626

@end

